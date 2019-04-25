#include "projectdetails.h"
#include "ui_projectdetails.h"

ProjectDetails::ProjectDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectDetails)
{
    ui->setupUi(this);
//    pw.ui->cbMaterialType->addItem("DVD Single Sided");
//    pw.ui->cbMaterialType->addItem("DVD Double Sided");
//    pw.ui->cbMaterialType->addItem("Blu Ray");
//    pw.ui->cbMaterialType->addItem("VHS");
//    pw.ui->cbMaterialType->addItem("Combo Box");

//    // Sets all options for the video format combo box on the project window
//    pw.ui->cbVFormat->addItem("mp4");
//    pw.ui->cbVFormat->addItem("flv");
//    pw.ui->cbVFormat->addItem("avi");
//    pw.ui->cbVFormat->addItem("mov");
//    pw.ui->cbVFormat->addItem("wmv");
//    pw.ui->cbVFormat->addItem("asf");
//    pw.ui->cbVFormat->addItem("3gp");

//    // Sets all options for the audio format combo box on the project window
//    pw.ui->cbAFormat->addItem("wav");
//    pw.ui->cbAFormat->addItem("mp3");
//    pw.ui->cbAFormat->addItem("wma");
//    pw.ui->cbAFormat->addItem("vox");
//    pw.ui->cbAFormat->addItem("dts");

//    // Sets all options for the materials language combo box on the project window
//    pw.ui->cbMaterialLanguage->addItem("English");
//    pw.ui->cbMaterialLanguage->addItem("French");
//    pw.ui->cbMaterialLanguage->addItem("German");
//    pw.ui->cbMaterialLanguage->addItem("Spanish");
//    pw.ui->cbMaterialLanguage->addItem("Italian");
//    pw.ui->cbMaterialLanguage->addItem("Dutch");
//    pw.ui->cbMaterialLanguage->addItem("Japanese");
//    pw.ui->cbMaterialLanguage->addItem("Hindi");

//    // Sets all options for the materials subtitle combo box on the project window
//    pw.ui->cbSubLang->addItem("English");
//    pw.ui->cbSubLang->addItem("French");
//    pw.ui->cbSubLang->addItem("German");
//    pw.ui->cbSubLang->addItem("Spanish");
//    pw.ui->cbSubLang->addItem("Italian");
//    pw.ui->cbSubLang->addItem("Dutch");
//    pw.ui->cbSubLang->addItem("Japanese");
//    pw.ui->cbSubLang->addItem("Hindi");

//    // Sets all options for the materials extra language tracks combo box on the project window
//    pw.ui->cbExtraLanguageTracks->addItem("English");
//    pw.ui->cbExtraLanguageTracks->addItem("French");
//    pw.ui->cbExtraLanguageTracks->addItem("German");
//    pw.ui->cbExtraLanguageTracks->addItem("Spanish");
//    pw.ui->cbExtraLanguageTracks->addItem("Italian");
//    pw.ui->cbExtraLanguageTracks->addItem("Dutch");
//    pw.ui->cbExtraLanguageTracks->addItem("Japanese");
//    pw.ui->cbExtraLanguageTracks->addItem("Hindi");

//    // Sets all options for the materials extra subtitle tracks combo box on the project window
//    pw.ui->cbExtraSubtitleTracks->addItem("English");
//    pw.ui->cbExtraSubtitleTracks->addItem("French");
//    pw.ui->cbExtraSubtitleTracks->addItem("German");
//    pw.ui->cbExtraSubtitleTracks->addItem("Spanish");
//    pw.ui->cbExtraSubtitleTracks->addItem("Italian");
//    pw.ui->cbExtraSubtitleTracks->addItem("Dutch");
//    pw.ui->cbExtraSubtitleTracks->addItem("Japanese");
//    pw.ui->cbExtraSubtitleTracks->addItem("Hindi");

}

ProjectDetails::~ProjectDetails()
{
    delete ui;
}
