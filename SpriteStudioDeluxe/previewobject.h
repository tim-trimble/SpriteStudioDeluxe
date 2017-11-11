#ifndef PREVIEWOBJECT_H
#define PREVIEWOBJECT_H

#include <QObject>
#include <QImage>
#include <QThread>

//project puts this on a different thread to run preview animation

class PreviewObject : public QObject {
    Q_OBJECT
private:
    double sleepTime;

public:
    QImage* image;
    explicit PreviewObject(QImage* image, QObject *parent = Q_NULLPTR);

signals:
    //sent to project AND mainwindow
    void thread_end(QImage *image);

public slots:
    void thread_start();
    void set_speed(int fps);
};

#endif // PREVIEWOBJECT_H