#include "mainwindow.h"
#include "volume.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //volume v;
    //v.show();
    return a.exec();
}
