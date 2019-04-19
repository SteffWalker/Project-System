#ifndef NewMaterial_H
#define NewMaterial_H

#include <QDialog>

namespace Ui {
class NewMaterial;
}

class NewMaterial : public QDialog
{
    Q_OBJECT

public:
    explicit NewMaterial(QWidget *parent = nullptr);
    ~NewMaterial();

private:
    Ui::NewMaterial *ui;
};

#endif // NewMaterial_H
