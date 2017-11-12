#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QImage>
#include <QPixmap>
#include <QFile>
#include "frame.h"
#include <QThread>
#include "previewobject.h"
#include <stack>
//#include "QtGifImage-master/src/gifimage/qgifimage.h"

//model for mainwindow editor

class Project : public QObject
{
    Q_OBJECT

private:
    QVector<Frame*> *frames;
    //int currentIndex;
    int previewIndex;

    Frame* currentFrame;
    QColor currentColor = QColor(0,0,0,255);

public:
    static QVector<std::stack<QImage*>> history;
    static int currentIndex;
    int maxHistorySize = 50;

    PreviewObject *preview;
    QThread* previewThread;

    Project(int x, int y);
    ~Project();

public slots:
    void thread_end();

    void update_canvas();
    void mouse_down_pos(int x, int y);
    void change_color(QColor c);

    void add_frame();
    Frame* get_frame();
    void next_frame();
    void previous_frame();
    void get_all_frames();

    void save_project(QString filename);
    void load_project(QString filename);
    void export_project(QString export_type);

    void historyStepBack();

signals:
    void send_update(QImage *image);

    void send_all_frames(std::vector<QPixmap> images);
    void frame_changed(Frame*);
    void send_preview_frame(QImage *image);

    void update_frame_label(int current, int total);
};

#endif // MODEL_H
