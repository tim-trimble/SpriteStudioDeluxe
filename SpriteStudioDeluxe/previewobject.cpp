#include "previewobject.h"

PreviewObject::PreviewObject(QImage *i, QObject *parent) : QObject(parent)
{
    sleepTime = 1;
    image = i;
}

void PreviewObject::thread_start()
{
    QThread::sleep(sleepTime);
    emit thread_end(image);
}

void PreviewObject::set_speed(int fps)
{
    sleepTime = 1/fps;
}
