#ifndef MODEL_H
#define MODEL_H
#include "frame.h"
#include "resizablearray.h"


class Project
{

private:
    ResizableArray<Frame> frames;
    Frame currentFrame;

public:
    Project(int x, int y, int startframes = 1);
    ~Project();

public slots:
    void change_pixels();
    void add_frame();

signals:
    void update_pixel();
};


#endif // MODEL_H
