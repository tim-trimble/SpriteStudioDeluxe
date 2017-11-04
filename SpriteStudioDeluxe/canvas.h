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

    void mousePressEvent(QMouseEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);


    int x;
    int y;

signals:

    void Mouse_DownPos();
    void Mouse_Down();
    void Mouse_Up();
    void Mouse_Left();

public slots:
};

#endif // CANVAS_H
