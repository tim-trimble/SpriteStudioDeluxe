#ifndef TOOLS_H
#define TOOLS_H
#include "frame.h"
#include <QObject>
#include <QImage>
#include <QColor>
#include <QPainter>
#include <QPen>

class Tools : public QObject
{
    Q_OBJECT

private:
    int tool_number;
    int brush_size;
    bool eraser_active;
    Frame* active_frame;
    QImage* current_image;
    QColor current_color;
    QColor eraser;
    QColor temp_color;

    void edit_pixel(int, int);

public:
    Tools(Frame*);
    ~Tools();

signals:
    void update_can(QImage*);

public slots:
    void tool_selected(int);
    void brush_size_changed(int);
    void frame_changed(Frame*);
    void on_mouse_down(int, int);
    void on_mouse_drag(int, int);
    void on_mouse_up(int, int);
    void change_color(QColor);


};

#endif // TOOLS_H
