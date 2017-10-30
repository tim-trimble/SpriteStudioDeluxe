#include "model.h"

model::model(QObject *parent) : QObject(parent){
    //image = new QImage(int width, int height, QImage::Format_ARGB32);
}

model::~model(){
    delete image;
}

/*How to set a single pixel white
QColor *color = new QColor(255,255,255,255); (r,g,b,a)
image->setPixelColor(int x, int y, color);
*/

/*Shrink or enlarge image
QImage:scaled(int width, int height, Qt::KeepAspectRatio, Qt::FastTransformation);
*/

/*90 degree rotation
QTransform transform;
transform.translate(centerX,centerY);
transform.rotate(90);
*myImage = myImage->transformed(transform,Qt::FastTransformation);
*/

/*Saving
bool success = myImage->save(filename,format,quality);
*/

/*Loading
bool success = myImage->load(filename,format);
*/
