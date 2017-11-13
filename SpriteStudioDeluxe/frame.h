#ifndef FRAME_H
#define FRAME_H

#include <QImage>
#include <QColor>

//frame contains our methods of manipulating QImages in this project

class Frame {
private:
    QImage *image;

public:
    Frame();
    Frame(int x, int y, float zoom_level);
    Frame(QImage image);
    ~Frame();

    int getX();
    int getY();

    void editPixel(int x, int y, QColor color);
    void rotateImage(int angle);
    QImage* getImage();
    void setImage(QImage * newImage);
    void scaleImage(int x, int y);
    void resizeWorkspace(int x, int y);
    void setDevicePixelRatio(float newRatio);

    //mirror
};

#endif // FRAME_H
