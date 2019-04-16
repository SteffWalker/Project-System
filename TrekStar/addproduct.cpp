#include "addproduct.h"
#include "ui_addproduct.h"

addproduct::addproduct(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addproduct)
{
    ui->setupUi(this);
}

addproduct::~addproduct()
{
    delete ui;
}
