#include "mainwindow.h"
#include "project.h"
#include <QApplication>
#include "tools.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    

    Project p(64,64);
    Tools t(p.get_frame());
    MainWindow w(p, t);

    p.update_canvas();

    w.show();

    return a.exec();
}
