/********************************************************************************
** Form generated from reading UI file 'openproject.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENPROJECT_H
#define UI_OPENPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

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
    QPushButton *backButton;
    QTableWidget *tblProjects;

    void setupUi(QDialog *OpenProject)
    {
        if (OpenProject->objectName().isEmpty())
            OpenProject->setObjectName(QString::fromUtf8("OpenProject"));
        OpenProject->resize(881, 541);
        cmdProjectDel = new QPushButton(OpenProject);
        cmdProjectDel->setObjectName(QString::fromUtf8("cmdProjectDel"));
        cmdProjectDel->setGeometry(QRect(10, 440, 421, 81));
        cmdOpenProject = new QPushButton(OpenProject);
        cmdOpenProject->setObjectName(QString::fromUtf8("cmdOpenProject"));
        cmdOpenProject->setGeometry(QRect(440, 440, 421, 81));
        lstProjects = new QListWidget(OpenProject);
        lstProjects->setObjectName(QString::fromUtf8("lstProjects"));
        lstProjects->setGeometry(QRect(240, 310, 311, 121));
        cbFilter = new QComboBox(OpenProject);
        cbFilter->setObjectName(QString::fromUtf8("cbFilter"));
        cbFilter->setGeometry(QRect(470, 60, 271, 31));
        label = new QLabel(OpenProject);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 10, 311, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        txtFilter = new QLineEdit(OpenProject);
        txtFilter->setObjectName(QString::fromUtf8("txtFilter"));
        txtFilter->setGeometry(QRect(10, 60, 441, 31));
        cmdFilter = new QPushButton(OpenProject);
        cmdFilter->setObjectName(QString::fromUtf8("cmdFilter"));
        cmdFilter->setGeometry(QRect(760, 60, 101, 32));
        backButton = new QPushButton(OpenProject);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 16, 71, 31));
        tblProjects = new QTableWidget(OpenProject);
        tblProjects->setObjectName(QString::fromUtf8("tblProjects"));
        tblProjects->setGeometry(QRect(10, 100, 441, 201));

        retranslateUi(OpenProject);

        QMetaObject::connectSlotsByName(OpenProject);
    } // setupUi

    void retranslateUi(QDialog *OpenProject)
    {
        OpenProject->setWindowTitle(QApplication::translate("OpenProject", "Dialog", nullptr));
        cmdProjectDel->setText(QApplication::translate("OpenProject", "Remove Project", nullptr));
        cmdOpenProject->setText(QApplication::translate("OpenProject", "Open Selected Project", nullptr));
        label->setText(QApplication::translate("OpenProject", "Open Project", nullptr));
        cmdFilter->setText(QApplication::translate("OpenProject", "Filter", nullptr));
        backButton->setText(QApplication::translate("OpenProject", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenProject: public Ui_OpenProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENPROJECT_H
