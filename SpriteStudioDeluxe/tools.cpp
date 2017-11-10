#include "tools.h"
#include <iostream>

Tools::Tools(Frame* initial_frame)
{
    active_frame = initial_frame;
    brush_size = 1;
    tool_number = 1;
    eraser_active = false;
    eraser = QColor(255, 255, 255);
    current_color = QColor(Qt::black);
    temp_color = QColor(Qt::black);
    current_image = active_frame->getImage();
}

void Tools::tool_selected(int i)
{
    eraser_active = false;
    tool_number = i;
    std::cout << tool_number << std::endl;

    if (tool_number == 4)
    {
        current_color = eraser;
        eraser_active = true;
    }
    else
    {
        current_color = temp_color;
    }
}

void Tools::brush_size_changed(int size)
{
    brush_size = size;
}

void Tools::frame_changed(Frame* frame)
{
    active_frame = frame;
    current_image = frame->getImage();
}

void Tools::change_color(QColor color)
{
    temp_color = color;
}

void Tools::on_mouse_up(int x, int y)
{
    emit update_can(current_image);
}

void Tools::edit_pixel(int x, int y)
{
    QPainter painter(current_image);
    QPen pen;
    pen.setStyle(Qt::SolidLine);
    if (tool_number == 1) {
        pen.setWidth(8);
        pen.setColor(temp_color);
        //pen.setStyle(Qt::SolidLine);
    }
    else if(tool_number == 2) {
        pen.setWidth(brush_size * 8);
        pen.setColor(temp_color);
    }
    else if(tool_number == 4) {
        painter.setCompositionMode (QPainter::CompositionMode_Source);
        pen.setWidth(brush_size * 8);
        //pen.setColor(eraser);
        //pen.setStyle(Qt::SolidLine);
        //painter.drawPoint(x, y);
        pen.setColor(Qt::transparent);
        painter.setPen(pen);
        painter.scale(.125, .125);

        painter.drawPoint(x, y);
        painter.setCompositionMode (QPainter::CompositionMode_SourceOver);
        painter.end();
        emit update_can(current_image);
        return;
    }
    painter.setPen(pen);
    painter.scale(.125, .125);
    std::cout << "Draw Point " << x << " " << y << std::endl;
    painter.drawPoint(x, y);
    painter.end();
    emit update_can(current_image);
}

void Tools::on_mouse_down(int x, int y)
{
    edit_pixel(x, y);
    emit update_can(current_image);
}

void Tools::on_mouse_drag(int x, int y)
{
    edit_pixel(x, y);
    emit update_can(current_image);
}

Tools::~Tools()
{

}
