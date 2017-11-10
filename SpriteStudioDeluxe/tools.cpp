#include "tools.h"
#include <iostream>

Tools::Tools(Frame* initial_frame)
{
    active_frame = initial_frame;
    brush_size = 1;
    tool_number = 1;
    eraser_active = false;
    eraser = QColor(0,0,0,0);
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
    int col = x - ((brush_size / 2) / .125);
    int row = y - ((brush_size / 2) / .125);


    for (int i = row; i < row + brush_size / .125; i++)
    {
        for (int j = col; j < col + brush_size / .125; j++)
        {
            if (j<256 && j>0 && i<256 && i>0)
                current_image->setPixelColor(j*.125, i*.125, current_color);
        }
    }
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
