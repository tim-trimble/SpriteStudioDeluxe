#ifndef MODEL_H
#define MODEL_H
#include <QObject>
#include <QImage>
#include <QPixmap>
#include "frame.h"

class Project : public QObject
{
    Q_OBJECT

private:
    std::vector<Frame*> frames;
    std::vector<Frame*>::iterator currentFrame;

public:
    Project(int x, int y);
    ~Project();

public slots:
    void add_frame(int x, int y);
    void update_canvas();
    void next_frame();
    void previous_frame();
    void swap_frames(int frame1, int frame2);
    void get_all_frames();

signals:
    void send_update(QPixmap image);
    void send_all_frames(std::vector<QPixmap> images);
};

#endif // MODEL_H
