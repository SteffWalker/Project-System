#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addproduct.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    addproject = new class addproject(this);
    addproject->show();

}

void MainWindow::on_pushButton_5_clicked()
{
    hide();
    addproduct = new class addproduct(this);
    addproduct->show();
}
