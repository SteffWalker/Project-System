#include <iostream>         // Testing purposes
#include <QString>
#include <sstream>
#include <fstream>
#include <QFile>
#include <QTextStream>
#include <cstring>
#include "projectcontroller.h"
#include "newproject.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_newproject.h"
#include "ui_openproject.h"
#include "ui_projectdetails.h"

projectcontroller::projectcontroller()
{
    this->loadProjects();
    connect(mw.ui->pushButton, SIGNAL(clicked()), this, SLOT (projectWindow()));
    connect(mw.ui->pushButton_2, SIGNAL(clicked()), this, SLOT(openProjWindow()));
    connect(mw.ui->pushButton_3, SIGNAL(clicked()), this, SLOT(projDetailWindow()));
    connect(mw.ui->exitButton, SIGNAL(clicked()), this, SLOT(saveToFile()));
    connect(np.ui->backButton, SIGNAL(clicked()), this, SLOT (npBack()));
    connect(np.ui->NewProjectButton, SIGNAL(clicked()), this, SLOT (createProject()));
    connect(op.ui->backButton, SIGNAL(clicked()), this, SLOT (opBack()));
    connect(pd.ui->backButton, SIGNAL(clicked()), this, SLOT (pdBack()));
    connect(np.ui->cmdClear_np, SIGNAL(clicked()), this, SLOT (clearForm()));
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

    op.ui->lstProjects->clear();
    for(int i = 0; i<projList.size(); i++)
    {
        QString Qproject = QString::fromStdString(projList.at(i).getTitle());
        op.ui->lstProjects->addItem(Qproject);
        //op.ui->tblProjects->insertRow()
    }
}

void projectcontroller::projDetailWindow()
{
    mw.hide();
    pd.show();
}

void projectcontroller::npBack()
{
    np.hide();
    mw.show();
}

void projectcontroller::opBack()
{
    op.hide();
    mw.show();
}

void projectcontroller::pdBack()
{
    pd.hide();
    mw.show();
}

void projectcontroller::createProject()
{
    unsigned long id;
    // Declare variables to be tested before project is constructed
    if(projList.empty())
    {
        id = 0;
    }
    else
    {
        id = projList.back().getID()+1;
    }
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

        for(int i = 0; i<np.ui->lstLocations_np->count(); i++)
        {
            std::cout << locations.at(i) << std::endl;
        }

        std::vector <std::string> keywords;
        for(int i = 0; i<np.ui->lstKeywords_np->count(); i++)
        {
            keywords.push_back(np.ui->lstKeywords_np->item(i)->text().toStdString());
        }

        for(int i = 0; i<np.ui->lstKeywords_np->count(); i++)
        {
            std::cout << keywords.at(i) << std::endl;
        }

        projectModel project(id, title, summary, genre, date, status, locations, language, runtime, keywords, sales);
        projList.push_back(project);
        this->clearForm();

        std::cout << "Created successfully" << std::endl;
    }
}

void projectcontroller::clearForm()
{
    np.ui->txtTitleProject_np->clear();
    np.ui->txtSummary_np->clear();
    np.ui->cbStatus_np->setCurrentIndex(0);
    np.ui->cbGenre_np->setCurrentIndex(0);
    np.ui->cbLanguage_np->setCurrentIndex(0);
    np.ui->deRelease_np->setDate(QDate(2000, 1, 1));
    np.ui->sbRuntime_np->setValue(0);
    np.ui->sbSales_np->setValue(0);
    np.ui->txtLocationAdd_np->clear();
    np.ui->lstLocations_np->clear();
    np.ui->txtKeywordsAdd_np->clear();
    np.ui->lstKeywords_np->clear();
}

void projectcontroller::openProject()
{
    std::string project = op.ui->lstProjects->currentItem()->text().toStdString();
}

void projectcontroller::saveToFile()
{
    std::ofstream file;
    file.open("projects.csv");


    for(int i = 0; i<projList.size(); i++)
    {

    file << i << "," << projList.at(i).getTitle() << "," << projList.at(i).getSummary() << "," << projList.at(i).getGenre() << "," << projList.at(i).getReleaseDate().toString().toStdString()
         << "," << projList.at(i).getStatus() << "," << projList.at(i).getLocations() << projList.at(i).getLanguage() << ","<< projList.at(i).getRuntime()
         << "," << projList.at(i).getKeywords() << projList.at(i).getSales() << std::endl;
    }
    file.close();
    QApplication::quit();
}

void projectcontroller::loadProjects()
{
    std::ifstream file("projects.csv");
    std::string id;
    std::string title;
    std::string summary;
    std::string genre;
    std::string releaseDate;
    std::string status;
    std::string locations;
    std::string language;
    std::string runtime;
    std::string keywords;
    std::string sales;

    std::string line;
    while(getline(file, line))
    {
        std::stringstream ss(line);
        getline(ss, id, ',');
        getline(ss, title, ',');
        getline(ss, summary, ',');
        getline(ss, genre, ',');
        getline(ss, releaseDate, ',');
        getline(ss, status, ',');
        getline(ss, locations, '}');
        getline(ss, language, ',');
        getline(ss, runtime, ',');
        getline(ss, keywords, '}');
        getline(ss, sales, ',');

        locations.erase(0,1);
        keywords.erase(0,1);
        std::vector <std::string> locationList;

        char* point;
        char locationChar[locations.size() + 1];
        strcpy(locationChar, locations.c_str());
        point = strtok(locationChar, ",");

        while(point!=NULL)
        {
            locationList.push_back(point);
            point = strtok(NULL, ",");
        }

        std::vector <std::string> keywordsList;

        char keywordsChar[keywords.size() + 1];
        strcpy(keywordsChar, keywords.c_str());
        point = strtok(keywordsChar, ",");

        while(point!=NULL)
        {
            keywordsList.push_back(point);
            point = strtok(NULL, ",");
        }

        for(int i = 1; i<locationList.size(); i++)
        {
            locationList.at(i).erase(0,1);
        }

        for(int i = 1; i<keywordsList.size(); i++)
        {
            keywordsList.at(i).erase(0,1);
        }

        QDate date;
        QString qDate;
        qDate.fromStdString(releaseDate);
        date.fromString(qDate);

        unsigned long idLong = std::stoul(id);
        int runtimeInt = std::stoi(runtime);
        double salesDouble = std::stod(sales);


        std::cout << "id " << id << std::endl;
        std::cout << "title " << title << std::endl;
        std::cout << "summary " << summary << std::endl;
        std::cout << "genre " << genre << std::endl;
        std::cout << "releaseDate " << releaseDate << std::endl;
        std::cout << "status " << status << std::endl;
        std::cout << "locations " << locations << std::endl;
        std::cout << "language " << language << std::endl;
        std::cout << "runtime " << runtime<< std::endl;
        std::cout << "keywords " << keywords << std::endl;
        std::cout << "sales " << sales << std::endl;

        projectModel project (idLong, title, summary, genre, date, status, locationList, language, runtimeInt, keywordsList, salesDouble);
        projList.push_back(project);


    }
}
