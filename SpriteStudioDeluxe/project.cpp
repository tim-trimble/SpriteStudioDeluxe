#include "project.h"
#include <iostream>
#include <stack>

Project::Project(int x, int y)
{
    //INIT PROJECT
    frames = new QVector<Frame*>();
    frames->append(new Frame(x, y));
    currentFrame = frames->at(0);
    currentIndex = 0;

    previewThread = new QThread();
    preview = new PreviewObject(currentFrame->getImage());
    currentIndex = 0;

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
    history[0].push(currentFrame->getImage());
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
    frames->append(new Frame(frames->at(0)->getX(), frames->at(0)->getY()));
    history[currentIndex+1] = * new std::stack<QImage*>;
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

void Project::get_all_frames()
{
    /*
    std::vector<QPixmap> tempVec;
    for(auto iter = frames.begin(); iter != frames.end();
        iter++)
    {
        QPixmap pixmap = QPixmap::fromImage(*iter);
        tempVec.push_back(pixmap);
    }
    emit send_all_frames(tempVec);
    */
}

void Project::save_project(QString filename)
{
    /*
    if(filename.isEmpty())
    {
        return;
    }
    else
    {
        QFile file(filename);
        if(!file.open(QIODevice::WriteOnly))
        {
            return;
        }
        else
        {
            QImage image;
            QDataStream out(&file);
            out.setVersion(QDataStream::Qt_5_9);
            for(auto iter=frames.begin();iter!=frames.end();iter++)
            {
                //image = iter->getImage();
                //out << image;
            }
            file.close();
        }
    }
    */
}

void Project::load_project(QString filename)
{
    /*
    if(filename.isEmpty())
    {
        return;
    }
    else
    {
        QFile file(filename);
        if(!file.open(QIODevice::ReadOnly))
        {
            return;
        }
        else
        {
            QDataStream in(&file);
            in.setVersion(QDataStream::Qt_5_9);
            frames.clear();
            int numFrames;
            in >> numFrames;
            QImage image;
            for(unsigned i = 0; i<numFrames; i++)
            {
                in >> image;
                Frame f(image);
                frames.append(f);
            }
        }
    }
    */
}

void Project::export_project(QString export_type)
{

}

// called when the UI requests to go back one frame of history
void Project::historyStepBack()
{
    if (history[currentIndex].size() == 0)
    {
        std::cout << "You have no history to revert to on this frame" << std::endl;
        return;
    }

    // retreive history frame from history stack vector
    QImage * oldFrame = history[currentIndex].top();
    history[currentIndex].pop();
    // update the current QImage to the retrieved QImage
    currentFrame->setImage(oldFrame);
    // Send a signal to the View to update the QImage displayed
    update_canvas();
}
