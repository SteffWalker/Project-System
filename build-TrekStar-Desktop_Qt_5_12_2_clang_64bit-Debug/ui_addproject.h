/********************************************************************************
** Form generated from reading UI file 'addproject.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROJECT_H
#define UI_ADDPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addproject
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addproject)
    {
        if (addproject->objectName().isEmpty())
            addproject->setObjectName(QString::fromUtf8("addproject"));
        addproject->resize(660, 485);
        centralwidget = new QWidget(addproject);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addproject->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addproject);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 22));
        addproject->setMenuBar(menubar);
        statusbar = new QStatusBar(addproject);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        addproject->setStatusBar(statusbar);

        retranslateUi(addproject);

        QMetaObject::connectSlotsByName(addproject);
    } // setupUi

    void retranslateUi(QMainWindow *addproject)
    {
        addproject->setWindowTitle(QApplication::translate("addproject", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addproject: public Ui_addproject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROJECT_H
