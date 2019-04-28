#ifndef PRODUCTCONTROLLER_H
#define PRODUCTCONTROLLER_H

#include <vector>
#include "mainwindow.h"
#include "newproject.h"
#include "projectmodel.h"
#include "openproject.h"
#include "projectdetails.h"
#include "productmodel.h"
#include "project.h"
#include "ui_projectdetails.h"

class ProductController : public QObject
{
    std::vector <projectModel> projList;
    Q_OBJECT

public:
    ProductController();

private:
//    MainWindow mw;
//    NewProject np;
//    OpenProject op;
//    ProjectDetails pd;
//    Project* openProj;
//    void showAllProjects();
//    void displayCrew();
//    void updateCrewLocations();
//    void filterCrewByRole(std::string role);


//This will contain all functionality for Project Details VIEW.
private slots:
//    void setProjectWindow();
//    void handleApplyGeneralChanges();
//    void handleProjectWindowLocationAdd();
//    void handleProjectWindowLocationDel();
//    void handleProjectWindowKeywordsAdd();
//    void handleProjectWindowKeywordsDel();
//    void handleProjectWindowStatusChange();
//    void handleProjectWindowCrewChange();
//    void handleProjectWindowCrewAdd();
//    void handleProjectWindowCrewDel();
//    void handleProjectWindowCrewFilter();
//    void handleProjectWindowMaterialChange();
//    void handleProjectWindowMaterialDelete();
//    void handleProjectWindowMaterialCreate();
//    void handleProjectWindowSubLangAdd();
//    void handleProjectWindowSubLangDel();
//    void handleProjectWindowExtraLangAdd();
//    void handleProjectWindowExtraLangDel();
//    void handleProjectWindowExtraSubLangAdd();
//    void handleProjectWindowExtraSubLangDel();
//    void handleProjectWindowBonusAdd();
//    void handleProjectWindowBonusDel();
//    void updateComboRuntime();
//    void updateMinimumPackage();


};

#endif // PRODUCTCONTROLLER_H
