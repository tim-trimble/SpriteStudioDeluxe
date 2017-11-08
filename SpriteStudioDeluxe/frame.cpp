#include "frame.h"

Frame::Frame(int width, int height){ //Not sure about a default size
    image = new QImage(width, height, QImage::Format_ARGB32);
}

Frame::~Frame(){
    delete image;
}

Frame::Frame(QImage img)
{
    image = &img;
}

Frame::Frame()
{

}

int Frame::getX(){
    return image->width();
}

int Frame::getY(){
    return image->height();
}

void Frame::editPixel(int x, int y, QColor color){
    image->setPixelColor(x, y, color);
}

void Frame::rotateImage(int angle){
    QTransform transform;
    transform.translate(image->width()/2, image->height()/2);
    transform.rotate(angle);
    *image = image->transformed(transform, Qt::FastTransformation);
}

QImage* Frame::getImage(){
    return image;
}

void Frame::scaleImage(int x, int y){
    QImage* temp = image;
    image = new QImage(image->scaled(x, y, Qt::KeepAspectRatio, Qt::FastTransformation));
    delete temp;
}

void Frame::resizeWorkspace(int x, int y){
    QImage* temp = image;
    image = new QImage(image->copy(0, 0, x, y));
    delete temp;
}

/*Mirror
*myImage = myImage->mirrored(); defaults to x-axis
mirrored(true,false); y-axis
mirrored(true,true); both
*/
