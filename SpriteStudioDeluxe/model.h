#ifndef MODEL_H
#define MODEL_H

#include <QObject>

//Represents back end model of sprite editor

class model : public QObject {
    Q_OBJECT
public:
    explicit model(QObject *parent = nullptr);
    ~model();
public slots:

signals:

private:
    QImage image;
}

#endif // MODEL_H
