#ifndef ADDPROJECT_H
#define ADDPROJECT_H

#include <QMainWindow>
//#include mainwindow.h Causing issues when header file is included

namespace Ui {
class addproject;
}

class addproject : public QMainWindow
{
    Q_OBJECT

public:
    explicit addproject(QWidget *parent = nullptr);
    ~addproject();

private:
    Ui::addproject *ui;
    //mainwindow *mainwindow(); Can be uncommented when header file is included
};

#endif // ADDPROJECT_H
