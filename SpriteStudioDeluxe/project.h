#ifndef MODEL_H
#define MODEL_H
#include "frame.h"


class Project
{

private:
    Frame * frames;

public:
    Project();
    ~Project();

public slots:
    void change_pixel();

signals:
    void update_pixel();
};


#endif // MODEL_H
