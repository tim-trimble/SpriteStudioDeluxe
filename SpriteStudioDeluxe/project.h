#ifndef MODEL_H
#define MODEL_H
#include "frame.h"


class Project
{

private:
    Frame * frames;

public:
    Project(int x, int y);
    ~Project();

public slots:
    void change_pixels();
    void add_frame();

signals:
    void update_pixel();
};


#endif // MODEL_H
