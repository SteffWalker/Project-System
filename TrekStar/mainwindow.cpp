#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newproject.h"
#include "openproject.h"
#include "projectdetails.h"
#include "newmaterial.h"

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
    /*NewProject np;
    np.setModal(true);
    np.exec();*/

}

void MainWindow::on_pushButton_2_clicked()
{
    /*OpenProject op;
    op.setModal(true);
    op.exec();*/
}

void MainWindow::on_pushButton_3_clicked()
{
   /* ProjectDetails pd;
    pd.setModal(true);
    pd.exec();*/
}

void MainWindow::on_pushButton_5_clicked()
{
    NewMaterial nm;
    nm.setModal(true);
    nm.exec();
}
