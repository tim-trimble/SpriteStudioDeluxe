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
    Frame(int x, int y);
    Frame(QImage image);
    ~Frame();

    int getX();
    int getY();

    void editPixel(int x, int y, QColor color);

    void rotateImage(int angle);

    QImage* getImage();

    void scaleImage(int x, int y);

    void resizeWorkspace(int x, int y);

    //mirror
};

#endif // FRAME_H
