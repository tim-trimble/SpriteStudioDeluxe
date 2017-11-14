#include "tools.h"
#include "project.h"
#include <iostream>

QVector<std::stack<QImage*>> Project::history;
int Project::current_index;
float Project::zoom_level;

Tools::Tools(Frame* initial_frame)
{
    active_frame = initial_frame;
    brush_size = 1;
    tool_number = 1;
    eraser_active = false;
    eraser = QColor(255, 255, 255);
    current_color = QColor(Qt::black);
    temp_color = QColor(Qt::black);
    current_image = active_frame->get_image();
}

void Tools::tool_selected(int i)
{
    eraser_active = false;
    tool_number = i;
    std::cout << tool_number << std::endl;

    if (tool_number == 4)
    {
        //current_color = eraser;
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
    current_image = frame->get_image();
}

void Tools::change_color(QColor color)
{
    temp_color = color;
}

void Tools::on_mouse_up(int x, int y)
{
    line_endx = x;
    line_endy = y;
    if (tool_number == 7 || tool_number == 8 || tool_number == 3 )
    {
        current_image = base_image;
        if (!(line_endx == line_startx && line_endy == line_starty))
        {
            QImage * archived_image = new QImage(*current_image);
            Project::history[Project::current_index].push(archived_image);
        }
    }
    edit_pixel(x, y);
    line_startx = 0;
    line_starty = 0;
    line_endx = 0;
    line_endy = 0;
}

void Tools::edit_pixel(int x, int y)
{
    current_image->setDevicePixelRatio(Project::zoom_level);
    QPainter painter(current_image);
    painter.scale(Project::zoom_level, Project::zoom_level);
    QPen pen;
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(brush_size * 1/Project::zoom_level);
    pen.setColor(temp_color);

    if (tool_number == 1) { //pencil
        pen.setWidth(1/Project::zoom_level);
    }
    else if(tool_number == 2) { //brush

    }
    else if(tool_number == 4) { //eraser
        painter.setCompositionMode (QPainter::CompositionMode_Source);
        pen.setColor(Qt::transparent);
        painter.setPen(pen);
        painter.drawPoint(x, y);
        painter.setCompositionMode (QPainter::CompositionMode_SourceOver);
        painter.end();
        emit update_can(current_image);
        return;
    }
    else if(tool_number == 3) { //line
        painter.setPen(pen);
        painter.drawLine(line_startx, line_starty, line_endx, line_endy);
        painter.end();
        emit update_can(current_image);
        return;
    }
    else if(tool_number == 5 || tool_number == 6) { //mirror x, mirror y
       painter.setPen(pen);
       painter.drawPoint(x, y);
       if(tool_number == 5) {
            painter.drawPoint(current_image->width()/Project::zoom_level - x - 1, y);
       }
       else {
            painter.drawPoint(x, current_image->height()/Project::zoom_level - y - 1);
       }
       painter.end();
       emit update_can(current_image);
       return;
    }
    else if (tool_number == 7){ //rectangle outline
        painter.setPen(pen);
        painter.drawRect(line_startx, line_starty, line_endx-line_startx, line_endy-line_starty);
        painter.end();
        //active_frame->set_image(current_image);
        emit update_can(current_image);
        return;
    }
    else if (tool_number == 8){ //filled rectangle
        painter.setPen(pen);
        painter.fillRect(line_startx, line_starty, line_endx-line_startx, line_endy-line_starty, temp_color);
        painter.end();
        //active_frame->set_image(current_image);
        emit update_can(current_image);
        return;
    }
    painter.setPen(pen);
    painter.drawPoint(x, y);
    painter.end();
    emit update_can(current_image);
}

void Tools::on_mouse_down(int x, int y)
{
    if (tool_number == 7 || tool_number == 8 || tool_number == 3)
    {
        base_image = current_image;

    }
    else
    {
        //archive the current frame in history
        QImage * archived_image = new QImage(*current_image);
        Project::history[Project::current_index].push(archived_image);
    }

    line_startx = x;
    line_starty = y;
    if(tool_number != 3 && tool_number != 7 && tool_number != 8) {
        edit_pixel(x, y);
    }
}

void Tools::on_mouse_drag(int x, int y)
{
    if (tool_number == 7 || tool_number == 8 || tool_number == 3)
    {
        line_endx = x;
        line_endy = y;
        current_image = new QImage(*base_image);
        edit_pixel(x, y);
        delete current_image;
    }
    else if(tool_number != 3) {
        edit_pixel(x, y);
    }
}

void Tools::clear_canvas()
{
    //archive the current frame in history
    QImage * archived_image = new QImage(*current_image);
    Project::history[Project::current_index].push(archived_image);

    current_image->fill(Qt::transparent);
    std::cout << "Clear" << std::endl;
    emit update_can(current_image);
}

void Tools::fill_canvas()
{
    //archive the current frame in history
    QImage * archived_image = new QImage(*current_image);
    Project::history[Project::current_index].push(archived_image);

    current_image->fill(temp_color);
    std::cout << "fill" << std::endl;
    emit update_can(current_image);
}
Tools::~Tools()
{

}
