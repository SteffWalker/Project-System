#include <QApplication>
#include "mainwindow.h"
#include "newproject.h"
#include "projectmodel.h"
#include "projectcontroller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    projectcontroller controller;

    return a.exec();
}
