#include <QString>
#include <qstring.h>
#include "newproject.h"
#include "ui_newproject.h"
#include "projectmodel.h"

NewProject::NewProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProject)
{
    ui->setupUi(this);
    // Sets all options for status combo box on the main window

    ui->cbStatus_np->addItem("Unreleased");
    ui->cbStatus_np->addItem("Now Playing");
    ui->cbStatus_np->addItem("Released");

    // Sets all options for the genre combo box on the main window

    ui->cbGenre_np->addItem("Action");
    ui->cbGenre_np->addItem("Adventure");
    ui->cbGenre_np->addItem("Animation");
    ui->cbGenre_np->addItem("Biography");
    ui->cbGenre_np->addItem("Comedy");
    ui->cbGenre_np->addItem("Crime");
    ui->cbGenre_np->addItem("Documentary");
    ui->cbGenre_np->addItem("Drama");
    ui->cbGenre_np->addItem("Family");
    ui->cbGenre_np->addItem("Fantasy");
    ui->cbGenre_np->addItem("Horror");
    ui->cbGenre_np->addItem("Musical");
    ui->cbGenre_np->addItem("Mystry");
    ui->cbGenre_np->addItem("Romance");
    ui->cbGenre_np->addItem("Sci-Fi");
    ui->cbGenre_np->addItem("Thriller");

    // Sets all options for the language combo box on the main window

    ui->cbLanguage_np->addItem("English");
    ui->cbLanguage_np->addItem("French");
    ui->cbLanguage_np->addItem("German");
    ui->cbLanguage_np->addItem("Hindi");
    ui->cbLanguage_np->addItem("Korean");
    ui->cbLanguage_np->addItem("Spanish");
    ui->cbLanguage_np->addItem("Chinese");

}

NewProject::~NewProject()
{
    delete ui;
}


void NewProject::on_cmdLocationAdd_np_clicked()
{
    //QMessageBox::about(this,"Testing3","from handleLocationAdd slot");

     QString input = ui->txtLocationAdd_np->text();
     if(input.toStdString() != ""){
         ui->lstLocations_np->addItem(input);
     }
     ui->txtLocationAdd_np->clear();
}

void NewProject::on_cmdKeywordsAdd_np_clicked()
{
    QString input = ui->txtKeywordsAdd_np->text();
    if(input.toStdString() != ""){
        ui->lstKeywords_np->addItem(input);
    }
    ui->txtKeywordsAdd_np->clear();
}

void NewProject::on_cmdClear_np_clicked()
{

}

void NewProject::on_cmdCreate_np_clicked()
{
}

void NewProject::on_NewProjectButton_clicked()
{
}

