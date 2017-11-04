#include "canvas.h"

Canvas::Canvas(QWidget *parent) : QLabel(parent)
{


}

void Canvas::mouseMoveEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_DownPos();
}

void Canvas::mousePressEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_Down();
}

void Canvas::mouseReleaseEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_Up();
}

void Canvas::leaveEvent(QEvent *)
{
    emit Mouse_Left();
}


