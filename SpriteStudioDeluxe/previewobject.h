#ifndef PREVIEWOBJECT_H
#define PREVIEWOBJECT_H

#include <QObject>

class PreviewObject : public QObject {
    Q_OBJECT
public:
    explicit PreviewObject(QObject *parent = Q_NULLPTR);
signals:
    void object_preview_update();
};

#endif // PREVIEWOBJECT_H
