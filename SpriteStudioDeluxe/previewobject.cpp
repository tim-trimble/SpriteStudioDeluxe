#include "previewobject.h"
#include <iostream>

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
    //std::cout << "set speed" << fps << std::endl;
    //sleepTime = 1/fps;
    //std::cout << "sleep time" << sleepTime << std::endl;
}
