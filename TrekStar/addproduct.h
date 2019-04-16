#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QMainWindow>

namespace Ui {
class addproduct;
}

class addproduct : public QMainWindow
{
    Q_OBJECT

public:
    explicit addproduct(QWidget *parent = nullptr);
    ~addproduct();

private:
    Ui::addproduct *ui;
};

#endif // ADDPRODUCT_H
