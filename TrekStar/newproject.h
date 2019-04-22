#ifndef NEWPROJECT_H
#define NEWPROJECT_H

#include <QDialog>
#include <projectmodel.h>

namespace Ui {
class NewProject;
}

class NewProject : public QDialog
{
    Q_OBJECT

public:
    explicit NewProject(QWidget *parent = nullptr);
    ~NewProject();
    Ui::NewProject *ui;

private slots:
    void on_cmdLocationAdd_np_clicked();
    void on_cmdKeywordsAdd_np_clicked();
    void on_cmdCreate_np_clicked();
    void on_cmdClear_np_clicked();
    void on_NewProjectButton_clicked();


};

#endif // NEWPROJECT_H
