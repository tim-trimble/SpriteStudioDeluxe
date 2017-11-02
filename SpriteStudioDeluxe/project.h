#ifndef MODEL_H
#define MODEL_H
#include <QObject>
#include <QImage>
#include <QPixmap>

class Project : public QObject
{
    Q_OBJECT

private:
    std::vector<QImage> frames;
    std::vector<QImage>::iterator currentFrame;

public:
    Project(int x, int y);
    ~Project();

public slots:
    void add_frame();
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
