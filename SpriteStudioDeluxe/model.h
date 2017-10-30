#ifndef MODEL_H
#define MODEL_H

#include <QObject>

//Represents back end model of sprite editor

class model : public QObject {
    Q_OBJECT

public:
    explicit model(QObject *parent = nullptr);
    ~model();

public slots: //View requests that will be sent to model

    //Change a pixel

    //Change an array of pixels

    //Perform a transformation (rotation)

    //Zoom in view

    //Zoom out view

signals: //Signals with updated information for view

private:
    QImage image;

}

#endif // MODEL_H
