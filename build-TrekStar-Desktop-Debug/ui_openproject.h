/********************************************************************************
** Form generated from reading UI file 'openproject.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENPROJECT_H
#define UI_OPENPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OpenProject
{
public:
    QPushButton *cmdProjectDel;
    QPushButton *cmdOpenProject;
    QListWidget *lstProjects;
    QComboBox *cbFilter;
    QLabel *label;
    QLineEdit *txtFilter;
    QPushButton *cmdFilter;

    void setupUi(QDialog *OpenProject)
    {
        if (OpenProject->objectName().isEmpty())
            OpenProject->setObjectName(QStringLiteral("OpenProject"));
        OpenProject->resize(881, 541);
        cmdProjectDel = new QPushButton(OpenProject);
        cmdProjectDel->setObjectName(QStringLiteral("cmdProjectDel"));
        cmdProjectDel->setGeometry(QRect(10, 440, 421, 81));
        cmdOpenProject = new QPushButton(OpenProject);
        cmdOpenProject->setObjectName(QStringLiteral("cmdOpenProject"));
        cmdOpenProject->setGeometry(QRect(440, 440, 421, 81));
        lstProjects = new QListWidget(OpenProject);
        lstProjects->setObjectName(QStringLiteral("lstProjects"));
        lstProjects->setGeometry(QRect(10, 110, 851, 311));
        cbFilter = new QComboBox(OpenProject);
        cbFilter->setObjectName(QStringLiteral("cbFilter"));
        cbFilter->setGeometry(QRect(470, 60, 271, 31));
        label = new QLabel(OpenProject);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 311, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        txtFilter = new QLineEdit(OpenProject);
        txtFilter->setObjectName(QStringLiteral("txtFilter"));
        txtFilter->setGeometry(QRect(10, 60, 441, 31));
        cmdFilter = new QPushButton(OpenProject);
        cmdFilter->setObjectName(QStringLiteral("cmdFilter"));
        cmdFilter->setGeometry(QRect(760, 60, 101, 32));

        retranslateUi(OpenProject);

        QMetaObject::connectSlotsByName(OpenProject);
    } // setupUi

    void retranslateUi(QDialog *OpenProject)
    {
        OpenProject->setWindowTitle(QApplication::translate("OpenProject", "Dialog", Q_NULLPTR));
        cmdProjectDel->setText(QApplication::translate("OpenProject", "Remove Project", Q_NULLPTR));
        cmdOpenProject->setText(QApplication::translate("OpenProject", "Open Selected Project", Q_NULLPTR));
        label->setText(QApplication::translate("OpenProject", "Open Project", Q_NULLPTR));
        cmdFilter->setText(QApplication::translate("OpenProject", "Filter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpenProject: public Ui_OpenProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENPROJECT_H
