#include "project.h"

//save
//load
//new
//exit - maybe check for unsaved changes?

/*Saving
bool success = myImage->save(filename,format,quality);
*/

/*Loading
bool success = myImage->load(filename,format);
*/

Project::Project(int x, int y)
{
    frames.push_back(new Frame(x, y));
    currentFrame = frames.begin();
}

Project::~Project(){}

void Project::add_frame(int x, int y)
{
    frames.push_back(new Frame(x, y));
}

void Project::update_canvas()
{
  //  QPixmap pixmap = QPixmap::fromImage(*currentFrame);
  //  emit send_update(pixmap);
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
   // QImage copyFrame = frames[frame1];
   // frames[frame1] = frames[frame2];
   // frames[frame2] = copyFrame;
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
