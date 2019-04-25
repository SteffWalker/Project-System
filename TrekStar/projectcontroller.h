#ifndef PROJECTCONTROLLER_H
#define PROJECTCONTROLLER_H

#include <vector>
#include "mainwindow.h"
#include "newproject.h"
#include "projectmodel.h"
#include "openproject.h"

class projectcontroller :   public QObject
{
    std::vector <projectModel> projList;

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
    void clearForm();
    void projectWindow();
    void openProjWindow();
    void npBack();
    void opBack();

};

#endif // PROJECTCONTROLLER_H
