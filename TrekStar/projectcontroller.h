#ifndef PROJECTCONTROLLER_H
#define PROJECTCONTROLLER_H

#include <vector>
#include "mainwindow.h"
#include "newproject.h"
#include "projectmodel.h"
#include "openproject.h"
#include "projectdetails.h"
#include "ui_projectdetails.h"

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
    ProjectDetails pd;

private slots:
    void createProject();
    void clearForm();
    void saveToFile();
    void loadProjects();
    void openProject();
    void projectWindow();
    void openProjWindow();
    void projDetailWindow();
    void npBack();
    void opBack();
    void pdBack();


};

#endif // PROJECTCONTROLLER_H
