#include "model.h"

model::model(QObject *parent) : QObject(parent){
    image = new QImage();

}

model::~model(){
    delete image;

}


