#include "projectcontroller.h"
#include "newproject.h"
#include "mainwindow.h"
#include "ui_newproject.h"

projectcontroller::projectcontroller()
{

}

void projectcontroller::createProject()
{
    projectModel project;
    std::string title = np.ui->txtTitleProject_np->text().toStdString();
    std::string summary = np.ui->txtSummary_np->document()->toPlainText().toStdString();
    QDate date = np.ui->deRelease_np->date();
    int runtime = np.ui->sbRuntime_np->value();
    std::string status = np.ui->cbStatus_np->currentText().toStdString();
    std::string genre = np.ui->cbGenre_np->currentText().toStdString();
    std::string language = np.ui->cbLanguage_np->currentText().toStdString();
    double sales = np.ui->sbSales_np->value();

}
