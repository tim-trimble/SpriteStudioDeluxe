#include "previewobject.h"
#include <iostream>

PreviewObject::PreviewObject(QImage *i, QObject *parent) : QObject(parent)
{
    image = i;
}

void PreviewObject::thread_start(){
    std::cout << "start fetch" << std::endl;
    //emit update_preview(image);
    QThread::sleep(2);
    emit thread_end(image);
}
