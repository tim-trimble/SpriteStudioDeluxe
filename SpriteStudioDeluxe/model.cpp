#include "model.h"

model::model(QObject *parent) : QObject(parent){
    //image = new QImage(int width, int height, QImage::Format_ARGB32);

    /*Example of how to set a single pixel white
    QColor *color = new QColor(255,255,255,255); (r,g,b,a)
    image->setPixelColor(int x, int y, color);
    */
}

model::~model(){
    delete image;

}

/*Shrink or enlarge image

QImage:scaled(int width, int height, Qt::KeepAspectRatio, Qt::FastTransformation);

*/

/*Transformation functions



*/

/*Zoom functions


*/
