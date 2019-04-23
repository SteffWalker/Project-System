#ifndef PROJECTCONTROLLER_H
#define PROJECTCONTROLLER_H

#include "mainwindow.h"
#include "newproject.h"
#include "projectmodel.h"

class projectcontroller :   public QObject
{

    Q_OBJECT

public:
    projectcontroller();
    //void createProject();

private:
    MainWindow mw;
    NewProject np;

private slots:
    void createProject();
};

#endif // PROJECTCONTROLLER_H
