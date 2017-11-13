#include "project.h"
#include <iostream>
#include <QTextStream>
#include <stack>

Project::Project(int x, int y)
{
    //INIT PROJECT
    currentIndex = 0;
    zoomLevel = .125;
    frames = new QVector<Frame*>();
    frames->append(new Frame(x, y, zoomLevel));
    currentFrame = frames->at(0);

    //INIT PREVIEW ANIMATION
    previewThread = new QThread();
    preview = new PreviewObject(currentFrame->getImage());
    previewIndex = 0;
    preview->moveToThread(previewThread);
    connect(this, SIGNAL(send_preview_frame(QImage*)), preview, SLOT(thread_start()));
    connect(preview, SIGNAL(thread_end(QImage*)), this, SLOT(thread_end()));
    previewThread->start();
    emit send_preview_frame(currentFrame->getImage());

    // HISTORY
    history = * new QVector<std::stack<QImage*>>(100);
    history[0] = * new std::stack<QImage*>;
}

Project::~Project()
{
    previewThread->terminate();
    previewThread->wait();
    delete previewThread;
    delete preview;

    for(int i = 0; i < frames->size(); i++){
        delete frames->at(i);
    }
    delete frames;
}

void Project::thread_end()
{
    if(previewIndex == frames->size() - 1){
        previewIndex = 0;
    } else{
        previewIndex += 1;
    }
    preview->image = frames->at(previewIndex)->getImage();
    emit send_preview_frame(currentFrame->getImage());
}

void Project::update_canvas()
{
    emit send_update(currentFrame->getImage());
}

void Project::mouse_down_pos(int x, int y)
{
    currentFrame->editPixel(x, y, currentColor);
    update_canvas();
}

void Project::change_color(QColor c)
{
    currentColor = c;
}

void Project::add_frame()
{
    frames->append(new Frame(frames->at(0)->getX()-2, frames->at(0)->getY()-2, zoomLevel));
    history.append(* new std::stack<QImage*>);
    emit update_frame_label(currentIndex + 1, frames->size());
}

Frame* Project::get_frame(){
    return currentFrame;
}

void Project::next_frame()
{
    if(frames->size() == currentIndex + 1){
        currentIndex = 0;
        currentFrame = frames->at(currentIndex);
    } else {
        currentIndex += 1;
        currentFrame = frames->at(currentIndex);
    }
    emit frame_changed(currentFrame);
    emit update_frame_label(currentIndex + 1, frames->size());
    update_canvas();
}

void Project::previous_frame()
{
    if(currentIndex == 0){
        currentIndex = frames->size() - 1;
        currentFrame = frames->at(currentIndex);
    } else {
        currentIndex -= 1;
        currentFrame = frames->at(currentIndex);
    }
    emit frame_changed(currentFrame);
    emit update_frame_label(currentIndex + 1, frames->size());
    update_canvas();
}

void Project::rotate_frame(){
    Frame* newFrame = frames->at(currentIndex);
    newFrame->rotateImage(90);
    frames->replace(currentIndex, newFrame);
    currentFrame = newFrame;

    emit frame_changed(currentFrame);
    update_canvas();
}

void Project::save_project(QString filename)
{
    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
    {
        return;
    }
    else
    {
        QTextStream out(&file);
        int x = frames->at(0)->getX();
        int y = frames->at(0)->getY();
        out << QString::number(x) << QString(" ") << QString::number(y) << QString("\n");
        out << QString::number(frames->size()) << QString("\n");
        for(int i = 0; i < frames->size(); i++)
        {
            QImage img = *frames->at(i)->getImage();
            img.setDevicePixelRatio(1);
            for(int j = 0; j < y; j++)
            {
                for (int k = 0; k < x; k++)
                {
                    QColor color= img.pixelColor(k, j);
                    out << color.red() << " " << color.green() << " " << color.blue() << " " << color.alpha() << " ";
                }
                out << QString("\n");
            }
        }
        file.close();
    }
}

void Project::load_project(QString filename)
{
    zoomLevel = .5;

    //clear frame history stacks from project we are loading over
    history.clear();

    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        return;
    }
    else
    {
        QTextStream in(&file);
        frames->clear();
        QString str;
        in >> str;
        int x = str.toInt();
        str.clear();
        in >> str;
        int y = str.toInt();
        str.clear();
        in >> str;
        int frame_count = str.toInt();
        for(int i = 0; i< frame_count; i++)
        {
            //for each new frame added, add a history stack for it in our history vector
            history.append(* new std::stack<QImage*>);

            Frame * f = new Frame(x, y, zoomLevel);
            for(int j = 0; j < y - 1; j++)
            {
                for(int k = 0; k < x; k++)
                {
                    QColor color;
                    str.clear();
                    in >> str;
                    color.setRed(str.toInt());
                    str.clear();
                    in >> str;
                    color.setGreen(str.toInt());
                    str.clear();
                    in >> str;
                    color.setBlue(str.toInt());
                    str.clear();
                    in >> str;
                    color.setAlpha(str.toInt());
                    f->editPixel(k, j, color);
                }
            }
            frames->append(f);
        }
        file.close();
        currentFrame = frames->at(0);
        currentIndex = 0;
        update_canvas();
        emit frame_changed(currentFrame);
        emit update_frame_label(currentIndex + 1, frames->length());
    }
}

void Project::export_project(QString export_type)
{

}

// called when the UI requests to go back one frame of history
void Project::history_step_back()
{
    if (history[currentIndex].size() == 0)
    {
        std::cout << "You have no history to revert to on this frame" << std::endl;
        return;
    }

    currentFrame->setImage(history[currentIndex].top());
    history[currentIndex].top()->setDevicePixelRatio(zoomLevel);
    history[currentIndex].pop();
    update_canvas();
    emit frame_changed(currentFrame);
}

void Project::zoom_in()
{
    if (zoomLevel == .0625)
    {
        return;
    }

    zoomLevel /= 2;

    for(int i = 0; i < frames->count() ; i++)
    {
        frames->at(i)->setDevicePixelRatio(zoomLevel);
    }

    update_canvas();
}

void Project::zoom_out()
{
    if (zoomLevel == 1)
    {
        return;
    }

    zoomLevel *= 2;

    for(int i = 0; i < frames->count() ; i++)
    {
        frames->at(i)->setDevicePixelRatio(zoomLevel);
    }

    update_canvas();
}

void Project::new_project(){
    //INIT PROJECT
    currentIndex = 0;
    zoomLevel = .125;
    frames->clear();
    frames->append(new Frame(64, 64, zoomLevel));
    currentFrame = frames->at(0);
    update_canvas();
    emit frame_changed(frames->at(0));
}

