#ifndef FRAME_H
#define FRAME_H
#include"Pixel.h"

//frame will contain our methods of manipulating QImages in this project

class Frame {
private:
    QImage *image;
public:
    void editPixel(int x, int y, QColor color);

    void rotateImage(int angle);

    //shrink/enlarge

    //mirror

    //resize an image while maintaining current pixel organization
};


#endif // FRAME_H
