#ifndef OPENPROJECT_H
#define OPENPROJECT_H

#include <QDialog>

namespace Ui {
class OpenProject;
}

class OpenProject : public QDialog
{
    Q_OBJECT

public:
    explicit OpenProject(QWidget *parent = nullptr);
    ~OpenProject();

//private:
    Ui::OpenProject *ui;
};

#endif // OPENPROJECT_H
