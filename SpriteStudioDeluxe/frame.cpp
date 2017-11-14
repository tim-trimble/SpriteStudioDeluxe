#include "frame.h"

Frame::Frame(int width, int height, float zoom_level){
    image = new QImage(width, height, QImage::Format_ARGB32);
    image->fill(QColor(0,0,0,0));
    image->setDevicePixelRatio(zoom_level);
}

Frame::~Frame(){
    delete image;
}

Frame::Frame(QImage img){
    image = new QImage(img);
}

Frame::Frame(){

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
    qreal zoom = image->devicePixelRatio();

    image = new QImage(image->transformed(transform, Qt::FastTransformation));
    image->setDevicePixelRatio(zoom);
}

QImage* Frame::getImage(){
    return image;
}

void Frame::setImage(QImage * newImage)
{
    image = newImage;
}

void Frame::scaleImage(int x, int y){
    image = new QImage(image->scaled(x, y, Qt::KeepAspectRatio, Qt::FastTransformation));
}

void Frame::resizeWorkspace(int x, int y){
    image = new QImage(image->copy(0, 0, x, y));
}

void Frame::setDevicePixelRatio(float newRatio)
{
    image->setDevicePixelRatio(newRatio);
}
