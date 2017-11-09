#include "previewobject.h"
#include <iostream>

PreviewObject::PreviewObject(QObject *parent) : QObject(parent)
{

}

void PreviewObject::thread_start(){
    std::cout << "start fetch" << std::endl;
    emit fetch_frame();
}

void PreviewObject::receive_frame(QImage *image){
    emit update_preview(image);
}
