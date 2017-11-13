#include "mainwindow.h"
#include "project.h"
#include <QApplication>
#include "tools.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Project p(256,256); //Not sure on default size
    Tools t(p.get_frame());
    MainWindow w(p, t);

    w.show();

    return a.exec();
}
