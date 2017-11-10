#include "previewobject.h"

PreviewObject::PreviewObject(QImage *i, QObject *parent) : QObject(parent)
{
    image = i;
}

void PreviewObject::thread_start()
{
    QThread::sleep(2);
    emit thread_end(image);
}
