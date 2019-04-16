#include "addproject.h"
#include "ui_addproject.h"

addproject::addproject(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addproject)
{
    ui->setupUi(this);
}

addproject::~addproject()
{
    delete ui;
}
