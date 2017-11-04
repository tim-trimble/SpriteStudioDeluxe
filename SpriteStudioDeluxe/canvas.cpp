#include "canvas.h"

Canvas::Canvas(QWidget *parent) : QWidget(parent)
{


}

void Canvas::PosWhileDownEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_DownPos();
}

void Canvas::MouseDownEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_Down();
}

void Canvas::MouseUpEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_Up();
}

void Canvas::LeftCanvasEvent(QEvent *)
{
    emit Mouse_Left();
}


