#ifndef PROJECTDETAILS_H
#define PROJECTDETAILS_H

#include <QDialog>
#include "project.h"

namespace Ui {
class ProjectDetails;
}

class ProjectDetails : public QDialog
{
    Q_OBJECT

public:
    explicit ProjectDetails(QWidget *parent = nullptr);
    ~ProjectDetails();

//private:
    Ui::ProjectDetails *ui;
private:
    Project* openProj;
    void showAllProjects();
    void displayCrew();
    void updateCrewLocations();
    void filterCrewByRole(std::string role);


private slots:
    void clearFormGeneral();
    void setProjectWindow();
    void handleApplyGeneralChanges();
    void handleProjectWindowLocationAdd();
    void handleProjectWindowLocationDel();
    void handleProjectWindowKeywordsAdd();
    void handleProjectWindowKeywordsDel();
    void handleProjectWindowStatusChange();
    void handleProjectWindowCrewChange();
    void handleProjectWindowCrewAdd();
    void handleProjectWindowCrewDel();
    void handleProjectWindowCrewFilter();
    void handleProjectWindowMaterialChange();
    void handleProjectWindowMaterialDelete();
    void handleProjectWindowMaterialCreate();
    void handleProjectWindowSubLangAdd();
    void handleProjectWindowSubLangDel();
    void handleProjectWindowExtraLangAdd();
    void handleProjectWindowExtraLangDel();
    void handleProjectWindowExtraSubLangAdd();
    void handleProjectWindowExtraSubLangDel();
    void handleProjectWindowBonusAdd();
    void handleProjectWindowBonusDel();
    void updateComboRuntime();
    void updateMinimumPackage();

};

#endif // PROJECTDETAILS_H
