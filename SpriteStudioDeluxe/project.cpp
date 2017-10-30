#include "project.h"

//image = new QImage(int width, int height, QImage::Format_ARGB32);

Project::Project(int x, int y)
{
    frames;
    frames.push_back(QImage());
    currentFrame = frames.begin();
}

Project::~Project(){}

/*How to set a single pixel white
QColor *color = new QColor(255,255,255,255); (r,g,b,a)
image->setPixelColor(int x, int y, color);
*/

/*Shrink or enlarge image
QImage:scaled(int width, int height, Qt::KeepAspectRatio, Qt::FastTransformation);
*/

/*90 degree rotation
QTransform transform;
transform.translate(centerX,centerY);
transform.rotate(90);
*myImage = myImage->transformed(transform,Qt::FastTransformation);
*/

/*Saving
bool success = myImage->save(filename,format,quality);
*/

/*Loading
bool success = myImage->load(filename,format);
*/

void Project::add_frame()
{
    frames.push_back(QImage());
}

void Project::update_canvas()
{
    QPixmap pixmap = QPixmap::fromImage(*currentFrame);
    emit send_update(pixmap);
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
    QImage copyFrame = frames[frame1];
    frames[frame1] = frames[frame2];
    frames[frame2] = copyFrame;
}

void Project::get_all_frames()
{
    std::vector<QPixmap> tempVec;
    for(auto iter = frames.begin(); iter != frames.end();
        iter++)
    {
        QPixmap pixmap = QPixmap::fromImage(*iter);
        tempVec.push_back(pixmap);
    }
    emit send_all_frames(tempVec);
}
