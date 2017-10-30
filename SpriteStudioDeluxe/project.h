#ifndef MODEL_H
#define MODEL_H
#include "frame.h"
#include <vector>
#include <QObject>

class Project : public QObject
{
    Q_OBJECT

private:

    // I removed the resizablearray files because they don't compile right now. I have a local copy of them.
    // I think the vector would work better anyway, but if you'd like to implement the resizable array, let me know and I can
    // pass the files back in! -Patrick
    std::vector<Frame> frames;
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
