#ifndef PROJECTCONTROLLER_H
#define PROJECTCONTROLLER_H

#include "mainwindow.h"
#include "newproject.h"
#include "projectmodel.h"

class projectcontroller
{

public:
    projectcontroller();
    void createProject();

private:
    MainWindow mw;
    NewProject np;
};

#endif // PROJECTCONTROLLER_H
