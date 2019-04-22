#include "mainwindow.h"
#include "newproject.h"
#include "projectmodel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NewProject np;
    projectModel pm;
    MainWindow w;
    w.show();

    return a.exec();
}
