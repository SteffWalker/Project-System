/********************************************************************************
** Form generated from reading UI file 'newproject.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECT_H
#define UI_NEWPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewProject
{
public:
    QComboBox *cbStatus_np;
    QTextEdit *txtSummary_np;
    QLabel *label;
    QDateEdit *deRelease_np;
    QComboBox *cbLanguage_np;
    QLabel *lblSales_np;
    QComboBox *cbGenre_np;
    QListWidget *lstLocations_np;
    QLineEdit *txtTitleProject_np;
    QLabel *lblStatus_np;
    QLabel *lblLocations_np;
    QPushButton *cmdClear_np;
    QLabel *lblLanguage_np;
    QLabel *lblRelease_np;
    QLabel *lblRuntime_np;
    QSpinBox *sbRuntime_np;
    QSpinBox *sbSales_np;
    QLabel *lblGenre_np;
    QLineEdit *txtLocationAdd_np;
    QLineEdit *txtKeywordsAdd_np;
    QPushButton *NewProjectButton;
    QPushButton *cmdLocationAdd_np;
    QPushButton *cmdKeywordsAdd_np;
    QListWidget *lstKeywords_np;
    QLabel *lblKeywords_np;
    QLabel *lblSummary_np;
    QLabel *titleStar;
    QLabel *summaryStar;
    QLabel *summaryStar_2;
    QLabel *lblTitleProjects_np;
    QPushButton *backButton;

    void setupUi(QDialog *NewProject)
    {
        if (NewProject->objectName().isEmpty())
            NewProject->setObjectName(QString::fromUtf8("NewProject"));
        NewProject->resize(896, 551);
        cbStatus_np = new QComboBox(NewProject);
        cbStatus_np->setObjectName(QString::fromUtf8("cbStatus_np"));
        cbStatus_np->setGeometry(QRect(550, 50, 331, 31));
        txtSummary_np = new QTextEdit(NewProject);
        txtSummary_np->setObjectName(QString::fromUtf8("txtSummary_np"));
        txtSummary_np->setGeometry(QRect(100, 100, 331, 51));
        label = new QLabel(NewProject);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 0, 391, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        deRelease_np = new QDateEdit(NewProject);
        deRelease_np->setObjectName(QString::fromUtf8("deRelease_np"));
        deRelease_np->setGeometry(QRect(100, 170, 331, 31));
        cbLanguage_np = new QComboBox(NewProject);
        cbLanguage_np->setObjectName(QString::fromUtf8("cbLanguage_np"));
        cbLanguage_np->setGeometry(QRect(550, 150, 331, 31));
        lblSales_np = new QLabel(NewProject);
        lblSales_np->setObjectName(QString::fromUtf8("lblSales_np"));
        lblSales_np->setGeometry(QRect(460, 210, 81, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lblSales_np->setFont(font1);
        cbGenre_np = new QComboBox(NewProject);
        cbGenre_np->setObjectName(QString::fromUtf8("cbGenre_np"));
        cbGenre_np->setGeometry(QRect(550, 100, 331, 31));
        lstLocations_np = new QListWidget(NewProject);
        lstLocations_np->setObjectName(QString::fromUtf8("lstLocations_np"));
        lstLocations_np->setGeometry(QRect(10, 350, 421, 101));
        txtTitleProject_np = new QLineEdit(NewProject);
        txtTitleProject_np->setObjectName(QString::fromUtf8("txtTitleProject_np"));
        txtTitleProject_np->setGeometry(QRect(100, 50, 331, 31));
        lblStatus_np = new QLabel(NewProject);
        lblStatus_np->setObjectName(QString::fromUtf8("lblStatus_np"));
        lblStatus_np->setGeometry(QRect(460, 50, 71, 31));
        lblStatus_np->setFont(font1);
        lblLocations_np = new QLabel(NewProject);
        lblLocations_np->setObjectName(QString::fromUtf8("lblLocations_np"));
        lblLocations_np->setGeometry(QRect(10, 260, 91, 31));
        lblLocations_np->setFont(font1);
        cmdClear_np = new QPushButton(NewProject);
        cmdClear_np->setObjectName(QString::fromUtf8("cmdClear_np"));
        cmdClear_np->setGeometry(QRect(10, 480, 421, 61));
        lblLanguage_np = new QLabel(NewProject);
        lblLanguage_np->setObjectName(QString::fromUtf8("lblLanguage_np"));
        lblLanguage_np->setGeometry(QRect(460, 150, 81, 31));
        lblLanguage_np->setFont(font1);
        lblRelease_np = new QLabel(NewProject);
        lblRelease_np->setObjectName(QString::fromUtf8("lblRelease_np"));
        lblRelease_np->setGeometry(QRect(10, 170, 91, 31));
        lblRelease_np->setFont(font1);
        lblRuntime_np = new QLabel(NewProject);
        lblRuntime_np->setObjectName(QString::fromUtf8("lblRuntime_np"));
        lblRuntime_np->setGeometry(QRect(10, 220, 60, 31));
        lblRuntime_np->setFont(font1);
        sbRuntime_np = new QSpinBox(NewProject);
        sbRuntime_np->setObjectName(QString::fromUtf8("sbRuntime_np"));
        sbRuntime_np->setGeometry(QRect(100, 220, 331, 31));
        sbRuntime_np->setMaximum(1000);
        sbSales_np = new QSpinBox(NewProject);
        sbSales_np->setObjectName(QString::fromUtf8("sbSales_np"));
        sbSales_np->setGeometry(QRect(550, 210, 331, 31));
        sbSales_np->setMaximum(999999999);
        sbSales_np->setSingleStep(100);
        lblGenre_np = new QLabel(NewProject);
        lblGenre_np->setObjectName(QString::fromUtf8("lblGenre_np"));
        lblGenre_np->setGeometry(QRect(460, 100, 60, 31));
        lblGenre_np->setFont(font1);
        txtLocationAdd_np = new QLineEdit(NewProject);
        txtLocationAdd_np->setObjectName(QString::fromUtf8("txtLocationAdd_np"));
        txtLocationAdd_np->setGeometry(QRect(10, 300, 261, 31));
        txtKeywordsAdd_np = new QLineEdit(NewProject);
        txtKeywordsAdd_np->setObjectName(QString::fromUtf8("txtKeywordsAdd_np"));
        txtKeywordsAdd_np->setGeometry(QRect(460, 300, 261, 31));
        NewProjectButton = new QPushButton(NewProject);
        NewProjectButton->setObjectName(QString::fromUtf8("NewProjectButton"));
        NewProjectButton->setGeometry(QRect(460, 480, 421, 61));
        cmdLocationAdd_np = new QPushButton(NewProject);
        cmdLocationAdd_np->setObjectName(QString::fromUtf8("cmdLocationAdd_np"));
        cmdLocationAdd_np->setGeometry(QRect(280, 300, 71, 31));
        cmdKeywordsAdd_np = new QPushButton(NewProject);
        cmdKeywordsAdd_np->setObjectName(QString::fromUtf8("cmdKeywordsAdd_np"));
        cmdKeywordsAdd_np->setGeometry(QRect(730, 300, 71, 31));
        lstKeywords_np = new QListWidget(NewProject);
        lstKeywords_np->setObjectName(QString::fromUtf8("lstKeywords_np"));
        lstKeywords_np->setGeometry(QRect(460, 350, 421, 101));
        lblKeywords_np = new QLabel(NewProject);
        lblKeywords_np->setObjectName(QString::fromUtf8("lblKeywords_np"));
        lblKeywords_np->setGeometry(QRect(460, 260, 91, 31));
        lblKeywords_np->setFont(font1);
        lblSummary_np = new QLabel(NewProject);
        lblSummary_np->setObjectName(QString::fromUtf8("lblSummary_np"));
        lblSummary_np->setGeometry(QRect(10, 100, 81, 31));
        lblSummary_np->setFont(font1);
        titleStar = new QLabel(NewProject);
        titleStar->setObjectName(QString::fromUtf8("titleStar"));
        titleStar->setGeometry(QRect(50, 50, 41, 31));
        QPalette palette;
        QBrush brush(QColor(253, 92, 92, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(233, 0, 22, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 94, 109, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(244, 47, 65, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(116, 0, 11, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(155, 0, 14, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush8(QColor(244, 127, 138, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
        titleStar->setPalette(palette);
        summaryStar = new QLabel(NewProject);
        summaryStar->setObjectName(QString::fromUtf8("summaryStar"));
        summaryStar->setGeometry(QRect(80, 100, 41, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
        summaryStar->setPalette(palette1);
        summaryStar_2 = new QLabel(NewProject);
        summaryStar_2->setObjectName(QString::fromUtf8("summaryStar_2"));
        summaryStar_2->setGeometry(QRect(70, 170, 41, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
        summaryStar_2->setPalette(palette2);
        lblTitleProjects_np = new QLabel(NewProject);
        lblTitleProjects_np->setObjectName(QString::fromUtf8("lblTitleProjects_np"));
        lblTitleProjects_np->setGeometry(QRect(10, 50, 41, 31));
        lblTitleProjects_np->setFont(font1);
        backButton = new QPushButton(NewProject);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(20, 10, 71, 31));

        retranslateUi(NewProject);

        QMetaObject::connectSlotsByName(NewProject);
    } // setupUi

    void retranslateUi(QDialog *NewProject)
    {
        NewProject->setWindowTitle(QApplication::translate("NewProject", "Dialog", nullptr));
        label->setText(QApplication::translate("NewProject", "Add Project", nullptr));
        cbLanguage_np->setCurrentText(QString());
        lblSales_np->setText(QApplication::translate("NewProject", "Sales:", nullptr));
        lblStatus_np->setText(QApplication::translate("NewProject", "Status:", nullptr));
        lblLocations_np->setText(QApplication::translate("NewProject", "Locations:", nullptr));
        cmdClear_np->setText(QApplication::translate("NewProject", "Reset Changes", nullptr));
        lblLanguage_np->setText(QApplication::translate("NewProject", "Language:", nullptr));
        lblRelease_np->setText(QApplication::translate("NewProject", "Release:", nullptr));
        lblRuntime_np->setText(QApplication::translate("NewProject", "Runtime:", nullptr));
        lblGenre_np->setText(QApplication::translate("NewProject", "Genre:", nullptr));
        NewProjectButton->setText(QApplication::translate("NewProject", "Create Project", nullptr));
        cmdLocationAdd_np->setText(QApplication::translate("NewProject", "Add", nullptr));
        cmdKeywordsAdd_np->setText(QApplication::translate("NewProject", "Add", nullptr));
        lblKeywords_np->setText(QApplication::translate("NewProject", "Keywords:", nullptr));
        lblSummary_np->setText(QApplication::translate("NewProject", "Summary:", nullptr));
        titleStar->setText(QString());
        summaryStar->setText(QString());
        summaryStar_2->setText(QString());
        lblTitleProjects_np->setText(QApplication::translate("NewProject", "Title:", nullptr));
        backButton->setText(QApplication::translate("NewProject", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProject: public Ui_NewProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECT_H
