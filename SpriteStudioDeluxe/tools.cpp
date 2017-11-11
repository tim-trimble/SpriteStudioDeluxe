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
    line_endx = x;
    line_endy = y;
    edit_pixel(x, y);
    std::cout << "Saving Image" << std::endl;
    QImage* new_image(current_image);
    undo_stack.push(new_image);
    //emit update_can(current_image);
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
    else if(tool_number == 3) {
        pen.setColor(temp_color);
        pen.setWidth(brush_size * 8);
        painter.setPen(pen);
        painter.scale(.125, .125);
        painter.drawLine(line_startx, line_starty, line_endx, line_endy);
        line_startx = 0;
        line_starty = 0;
        line_endx = 0;
        line_endy = 0;
        painter.end();
        emit update_can(current_image);
        return;
    }
    else if(tool_number == 5 || tool_number == 6) {
       pen.setColor(temp_color);
       pen.setWidth(brush_size * 8);
       painter.setPen(pen);
       painter.scale(.125, .125);
       painter.drawPoint(x, y);
       if(tool_number == 5) {
            painter.drawPoint(current_image->width() - x - 1, y);
       }
       else {
            painter.drawPoint(x, current_image->height() - y - 1);
       }
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
    line_startx = x;
    line_starty = y;
    if(tool_number != 3) {
        edit_pixel(x, y);
    }
}

void Tools::on_mouse_drag(int x, int y)
{
    if(tool_number != 3) {
        edit_pixel(x, y);
    }
    emit update_can(current_image);
}

Tools::~Tools()
{

}
