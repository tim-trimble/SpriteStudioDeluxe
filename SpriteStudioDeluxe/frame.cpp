#include "frame.h"

Frame::Frame(int width, int height){ //Not sure about a default size
    image = new QImage(width, height, QImage::Format_ARGB32);
}

Frame::~Frame(){
    delete image;
}

void Frame::editPixel(int x, int y, QColor color){ //new QColor(r,g,b,a)
    image->setPixelColor(x, y, color);
}

void Frame::rotateImage(int angle){
    QTransform transform;
    transform.translate(image->width()/2, image->height()/2);
    transform.rotate(angle);
    *image = image->transformed(transform, Qt::FastTransformation);
}

QImage Frame::getImage(){
    return *image;
}

/*Shrink or enlarge image
QImage:scaled(int width, int height, Qt::KeepAspectRatio, Qt::FastTransformation);
*/

/*Mirror
*myImage = myImage->mirrored(); defaults to x-axis
mirrored(true,false); y-axis
mirrored(true,true); both
*/

/*Resize an existing image while maintaining pixel organization
*myImage = myImage->copy(0,0,newWidth,newHeight);
*/


