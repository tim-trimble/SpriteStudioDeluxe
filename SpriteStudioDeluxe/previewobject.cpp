#include "previewobject.h"

PreviewObject::PreviewObject(QImage *i, QObject *parent) : QObject(parent)
{
    image = i;
}

void PreviewObject::thread_start()
{
    QTime interval = QTime::currentTime().addSecs(1);
    while(QTime::currentTime() < interval){

    }

    emit thread_end(image);
}

