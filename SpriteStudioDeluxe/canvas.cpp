#include "canvas.h"

Canvas::Canvas(QWidget *parent) : QLabel(parent)
{

}


// QT AUTO GENERATED EVENT HANDLERS

void Canvas::mouseMoveEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit c_mouse_down_pos(x, y);
}

void Canvas::mousePressEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit c_mouse_down();
}

void Canvas::mouseReleaseEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit c_mouse_up();
}

void Canvas::leaveEvent(QEvent *)
{
    emit c_mouse_left();
}




