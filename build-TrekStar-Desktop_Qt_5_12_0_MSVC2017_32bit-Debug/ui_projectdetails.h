/********************************************************************************
** Form generated from reading UI file 'projectdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDETAILS_H
#define UI_PROJECTDETAILS_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectDetails
{
public:
    QTabWidget *tabWidget;
    QWidget *tbGeneral;
    QPushButton *cmdLocationDel;
    QPushButton *cmdLocationAdd;
    QListWidget *lstLocations;
    QComboBox *cbGenre;
    QSpinBox *sbRuntime;
    QComboBox *cbLanguage;
    QPushButton *cmdClearGeneralChanges;
    QLineEdit *txtLocationAdd;
    QLabel *lblRuntime;
    QLabel *lblSummary;
    QLabel *lblLocations;
    QSpinBox *sbSales;
    QDateEdit *deRelease;
    QComboBox *cbStatus;
    QPushButton *cmdApplyGeneralChanges;
    QLabel *lblGenre;
    QLabel *lblStatus;
    QLabel *lblRelease;
    QTextEdit *txtSummary;
    QLineEdit *txtTitleProject;
    QLabel *lblTitleProjects;
    QLabel *lblLanguage;
    QLabel *lblKeywords;
    QLabel *lblSales;
    QListWidget *lstKeywords;
    QLineEdit *txtKeywordsAdd;
    QPushButton *cmdKeywordsDel;
    QPushButton *cmdKeywordsAdd;
    QWidget *tbCrew;
    QLineEdit *txtCrew;
    QListWidget *lstCrew;
    QPushButton *cmdCrewFilter;
    QComboBox *cbCrew;
    QPushButton *cmdCrewDel;
    QPushButton *cmdCrewAdd;
    QLabel *lblDateOfBirth;
    QLabel *lblIDNum;
    QLabel *lblNameTitle;
    QLabel *lblExperience;
    QComboBox *cbNameTitle;
    QLineEdit *txtIDNum;
    QDateEdit *deDofB;
    QSpinBox *sbExperience;
    QLineEdit *txtName;
    QLabel *lblName;
    QListWidget *lstCrewLocations;
    QLabel *lblCrewLocations;
    QWidget *tbMaterials;
    QLabel *lblMaterialType;
    QComboBox *cbMaterialType;
    QLabel *lblMaterialIDNum;
    QLabel *lblMaterialTitle;
    QLabel *lblVFormat;
    QLabel *lblAFormat;
    QLabel *lblMaterialLanguage;
    QLabel *lblMaterialFrameHorizontal;
    QLabel *lblMaterialPackage;
    QLabel *lblMaterialRuntime;
    QLabel *lblMaterialPrice;
    QLabel *lblMaterialSubLang;
    QLineEdit *txtMaterialIDNum;
    QLineEdit *txtMaterialTitle;
    QComboBox *cbVFormat;
    QComboBox *cbAFormat;
    QComboBox *cbMaterialLanguage;
    QListWidget *lstSubLang;
    QComboBox *cbSubLang;
    QPushButton *cmdSubLangAdd;
    QPushButton *cmdSubLangDel;
    QSpinBox *sbMaterialPrice;
    QLabel *lblMaterialCreated;
    QLabel *lblMaterialAnswer;
    QPushButton *cmdMaterialClear;
    QPushButton *cmdMaterialDel;
    QPushButton *cmdMaterialCreate;
    QSpinBox *sbMaterialRuntime;
    QPushButton *cmdExtraLanguageTracksDel;
    QListWidget *lstExtraLanguageTracks;
    QComboBox *cbExtraLanguageTracks;
    QPushButton *cmdExtraLanguageTracksAdd;
    QComboBox *cbExtraSubtitleTracks;
    QPushButton *cmdExtraSubtitleTracksAdd;
    QListWidget *lstExtraSubtitleTracks;
    QPushButton *cmdExtraSubtitleTracksDel;
    QPushButton *cmdBonusFeaturesAdd;
    QListWidget *lstBonusFeatures;
    QPushButton *cmdBonusFeaturesDel;
    QLabel *lblExtraLanguageTracks;
    QLabel *lblExtraSubtitleTracks;
    QLabel *lblBonusFeatures;
    QLabel *lblFirstSideContent;
    QLineEdit *txtFirstSideContent;
    QLabel *lblSecondSideContent;
    QLineEdit *txtSecondSideContent;
    QLineEdit *txtBonusFeatures;
    QSpinBox *sbFrameHorizontal;
    QSpinBox *sbFrameVertical;
    QLabel *lblMaterialFrameVertical;
    QLabel *lblMaterialFrameAspect;
    QLineEdit *txtFrameDescription;
    QLabel *lblMaterialFrameDescription;
    QLabel *lblMaterialPackageMaterial;
    QLabel *lblMaterialPackageHeight;
    QLabel *lblMaterialPackageDepth;
    QSpinBox *sbPackagingHeight;
    QSpinBox *sbPackagingDepth;
    QLabel *lblMaterialPackageWidth;
    QSpinBox *sbPackagingWidth;
    QComboBox *cbPackagingMaterial;
    QSpinBox *sbComboSingleDVD;
    QLabel *lblComboDoubleDVD;
    QSpinBox *sbComboDoubleDVD;
    QLabel *lblComboSingleDVD;
    QLabel *lblProjectName;
    QPushButton *backButton;

    void setupUi(QDialog *ProjectDetails)
    {
        if (ProjectDetails->objectName().isEmpty())
            ProjectDetails->setObjectName(QString::fromUtf8("ProjectDetails"));
        ProjectDetails->resize(1344, 682);
        tabWidget = new QTabWidget(ProjectDetails);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 1291, 621));
        tbGeneral = new QWidget();
        tbGeneral->setObjectName(QString::fromUtf8("tbGeneral"));
        cmdLocationDel = new QPushButton(tbGeneral);
        cmdLocationDel->setObjectName(QString::fromUtf8("cmdLocationDel"));
        cmdLocationDel->setGeometry(QRect(360, 260, 71, 31));
        cmdLocationAdd = new QPushButton(tbGeneral);
        cmdLocationAdd->setObjectName(QString::fromUtf8("cmdLocationAdd"));
        cmdLocationAdd->setGeometry(QRect(280, 260, 71, 31));
        lstLocations = new QListWidget(tbGeneral);
        lstLocations->setObjectName(QString::fromUtf8("lstLocations"));
        lstLocations->setGeometry(QRect(10, 310, 421, 101));
        cbGenre = new QComboBox(tbGeneral);
        cbGenre->setObjectName(QString::fromUtf8("cbGenre"));
        cbGenre->setGeometry(QRect(550, 60, 331, 31));
        sbRuntime = new QSpinBox(tbGeneral);
        sbRuntime->setObjectName(QString::fromUtf8("sbRuntime"));
        sbRuntime->setGeometry(QRect(100, 180, 331, 31));
        sbRuntime->setMaximum(1000);
        cbLanguage = new QComboBox(tbGeneral);
        cbLanguage->setObjectName(QString::fromUtf8("cbLanguage"));
        cbLanguage->setGeometry(QRect(550, 110, 331, 31));
        cmdClearGeneralChanges = new QPushButton(tbGeneral);
        cmdClearGeneralChanges->setObjectName(QString::fromUtf8("cmdClearGeneralChanges"));
        cmdClearGeneralChanges->setGeometry(QRect(10, 440, 421, 61));
        txtLocationAdd = new QLineEdit(tbGeneral);
        txtLocationAdd->setObjectName(QString::fromUtf8("txtLocationAdd"));
        txtLocationAdd->setGeometry(QRect(10, 260, 261, 31));
        lblRuntime = new QLabel(tbGeneral);
        lblRuntime->setObjectName(QString::fromUtf8("lblRuntime"));
        lblRuntime->setGeometry(QRect(10, 180, 60, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblRuntime->setFont(font);
        lblSummary = new QLabel(tbGeneral);
        lblSummary->setObjectName(QString::fromUtf8("lblSummary"));
        lblSummary->setGeometry(QRect(10, 60, 81, 31));
        lblSummary->setFont(font);
        lblLocations = new QLabel(tbGeneral);
        lblLocations->setObjectName(QString::fromUtf8("lblLocations"));
        lblLocations->setGeometry(QRect(10, 220, 91, 31));
        lblLocations->setFont(font);
        sbSales = new QSpinBox(tbGeneral);
        sbSales->setObjectName(QString::fromUtf8("sbSales"));
        sbSales->setGeometry(QRect(550, 170, 331, 31));
        sbSales->setMaximum(999999999);
        sbSales->setSingleStep(100);
        deRelease = new QDateEdit(tbGeneral);
        deRelease->setObjectName(QString::fromUtf8("deRelease"));
        deRelease->setGeometry(QRect(100, 130, 331, 31));
        cbStatus = new QComboBox(tbGeneral);
        cbStatus->setObjectName(QString::fromUtf8("cbStatus"));
        cbStatus->setGeometry(QRect(550, 10, 331, 31));
        cmdApplyGeneralChanges = new QPushButton(tbGeneral);
        cmdApplyGeneralChanges->setObjectName(QString::fromUtf8("cmdApplyGeneralChanges"));
        cmdApplyGeneralChanges->setGeometry(QRect(460, 440, 421, 61));
        lblGenre = new QLabel(tbGeneral);
        lblGenre->setObjectName(QString::fromUtf8("lblGenre"));
        lblGenre->setGeometry(QRect(460, 60, 60, 31));
        lblGenre->setFont(font);
        lblStatus = new QLabel(tbGeneral);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(460, 10, 71, 31));
        lblStatus->setFont(font);
        lblRelease = new QLabel(tbGeneral);
        lblRelease->setObjectName(QString::fromUtf8("lblRelease"));
        lblRelease->setGeometry(QRect(10, 130, 91, 31));
        lblRelease->setFont(font);
        txtSummary = new QTextEdit(tbGeneral);
        txtSummary->setObjectName(QString::fromUtf8("txtSummary"));
        txtSummary->setGeometry(QRect(100, 60, 331, 51));
        txtTitleProject = new QLineEdit(tbGeneral);
        txtTitleProject->setObjectName(QString::fromUtf8("txtTitleProject"));
        txtTitleProject->setGeometry(QRect(100, 10, 331, 31));
        lblTitleProjects = new QLabel(tbGeneral);
        lblTitleProjects->setObjectName(QString::fromUtf8("lblTitleProjects"));
        lblTitleProjects->setGeometry(QRect(10, 10, 51, 31));
        lblTitleProjects->setFont(font);
        lblLanguage = new QLabel(tbGeneral);
        lblLanguage->setObjectName(QString::fromUtf8("lblLanguage"));
        lblLanguage->setGeometry(QRect(460, 110, 81, 31));
        lblLanguage->setFont(font);
        lblKeywords = new QLabel(tbGeneral);
        lblKeywords->setObjectName(QString::fromUtf8("lblKeywords"));
        lblKeywords->setGeometry(QRect(460, 220, 91, 31));
        lblKeywords->setFont(font);
        lblSales = new QLabel(tbGeneral);
        lblSales->setObjectName(QString::fromUtf8("lblSales"));
        lblSales->setGeometry(QRect(460, 170, 81, 31));
        lblSales->setFont(font);
        lstKeywords = new QListWidget(tbGeneral);
        lstKeywords->setObjectName(QString::fromUtf8("lstKeywords"));
        lstKeywords->setGeometry(QRect(460, 310, 421, 101));
        txtKeywordsAdd = new QLineEdit(tbGeneral);
        txtKeywordsAdd->setObjectName(QString::fromUtf8("txtKeywordsAdd"));
        txtKeywordsAdd->setGeometry(QRect(460, 260, 261, 31));
        cmdKeywordsDel = new QPushButton(tbGeneral);
        cmdKeywordsDel->setObjectName(QString::fromUtf8("cmdKeywordsDel"));
        cmdKeywordsDel->setGeometry(QRect(810, 260, 71, 31));
        cmdKeywordsAdd = new QPushButton(tbGeneral);
        cmdKeywordsAdd->setObjectName(QString::fromUtf8("cmdKeywordsAdd"));
        cmdKeywordsAdd->setGeometry(QRect(730, 260, 71, 31));
        tabWidget->addTab(tbGeneral, QString());
        tbCrew = new QWidget();
        tbCrew->setObjectName(QString::fromUtf8("tbCrew"));
        txtCrew = new QLineEdit(tbCrew);
        txtCrew->setObjectName(QString::fromUtf8("txtCrew"));
        txtCrew->setGeometry(QRect(300, 20, 691, 31));
        lstCrew = new QListWidget(tbCrew);
        lstCrew->setObjectName(QString::fromUtf8("lstCrew"));
        lstCrew->setGeometry(QRect(20, 210, 1191, 341));
        cmdCrewFilter = new QPushButton(tbCrew);
        cmdCrewFilter->setObjectName(QString::fromUtf8("cmdCrewFilter"));
        cmdCrewFilter->setGeometry(QRect(1010, 20, 201, 31));
        cbCrew = new QComboBox(tbCrew);
        cbCrew->setObjectName(QString::fromUtf8("cbCrew"));
        cbCrew->setGeometry(QRect(20, 20, 261, 31));
        cmdCrewDel = new QPushButton(tbCrew);
        cmdCrewDel->setObjectName(QString::fromUtf8("cmdCrewDel"));
        cmdCrewDel->setGeometry(QRect(770, 160, 441, 31));
        cmdCrewAdd = new QPushButton(tbCrew);
        cmdCrewAdd->setObjectName(QString::fromUtf8("cmdCrewAdd"));
        cmdCrewAdd->setGeometry(QRect(310, 160, 441, 31));
        lblDateOfBirth = new QLabel(tbCrew);
        lblDateOfBirth->setObjectName(QString::fromUtf8("lblDateOfBirth"));
        lblDateOfBirth->setGeometry(QRect(310, 70, 101, 31));
        lblIDNum = new QLabel(tbCrew);
        lblIDNum->setObjectName(QString::fromUtf8("lblIDNum"));
        lblIDNum->setGeometry(QRect(20, 160, 41, 31));
        lblNameTitle = new QLabel(tbCrew);
        lblNameTitle->setObjectName(QString::fromUtf8("lblNameTitle"));
        lblNameTitle->setGeometry(QRect(20, 70, 41, 31));
        lblExperience = new QLabel(tbCrew);
        lblExperience->setObjectName(QString::fromUtf8("lblExperience"));
        lblExperience->setGeometry(QRect(310, 120, 91, 31));
        cbNameTitle = new QComboBox(tbCrew);
        cbNameTitle->setObjectName(QString::fromUtf8("cbNameTitle"));
        cbNameTitle->setGeometry(QRect(70, 70, 191, 31));
        txtIDNum = new QLineEdit(tbCrew);
        txtIDNum->setObjectName(QString::fromUtf8("txtIDNum"));
        txtIDNum->setGeometry(QRect(70, 160, 191, 31));
        deDofB = new QDateEdit(tbCrew);
        deDofB->setObjectName(QString::fromUtf8("deDofB"));
        deDofB->setGeometry(QRect(420, 70, 191, 31));
        sbExperience = new QSpinBox(tbCrew);
        sbExperience->setObjectName(QString::fromUtf8("sbExperience"));
        sbExperience->setGeometry(QRect(420, 120, 191, 31));
        txtName = new QLineEdit(tbCrew);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setGeometry(QRect(70, 110, 191, 31));
        lblName = new QLabel(tbCrew);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setGeometry(QRect(20, 110, 60, 31));
        lstCrewLocations = new QListWidget(tbCrew);
        lstCrewLocations->setObjectName(QString::fromUtf8("lstCrewLocations"));
        lstCrewLocations->setGeometry(QRect(760, 70, 451, 71));
        lblCrewLocations = new QLabel(tbCrew);
        lblCrewLocations->setObjectName(QString::fromUtf8("lblCrewLocations"));
        lblCrewLocations->setGeometry(QRect(650, 70, 91, 31));
        tabWidget->addTab(tbCrew, QString());
        tbMaterials = new QWidget();
        tbMaterials->setObjectName(QString::fromUtf8("tbMaterials"));
        lblMaterialType = new QLabel(tbMaterials);
        lblMaterialType->setObjectName(QString::fromUtf8("lblMaterialType"));
        lblMaterialType->setGeometry(QRect(10, 20, 141, 31));
        cbMaterialType = new QComboBox(tbMaterials);
        cbMaterialType->setObjectName(QString::fromUtf8("cbMaterialType"));
        cbMaterialType->setGeometry(QRect(140, 20, 691, 31));
        lblMaterialIDNum = new QLabel(tbMaterials);
        lblMaterialIDNum->setObjectName(QString::fromUtf8("lblMaterialIDNum"));
        lblMaterialIDNum->setGeometry(QRect(10, 70, 111, 31));
        lblMaterialTitle = new QLabel(tbMaterials);
        lblMaterialTitle->setObjectName(QString::fromUtf8("lblMaterialTitle"));
        lblMaterialTitle->setGeometry(QRect(10, 120, 111, 31));
        lblVFormat = new QLabel(tbMaterials);
        lblVFormat->setObjectName(QString::fromUtf8("lblVFormat"));
        lblVFormat->setGeometry(QRect(10, 170, 111, 31));
        lblAFormat = new QLabel(tbMaterials);
        lblAFormat->setObjectName(QString::fromUtf8("lblAFormat"));
        lblAFormat->setGeometry(QRect(10, 220, 111, 31));
        lblMaterialLanguage = new QLabel(tbMaterials);
        lblMaterialLanguage->setObjectName(QString::fromUtf8("lblMaterialLanguage"));
        lblMaterialLanguage->setGeometry(QRect(280, 170, 111, 31));
        lblMaterialFrameHorizontal = new QLabel(tbMaterials);
        lblMaterialFrameHorizontal->setObjectName(QString::fromUtf8("lblMaterialFrameHorizontal"));
        lblMaterialFrameHorizontal->setGeometry(QRect(920, 370, 191, 31));
        lblMaterialPackage = new QLabel(tbMaterials);
        lblMaterialPackage->setObjectName(QString::fromUtf8("lblMaterialPackage"));
        lblMaterialPackage->setGeometry(QRect(920, 70, 111, 31));
        lblMaterialRuntime = new QLabel(tbMaterials);
        lblMaterialRuntime->setObjectName(QString::fromUtf8("lblMaterialRuntime"));
        lblMaterialRuntime->setGeometry(QRect(280, 120, 111, 31));
        lblMaterialPrice = new QLabel(tbMaterials);
        lblMaterialPrice->setObjectName(QString::fromUtf8("lblMaterialPrice"));
        lblMaterialPrice->setGeometry(QRect(280, 70, 101, 31));
        lblMaterialSubLang = new QLabel(tbMaterials);
        lblMaterialSubLang->setObjectName(QString::fromUtf8("lblMaterialSubLang"));
        lblMaterialSubLang->setGeometry(QRect(530, 70, 131, 31));
        txtMaterialIDNum = new QLineEdit(tbMaterials);
        txtMaterialIDNum->setObjectName(QString::fromUtf8("txtMaterialIDNum"));
        txtMaterialIDNum->setEnabled(true);
        txtMaterialIDNum->setGeometry(QRect(120, 70, 141, 31));
        txtMaterialIDNum->setReadOnly(true);
        txtMaterialTitle = new QLineEdit(tbMaterials);
        txtMaterialTitle->setObjectName(QString::fromUtf8("txtMaterialTitle"));
        txtMaterialTitle->setGeometry(QRect(120, 120, 141, 31));
        cbVFormat = new QComboBox(tbMaterials);
        cbVFormat->setObjectName(QString::fromUtf8("cbVFormat"));
        cbVFormat->setGeometry(QRect(120, 170, 141, 31));
        cbAFormat = new QComboBox(tbMaterials);
        cbAFormat->setObjectName(QString::fromUtf8("cbAFormat"));
        cbAFormat->setGeometry(QRect(120, 220, 141, 31));
        cbMaterialLanguage = new QComboBox(tbMaterials);
        cbMaterialLanguage->setObjectName(QString::fromUtf8("cbMaterialLanguage"));
        cbMaterialLanguage->setGeometry(QRect(370, 170, 141, 31));
        lstSubLang = new QListWidget(tbMaterials);
        lstSubLang->setObjectName(QString::fromUtf8("lstSubLang"));
        lstSubLang->setGeometry(QRect(530, 150, 361, 101));
        cbSubLang = new QComboBox(tbMaterials);
        cbSubLang->setObjectName(QString::fromUtf8("cbSubLang"));
        cbSubLang->setGeometry(QRect(530, 110, 201, 31));
        cmdSubLangAdd = new QPushButton(tbMaterials);
        cmdSubLangAdd->setObjectName(QString::fromUtf8("cmdSubLangAdd"));
        cmdSubLangAdd->setGeometry(QRect(750, 110, 61, 31));
        cmdSubLangDel = new QPushButton(tbMaterials);
        cmdSubLangDel->setObjectName(QString::fromUtf8("cmdSubLangDel"));
        cmdSubLangDel->setGeometry(QRect(830, 110, 61, 31));
        sbMaterialPrice = new QSpinBox(tbMaterials);
        sbMaterialPrice->setObjectName(QString::fromUtf8("sbMaterialPrice"));
        sbMaterialPrice->setGeometry(QRect(370, 70, 141, 31));
        sbMaterialPrice->setMaximum(999999999);
        lblMaterialCreated = new QLabel(tbMaterials);
        lblMaterialCreated->setObjectName(QString::fromUtf8("lblMaterialCreated"));
        lblMaterialCreated->setGeometry(QRect(920, 20, 141, 31));
        lblMaterialAnswer = new QLabel(tbMaterials);
        lblMaterialAnswer->setObjectName(QString::fromUtf8("lblMaterialAnswer"));
        lblMaterialAnswer->setGeometry(QRect(1110, 20, 111, 31));
        cmdMaterialClear = new QPushButton(tbMaterials);
        cmdMaterialClear->setObjectName(QString::fromUtf8("cmdMaterialClear"));
        cmdMaterialClear->setGeometry(QRect(10, 500, 381, 61));
        cmdMaterialDel = new QPushButton(tbMaterials);
        cmdMaterialDel->setObjectName(QString::fromUtf8("cmdMaterialDel"));
        cmdMaterialDel->setGeometry(QRect(420, 500, 381, 61));
        cmdMaterialCreate = new QPushButton(tbMaterials);
        cmdMaterialCreate->setObjectName(QString::fromUtf8("cmdMaterialCreate"));
        cmdMaterialCreate->setGeometry(QRect(840, 500, 381, 61));
        sbMaterialRuntime = new QSpinBox(tbMaterials);
        sbMaterialRuntime->setObjectName(QString::fromUtf8("sbMaterialRuntime"));
        sbMaterialRuntime->setGeometry(QRect(370, 120, 141, 31));
        sbMaterialRuntime->setMaximum(1000);
        cmdExtraLanguageTracksDel = new QPushButton(tbMaterials);
        cmdExtraLanguageTracksDel->setObjectName(QString::fromUtf8("cmdExtraLanguageTracksDel"));
        cmdExtraLanguageTracksDel->setGeometry(QRect(220, 360, 61, 31));
        lstExtraLanguageTracks = new QListWidget(tbMaterials);
        lstExtraLanguageTracks->setObjectName(QString::fromUtf8("lstExtraLanguageTracks"));
        lstExtraLanguageTracks->setGeometry(QRect(10, 400, 271, 81));
        cbExtraLanguageTracks = new QComboBox(tbMaterials);
        cbExtraLanguageTracks->setObjectName(QString::fromUtf8("cbExtraLanguageTracks"));
        cbExtraLanguageTracks->setGeometry(QRect(10, 360, 111, 31));
        cmdExtraLanguageTracksAdd = new QPushButton(tbMaterials);
        cmdExtraLanguageTracksAdd->setObjectName(QString::fromUtf8("cmdExtraLanguageTracksAdd"));
        cmdExtraLanguageTracksAdd->setGeometry(QRect(140, 360, 61, 31));
        cbExtraSubtitleTracks = new QComboBox(tbMaterials);
        cbExtraSubtitleTracks->setObjectName(QString::fromUtf8("cbExtraSubtitleTracks"));
        cbExtraSubtitleTracks->setGeometry(QRect(310, 360, 121, 31));
        cmdExtraSubtitleTracksAdd = new QPushButton(tbMaterials);
        cmdExtraSubtitleTracksAdd->setObjectName(QString::fromUtf8("cmdExtraSubtitleTracksAdd"));
        cmdExtraSubtitleTracksAdd->setGeometry(QRect(450, 360, 61, 31));
        lstExtraSubtitleTracks = new QListWidget(tbMaterials);
        lstExtraSubtitleTracks->setObjectName(QString::fromUtf8("lstExtraSubtitleTracks"));
        lstExtraSubtitleTracks->setGeometry(QRect(310, 400, 281, 81));
        cmdExtraSubtitleTracksDel = new QPushButton(tbMaterials);
        cmdExtraSubtitleTracksDel->setObjectName(QString::fromUtf8("cmdExtraSubtitleTracksDel"));
        cmdExtraSubtitleTracksDel->setGeometry(QRect(530, 360, 61, 31));
        cmdBonusFeaturesAdd = new QPushButton(tbMaterials);
        cmdBonusFeaturesAdd->setObjectName(QString::fromUtf8("cmdBonusFeaturesAdd"));
        cmdBonusFeaturesAdd->setGeometry(QRect(750, 360, 61, 31));
        lstBonusFeatures = new QListWidget(tbMaterials);
        lstBonusFeatures->setObjectName(QString::fromUtf8("lstBonusFeatures"));
        lstBonusFeatures->setGeometry(QRect(620, 400, 271, 81));
        cmdBonusFeaturesDel = new QPushButton(tbMaterials);
        cmdBonusFeaturesDel->setObjectName(QString::fromUtf8("cmdBonusFeaturesDel"));
        cmdBonusFeaturesDel->setGeometry(QRect(830, 360, 61, 31));
        lblExtraLanguageTracks = new QLabel(tbMaterials);
        lblExtraLanguageTracks->setObjectName(QString::fromUtf8("lblExtraLanguageTracks"));
        lblExtraLanguageTracks->setGeometry(QRect(10, 320, 171, 31));
        lblExtraSubtitleTracks = new QLabel(tbMaterials);
        lblExtraSubtitleTracks->setObjectName(QString::fromUtf8("lblExtraSubtitleTracks"));
        lblExtraSubtitleTracks->setGeometry(QRect(310, 320, 171, 31));
        lblBonusFeatures = new QLabel(tbMaterials);
        lblBonusFeatures->setObjectName(QString::fromUtf8("lblBonusFeatures"));
        lblBonusFeatures->setGeometry(QRect(620, 320, 171, 31));
        lblFirstSideContent = new QLabel(tbMaterials);
        lblFirstSideContent->setObjectName(QString::fromUtf8("lblFirstSideContent"));
        lblFirstSideContent->setGeometry(QRect(10, 270, 151, 31));
        txtFirstSideContent = new QLineEdit(tbMaterials);
        txtFirstSideContent->setObjectName(QString::fromUtf8("txtFirstSideContent"));
        txtFirstSideContent->setGeometry(QRect(160, 270, 241, 31));
        lblSecondSideContent = new QLabel(tbMaterials);
        lblSecondSideContent->setObjectName(QString::fromUtf8("lblSecondSideContent"));
        lblSecondSideContent->setGeometry(QRect(460, 270, 181, 31));
        txtSecondSideContent = new QLineEdit(tbMaterials);
        txtSecondSideContent->setObjectName(QString::fromUtf8("txtSecondSideContent"));
        txtSecondSideContent->setGeometry(QRect(650, 270, 241, 31));
        txtBonusFeatures = new QLineEdit(tbMaterials);
        txtBonusFeatures->setObjectName(QString::fromUtf8("txtBonusFeatures"));
        txtBonusFeatures->setGeometry(QRect(620, 360, 111, 31));
        sbFrameHorizontal = new QSpinBox(tbMaterials);
        sbFrameHorizontal->setObjectName(QString::fromUtf8("sbFrameHorizontal"));
        sbFrameHorizontal->setGeometry(QRect(1110, 370, 111, 31));
        sbFrameVertical = new QSpinBox(tbMaterials);
        sbFrameVertical->setObjectName(QString::fromUtf8("sbFrameVertical"));
        sbFrameVertical->setGeometry(QRect(1110, 410, 111, 31));
        lblMaterialFrameVertical = new QLabel(tbMaterials);
        lblMaterialFrameVertical->setObjectName(QString::fromUtf8("lblMaterialFrameVertical"));
        lblMaterialFrameVertical->setGeometry(QRect(920, 410, 161, 31));
        lblMaterialFrameAspect = new QLabel(tbMaterials);
        lblMaterialFrameAspect->setObjectName(QString::fromUtf8("lblMaterialFrameAspect"));
        lblMaterialFrameAspect->setGeometry(QRect(920, 320, 161, 31));
        txtFrameDescription = new QLineEdit(tbMaterials);
        txtFrameDescription->setObjectName(QString::fromUtf8("txtFrameDescription"));
        txtFrameDescription->setGeometry(QRect(1110, 450, 113, 31));
        lblMaterialFrameDescription = new QLabel(tbMaterials);
        lblMaterialFrameDescription->setObjectName(QString::fromUtf8("lblMaterialFrameDescription"));
        lblMaterialFrameDescription->setGeometry(QRect(920, 450, 181, 31));
        lblMaterialPackageMaterial = new QLabel(tbMaterials);
        lblMaterialPackageMaterial->setObjectName(QString::fromUtf8("lblMaterialPackageMaterial"));
        lblMaterialPackageMaterial->setGeometry(QRect(920, 120, 151, 31));
        lblMaterialPackageHeight = new QLabel(tbMaterials);
        lblMaterialPackageHeight->setObjectName(QString::fromUtf8("lblMaterialPackageHeight"));
        lblMaterialPackageHeight->setGeometry(QRect(920, 160, 151, 31));
        lblMaterialPackageDepth = new QLabel(tbMaterials);
        lblMaterialPackageDepth->setObjectName(QString::fromUtf8("lblMaterialPackageDepth"));
        lblMaterialPackageDepth->setGeometry(QRect(920, 240, 151, 31));
        sbPackagingHeight = new QSpinBox(tbMaterials);
        sbPackagingHeight->setObjectName(QString::fromUtf8("sbPackagingHeight"));
        sbPackagingHeight->setGeometry(QRect(1110, 160, 111, 31));
        sbPackagingDepth = new QSpinBox(tbMaterials);
        sbPackagingDepth->setObjectName(QString::fromUtf8("sbPackagingDepth"));
        sbPackagingDepth->setGeometry(QRect(1110, 240, 111, 31));
        lblMaterialPackageWidth = new QLabel(tbMaterials);
        lblMaterialPackageWidth->setObjectName(QString::fromUtf8("lblMaterialPackageWidth"));
        lblMaterialPackageWidth->setGeometry(QRect(920, 200, 151, 31));
        sbPackagingWidth = new QSpinBox(tbMaterials);
        sbPackagingWidth->setObjectName(QString::fromUtf8("sbPackagingWidth"));
        sbPackagingWidth->setGeometry(QRect(1110, 200, 111, 31));
        cbPackagingMaterial = new QComboBox(tbMaterials);
        cbPackagingMaterial->setObjectName(QString::fromUtf8("cbPackagingMaterial"));
        cbPackagingMaterial->setGeometry(QRect(1110, 120, 111, 31));
        sbComboSingleDVD = new QSpinBox(tbMaterials);
        sbComboSingleDVD->setObjectName(QString::fromUtf8("sbComboSingleDVD"));
        sbComboSingleDVD->setGeometry(QRect(760, 70, 131, 31));
        lblComboDoubleDVD = new QLabel(tbMaterials);
        lblComboDoubleDVD->setObjectName(QString::fromUtf8("lblComboDoubleDVD"));
        lblComboDoubleDVD->setGeometry(QRect(530, 120, 261, 31));
        sbComboDoubleDVD = new QSpinBox(tbMaterials);
        sbComboDoubleDVD->setObjectName(QString::fromUtf8("sbComboDoubleDVD"));
        sbComboDoubleDVD->setGeometry(QRect(760, 120, 131, 31));
        lblComboSingleDVD = new QLabel(tbMaterials);
        lblComboSingleDVD->setObjectName(QString::fromUtf8("lblComboSingleDVD"));
        lblComboSingleDVD->setGeometry(QRect(530, 120, 271, 31));
        tabWidget->addTab(tbMaterials, QString());
        lblProjectName = new QLabel(ProjectDetails);
        lblProjectName->setObjectName(QString::fromUtf8("lblProjectName"));
        lblProjectName->setGeometry(QRect(510, 0, 271, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        lblProjectName->setFont(font1);
        lblProjectName->setAlignment(Qt::AlignCenter);
        backButton = new QPushButton(ProjectDetails);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 15, 71, 31));

        retranslateUi(ProjectDetails);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProjectDetails);
    } // setupUi

    void retranslateUi(QDialog *ProjectDetails)
    {
        ProjectDetails->setWindowTitle(QApplication::translate("ProjectDetails", "Dialog", nullptr));
        cmdLocationDel->setText(QApplication::translate("ProjectDetails", "Delete", nullptr));
        cmdLocationAdd->setText(QApplication::translate("ProjectDetails", "Add", nullptr));
        cbLanguage->setCurrentText(QString());
        cmdClearGeneralChanges->setText(QApplication::translate("ProjectDetails", "Reset Changes", nullptr));
        lblRuntime->setText(QApplication::translate("ProjectDetails", "Runtime:", nullptr));
        lblSummary->setText(QApplication::translate("ProjectDetails", "Summary:", nullptr));
        lblLocations->setText(QApplication::translate("ProjectDetails", "Locations:", nullptr));
        cmdApplyGeneralChanges->setText(QApplication::translate("ProjectDetails", "Update Project Details", nullptr));
        lblGenre->setText(QApplication::translate("ProjectDetails", "Genre:", nullptr));
        lblStatus->setText(QApplication::translate("ProjectDetails", "Status:", nullptr));
        lblRelease->setText(QApplication::translate("ProjectDetails", "Release:", nullptr));
        lblTitleProjects->setText(QApplication::translate("ProjectDetails", "Title:", nullptr));
        lblLanguage->setText(QApplication::translate("ProjectDetails", "Language:", nullptr));
        lblKeywords->setText(QApplication::translate("ProjectDetails", "Keywords:", nullptr));
        lblSales->setText(QApplication::translate("ProjectDetails", "Sales:", nullptr));
        cmdKeywordsDel->setText(QApplication::translate("ProjectDetails", "Delete", nullptr));
        cmdKeywordsAdd->setText(QApplication::translate("ProjectDetails", "Add", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbGeneral), QApplication::translate("ProjectDetails", "General", nullptr));
        cmdCrewFilter->setText(QApplication::translate("ProjectDetails", "Filter", nullptr));
        cmdCrewDel->setText(QApplication::translate("ProjectDetails", "Delete", nullptr));
        cmdCrewAdd->setText(QApplication::translate("ProjectDetails", "Add", nullptr));
        lblDateOfBirth->setText(QApplication::translate("ProjectDetails", "Date of Birth:", nullptr));
        lblIDNum->setText(QApplication::translate("ProjectDetails", "ID:", nullptr));
        lblNameTitle->setText(QApplication::translate("ProjectDetails", "Title:", nullptr));
        lblExperience->setText(QApplication::translate("ProjectDetails", "Experience: ", nullptr));
        lblName->setText(QApplication::translate("ProjectDetails", "Name:", nullptr));
        lblCrewLocations->setText(QApplication::translate("ProjectDetails", "Locations:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbCrew), QApplication::translate("ProjectDetails", "Crew", nullptr));
        lblMaterialType->setText(QApplication::translate("ProjectDetails", "Type of Material: ", nullptr));
        lblMaterialIDNum->setText(QApplication::translate("ProjectDetails", "ID Number:", nullptr));
        lblMaterialTitle->setText(QApplication::translate("ProjectDetails", "Title:", nullptr));
        lblVFormat->setText(QApplication::translate("ProjectDetails", "Video Format:", nullptr));
        lblAFormat->setText(QApplication::translate("ProjectDetails", "Audio Format:", nullptr));
        lblMaterialLanguage->setText(QApplication::translate("ProjectDetails", "Language:", nullptr));
        lblMaterialFrameHorizontal->setText(QApplication::translate("ProjectDetails", "Frame Horizontal Ratio:", nullptr));
        lblMaterialPackage->setText(QApplication::translate("ProjectDetails", "Packaging:", nullptr));
        lblMaterialRuntime->setText(QApplication::translate("ProjectDetails", "Runtime:", nullptr));
        lblMaterialPrice->setText(QApplication::translate("ProjectDetails", "Price:", nullptr));
        lblMaterialSubLang->setText(QApplication::translate("ProjectDetails", "Subtitle Languages:", nullptr));
        cmdSubLangAdd->setText(QApplication::translate("ProjectDetails", "Add", nullptr));
        cmdSubLangDel->setText(QApplication::translate("ProjectDetails", "Del", nullptr));
        lblMaterialCreated->setText(QApplication::translate("ProjectDetails", "Material Created:", nullptr));
        lblMaterialAnswer->setText(QApplication::translate("ProjectDetails", "No", nullptr));
        cmdMaterialClear->setText(QApplication::translate("ProjectDetails", "Clear Changes", nullptr));
        cmdMaterialDel->setText(QApplication::translate("ProjectDetails", "Delete Material", nullptr));
        cmdMaterialCreate->setText(QApplication::translate("ProjectDetails", "Create Material", nullptr));
        cmdExtraLanguageTracksDel->setText(QApplication::translate("ProjectDetails", "Del", nullptr));
        cmdExtraLanguageTracksAdd->setText(QApplication::translate("ProjectDetails", "Add", nullptr));
        cmdExtraSubtitleTracksAdd->setText(QApplication::translate("ProjectDetails", "Add", nullptr));
        cmdExtraSubtitleTracksDel->setText(QApplication::translate("ProjectDetails", "Del", nullptr));
        cmdBonusFeaturesAdd->setText(QApplication::translate("ProjectDetails", "Add", nullptr));
        cmdBonusFeaturesDel->setText(QApplication::translate("ProjectDetails", "Del", nullptr));
        lblExtraLanguageTracks->setText(QApplication::translate("ProjectDetails", "Extra Language Tracks:", nullptr));
        lblExtraSubtitleTracks->setText(QApplication::translate("ProjectDetails", "Extra Subtitle Tracks:", nullptr));
        lblBonusFeatures->setText(QApplication::translate("ProjectDetails", "Bonus Features:", nullptr));
        lblFirstSideContent->setText(QApplication::translate("ProjectDetails", "First Side Content:", nullptr));
        lblSecondSideContent->setText(QApplication::translate("ProjectDetails", "Second Side Content:", nullptr));
        lblMaterialFrameVertical->setText(QApplication::translate("ProjectDetails", "Frame Vertical Ratio:", nullptr));
        lblMaterialFrameAspect->setText(QApplication::translate("ProjectDetails", "Frame Aspect:", nullptr));
        lblMaterialFrameDescription->setText(QApplication::translate("ProjectDetails", "Frame Ratio Description:", nullptr));
        lblMaterialPackageMaterial->setText(QApplication::translate("ProjectDetails", "Packaging Material:", nullptr));
        lblMaterialPackageHeight->setText(QApplication::translate("ProjectDetails", "Packaging Height:", nullptr));
        lblMaterialPackageDepth->setText(QApplication::translate("ProjectDetails", "Packaging Depth:", nullptr));
        lblMaterialPackageWidth->setText(QApplication::translate("ProjectDetails", "Packaging Width:", nullptr));
        lblComboDoubleDVD->setText(QApplication::translate("ProjectDetails", "Amount of Double Sided DVDs:", nullptr));
        lblComboSingleDVD->setText(QApplication::translate("ProjectDetails", "Amount of Single Sided DVDs:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbMaterials), QApplication::translate("ProjectDetails", "Materials", nullptr));
        lblProjectName->setText(QApplication::translate("ProjectDetails", "Project Name", nullptr));
        backButton->setText(QApplication::translate("ProjectDetails", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectDetails: public Ui_ProjectDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDETAILS_H