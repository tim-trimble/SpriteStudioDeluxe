#include "frame.h"

Frame::Frame(int width, int height, float zoom_level)
{
    image = new QImage(width, height, QImage::Format_ARGB32);
    image->fill(QColor(0,0,0,0));
    image->setDevicePixelRatio(zoom_level);
}

Frame::~Frame()
{
    delete image;
}

Frame::Frame(QImage img)
{
    image = new QImage(img);
}

Frame::Frame()
{

}

int Frame::get_x()
{
    return image->width();
}

int Frame::get_y()
{
    return image->height();
}

void Frame::edit_pixel(int x, int y, QColor color)
{
    image->setPixelColor(x, y, color);
}

void Frame::rotate_image(int angle)
{
    QTransform transform;
    transform.translate(image->width()/2, image->height()/2);
    transform.rotate(angle);
    qreal zoom = image->devicePixelRatio();

    image = new QImage(image->transformed(transform, Qt::FastTransformation));
    image->setDevicePixelRatio(zoom);
}

QImage* Frame::get_image()
{
    return image;
}

void Frame::set_image(QImage * new_image)
{
    image = new_image;
}

void Frame::scale_image(int x, int y)
{
    image = new QImage(image->scaled(x, y, Qt::KeepAspectRatio, Qt::FastTransformation));
}

void Frame::resize_workspace(int x, int y)
{
    image = new QImage(image->copy(0, 0, x, y));
}

void Frame::set_device_pixel_ratio(float new_ratio)
{
    image->setDevicePixelRatio(new_ratio);
}
