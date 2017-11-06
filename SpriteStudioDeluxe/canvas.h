#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QEvent>
#include <QDebug>

class Canvas : public QLabel
{
    Q_OBJECT

public:   
    explicit Canvas(QWidget *parent = nullptr);
    // QT AUTO GENERATED EVENT HANDLERS
    void mousePressEvent(QMouseEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);

    // stores the x/y coord of the mouse on canvas
    // updated every time the mouse is clicked and constantly when the mouse is held down
    int x;
    int y;

signals:
    void c_mouse_down_pos(int x, int y);
    void c_mouse_down();
    void c_mouse_up();
    void c_mouse_left();

public slots:
};

#endif // CANVAS_H
