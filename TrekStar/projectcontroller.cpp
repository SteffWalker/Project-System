#include <iostream>         // Testing purposes
#include "projectcontroller.h"
#include "newproject.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_newproject.h"
#include "ui_openproject.h"

projectcontroller::projectcontroller()
{
    connect(mw.ui->pushButton, SIGNAL(clicked()), this, SLOT (projectWindow()));
    connect(mw.ui->pushButton_2, SIGNAL(clicked()), this, SLOT(openProjWindow()));
    connect(np.ui->backButton, SIGNAL(clicked()), this, SLOT (npBack()));
    connect(np.ui->NewProjectButton, SIGNAL(clicked()), this, SLOT (createProject()));
    mw.show();
}

void projectcontroller::projectWindow()
{
    mw.hide();
    np.show();
}

void projectcontroller::openProjWindow()
{
    mw.hide();
    op.show();
    //op.ui->lstProjects->addItem(projList.top());  // Look into displaying projects in the QLIST widget.
}

void projectcontroller::npBack()
{
    np.hide();
    mw.show();
}

void projectcontroller::createProject()
{
    // Declare variables to be tested before project is constructed

    std::string title = np.ui->txtTitleProject_np->text().toStdString();
    std::string summary = np.ui->txtSummary_np->document()->toPlainText().toStdString();
    bool valid = true;
    QDate date = np.ui->deRelease_np->date();
    int runtime = np.ui->sbRuntime_np->value();
    std::string status = np.ui->cbStatus_np->currentText().toStdString();
    std::string genre = np.ui->cbGenre_np->currentText().toStdString();
    std::string language = np.ui->cbLanguage_np->currentText().toStdString();
    double sales = np.ui->sbSales_np->value();
    std::cout << runtime << std::endl;


    // Test values taken from the form to ensure fields are not invalid

    np.ui->titleStar->clear();
    np.ui->summaryStar->clear();

    try {
        if(title == "")
        {
            valid = false;
            throw std::string("Empty Field");
        }
    } catch (std::string x) {
        std::cout << "Project title can not be left blank" << std::endl;
        np.ui->titleStar->setText("*");
    }

    try {
        if(summary == "")
        {
            valid = false;
            throw std::string("empty Field");
        }
    } catch (std::string x) {
        std::cout << "Project summary cannot be left blank" << std::endl;
        np.ui->summaryStar->setText("*");
    }
    if(valid)
    {
        std::vector <std::string> locations;
        for(int i = 0; i<np.ui->lstLocations_np->count(); i++)
        {
            locations.push_back(np.ui->lstLocations_np->item(i)->text().toStdString());
        }

        std::vector <std::string> keywords;
        for(int i = 0; i<np.ui->lstKeywords_np->count(); i++)
        {
            keywords.push_back(np.ui->lstKeywords_np->item(i)->text().toStdString());
        }
        projectModel project(title, summary, genre, date, status, locations, language, runtime, keywords, sales);
        projList.push(project);

        std::cout << "Created successfully" << std::endl;
    }

}
