#ifndef PREVIEWOBJECT_H
#define PREVIEWOBJECT_H

#include <QObject>
#include <QImage>

class PreviewObject : public QObject {
    Q_OBJECT
public:
    explicit PreviewObject(QObject *parent = Q_NULLPTR);

signals:
    void object_preview_update();
    void fetch_frame();
    void update_preview(QImage *image);

public slots:
    void thread_start();
    void receive_frame(QImage *image);
};

#endif // PREVIEWOBJECT_H
