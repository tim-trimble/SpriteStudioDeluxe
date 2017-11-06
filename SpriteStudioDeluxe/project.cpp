#include "project.h"
#include "frame.h"

//exit button - maybe check for unsaved changes?

/*Saving
bool success = myImage->save(filename,format,quality);
*/

/*Loading
bool success = myImage->load(filename,format);
*/

Project::Project(int x, int y)
{
    frames.append(Frame(x, y));
    currentFrame = frames.begin();
}

Project::~Project(){}

void Project::add_frame(int x, int y)
{
    frames.append(Frame(x, y));
}

void Project::update_canvas()
{
    //Frame frame = *currentFrame;
    //QPixmap pixmap = QPixmap::fromImage(frame.getImage());
    emit send_update(currentFrame->getImage());
}

void Project::next_frame()
{
    if(currentFrame == frames.end())
    {
        currentFrame = frames.begin();
    }
    else
    {
        currentFrame++;
    }
    update_canvas();
}

void Project::previous_frame()
{
    if(currentFrame == frames.begin())
    {
        currentFrame = frames.end();
    }
    else
    {
        currentFrame--;
    }
    update_canvas();
}

void Project::swap_frames(int frame1, int frame2)
{
    Frame copyFrame = frames[frame1];
    frames[frame1] = frames[frame2];
    frames[frame2] = copyFrame;
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
}

void Project::load_project(QString filename)
{
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
}

void Project::update_pixel(int x, int y, QColor color){
    currentFrame->editPixel(x, y, color);
}
