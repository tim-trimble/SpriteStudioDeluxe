#include "project.h"
#include "frame.h"
#include <iostream>

//exit button - maybe check for unsaved changes?

/*Saving
bool success = myImage->save(filename,format,quality);
*/

/*Loading
bool success = myImage->load(filename,format);
*/

Project::Project(int x, int y)
{
    frames = new QVector<Frame*>();
    frames->append(new Frame(x, y));
    currentFrame = frames->at(0);
    currentIndex = 0;
    //currentFrame = frames.begin();

    //run_preview();
}

Project::~Project()
{
    delete frames;
}

void Project::run_preview(){
    //previewThread.start();
    //moveToThread(&previewThread);
    //for(int i = 0; i < frames->size(); i++){
        QThread::sleep(1);
        std::cout << "thread" << std::endl;
    //}
    //run_preview();
}

void Project::update_canvas()
{
    emit send_update(currentFrame->getImage());
}

void Project::mouse_down_pos(int x, int y)
{
    currentFrame->editPixel(x , y, currentColor);
    update_canvas();
}

void Project::change_color(QColor c){
    currentColor = c;
}

void Project::add_frame()
{
    frames->append(new Frame(frames->at(0)->getX(), frames->at(0)->getY()));
    emit update_frame_label(currentIndex + 1, frames->size());
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

    emit update_frame_label(currentIndex + 1, frames->size());
    update_canvas();
}

void Project::swap_frames(int frame1, int frame2)
{
    //Frame copyFrame = frames[frame1];
    //frames[frame1] = frames[frame2];
    //frames[frame2] = copyFrame;
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


