#ifndef FRAME_H
#define FRAME_H

#include <QImage>
#include <QColor>

//frame contains our methods of manipulating QImages in this project

class Frame {
private:

    QImage *image = Q_NULLPTR;

public:

    Frame();
    Frame(int x, int y, float zoom_level);
    Frame(QImage image);
    ~Frame();

    int get_x();
    int get_y();
    void edit_pixel(int x, int y, QColor color);
    void rotate_image(int angle);
    QImage* get_image();
    void set_image(QImage * new_image);
    void scale_image(int x, int y);
    void resize_workspace(int x, int y);
    void set_device_pixel_ratio(float new_ratio);
};

#endif // FRAME_H
