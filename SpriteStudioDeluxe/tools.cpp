#include "tools.h"
#include "project.h"
#include <iostream>

QVector<std::stack<QImage*>> Project::history;
int Project::current_index;
float Project::zoom_level;

//constructor
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

/*
 * Sets the value tool_number to the passed in value.
 * 1: pencil tool
 * 2: brush tool
 * 3: line tool
 * 4: eraser tool
 * 5: x mirror tool
 * 6: y mirror tool
 * 7: outline rectangle
 * 8: filled rectangle
*/
void Tools::tool_selected(int i)
{
    eraser_active = false;
    tool_number = i;

    if (tool_number == 4)
    {
        eraser_active = true;
    }
    else
    {
        current_color = temp_color;
    }
}

/*
 * Sets the value of brush_size which is used to determine
 * the width of the QPen used when drawing.
*/
void Tools::brush_size_changed(int size)
{
    brush_size = size;
}

/*
 * Changes the current_image pointer to the parameter Frame's
 * image.
*/
void Tools::frame_changed(Frame* frame)
{
    //active_frame = frame;
    current_image = frame->get_image();
}

/*
 * Changes the color of temp_color to the QColor parameters color.
 * This color is used for setting the pens color when drawing.
 */
void Tools::change_color(QColor color)
{
    temp_color = color;
}

/*
 * Receives a signal with the parameter x and y coordinates.  The
 * coordinates are used as the end points for a line or the rectangle tools.
 * Resets the start and end coordinates to 0 after editing a pixel.
 */
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

/*
 * Edits the pixel on current_image at the x and y coordinates passed in.
 * Uses the tool_number value to determine how the pixel is edited.
 * 1: pencil tool
 * 2: brush tool
 * 3: line tool
 * 4: eraser tool
 * 5: x mirror tool
 * 6: y mirror tool
 * 7: outline rectangle
 * 8: filled rectangle
 */
void Tools::edit_pixel(int x, int y)
{
    current_image->setDevicePixelRatio(Project::zoom_level);
    QPainter painter(current_image);
    painter.scale(Project::zoom_level, Project::zoom_level);
    QPen pen;
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(brush_size * 1/Project::zoom_level);
    pen.setColor(temp_color);

    if (tool_number == 1) {
        pen.setWidth(1/Project::zoom_level);
    }    
    else if(tool_number == 4) {
        painter.setCompositionMode (QPainter::CompositionMode_Source);
        pen.setColor(Qt::transparent);
        painter.setPen(pen);
        painter.drawPoint(x, y);
        painter.setCompositionMode (QPainter::CompositionMode_SourceOver);
        painter.end();
        emit update_can(current_image);
        return;
    }
    else if(tool_number == 3) {
        painter.setPen(pen);
        painter.drawLine(line_startx, line_starty, line_endx, line_endy);
        painter.end();
        emit update_can(current_image);
        return;
    }
    else if(tool_number == 5 || tool_number == 6) {
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
    else if (tool_number == 7){
        painter.setPen(pen);
        painter.drawRect(line_startx, line_starty, line_endx-line_startx, line_endy-line_starty);
        painter.end();
        emit update_can(current_image);
        return;
    }
    else if (tool_number == 8){
        painter.setPen(pen);
        painter.fillRect(line_startx, line_starty, line_endx-line_startx, line_endy-line_starty, temp_color);
        painter.end();
        emit update_can(current_image);
        return;
    }
    painter.setPen(pen);
    painter.drawPoint(x, y);
    painter.end();
    emit update_can(current_image);
}

/*
 * Receives an x and y parameter and sets those values to the start
 * point for a line or rectangle. If the current tool is not the line
 * or rectangle tool, the pixel at the (x,y) coordinate is edited.
 */
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

/*
 * Receives an x and y coordinate as the mouse is dragged.  Depending on the
 * current tool, the pixel at the (x,y) coordinate will be edited as a single point
 * or as the end points for a line or rectangle.
 */
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

/*
 * Clears all the pixels of the current image to produce a
 * clean canvas.
 */
void Tools::clear_canvas()
{
    //archive the current frame in history
    QImage * archived_image = new QImage(*current_image);
    Project::history[Project::current_index].push(archived_image);

    current_image->fill(Qt::transparent);
    std::cout << "Clear" << std::endl;
    emit update_can(current_image);
}

/*
 * Changes all pixels in the current image to the current color.
 */
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
