#ifndef MODEL_H
#define MODEL_H
#include <QObject>
#include <QImage>
#include <QPixmap>
#include <QFile>
#include "frame.h"

class Project : public QObject
{
    Q_OBJECT

private:
    QVector<Frame> frames;
    QVector<Frame>::iterator currentFrame;

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
    void save_project(QString filename);
    void load_project(QString filename);
    void update_pixel(int x, int y, QColor color);

signals:
    void send_update(QPixmap image);
    void send_all_frames(std::vector<QPixmap> images);
};

#endif // MODEL_H
