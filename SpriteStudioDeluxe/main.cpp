#include "mainwindow.h"
#include "project.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Project p(256,256); //Not sure on default size
    MainWindow w(p);
    w.show();

    return a.exec();
}
