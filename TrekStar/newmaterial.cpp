#include "NewMaterial.h"
#include "ui_NewMaterial.h"

NewMaterial::NewMaterial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewMaterial)
{
    ui->setupUi(this);
}

NewMaterial::~NewMaterial()
{
    delete ui;
}
