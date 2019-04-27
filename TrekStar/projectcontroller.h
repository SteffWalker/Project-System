#ifndef PROJECTCONTROLLER_H
#define PROJECTCONTROLLER_H

#include <stack>
#include "mainwindow.h"
#include "newproject.h"
#include "projectmodel.h"
#include "openproject.h"

class projectcontroller :   public QObject
{
    std::stack <projectModel> projList;

    Q_OBJECT

public:
    projectcontroller();
    //void createProject();

private:
    MainWindow mw;
    NewProject np;
    OpenProject op;

private slots:
    void createProject();
    void projectWindow();
    void openProjWindow();
    void npBack();
    void statusChange();

};

#endif // PROJECTCONTROLLER_H
