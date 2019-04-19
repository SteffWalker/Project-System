#include "projectdetails.h"
#include "ui_projectdetails.h"

ProjectDetails::ProjectDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectDetails)
{
    ui->setupUi(this);
}

ProjectDetails::~ProjectDetails()
{
    delete ui;
}
