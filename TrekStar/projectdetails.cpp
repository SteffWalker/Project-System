#include "projectdetails.h"
#include "ui_projectdetails.h"

ProjectDetails::ProjectDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectDetails)
{
    ui->setupUi(this);
    ui->cbMaterialType->addItem("DVD Single Sided");
    ui->cbMaterialType->addItem("DVD Double Sided");
    ui->cbMaterialType->addItem("Blu Ray");
    ui->cbMaterialType->addItem("VHS");
    ui->cbMaterialType->addItem("Combo Box");

    // Sets all options for the video format combo box on the project window
    ui->cbVFormat->addItem("MP4");
    ui->cbVFormat->addItem("FLV");
    ui->cbVFormat->addItem("AVI");
    ui->cbVFormat->addItem("3GP");
    ui->cbVFormat->addItem("WMV");
    ui->cbVFormat->addItem("HDV");

    // Sets all options for the audio format combo box on the project window
    ui->cbAFormat->addItem("MP3");
    ui->cbAFormat->addItem("AC3(Dolby Digital)");
    ui->cbAFormat->addItem("EAC3(Dolby Digital Plus)");
    ui->cbAFormat->addItem("PCM");
    ui->cbAFormat->addItem("WMA");

    // Sets all options for the materials language combo box on the project window
    ui->cbMaterialLanguage->addItem("English");
    ui->cbMaterialLanguage->addItem("French");
    ui->cbMaterialLanguage->addItem("German");
    ui->cbMaterialLanguage->addItem("Spanish");
    ui->cbMaterialLanguage->addItem("Italian");
    ui->cbMaterialLanguage->addItem("Dutch");
    ui->cbMaterialLanguage->addItem("Japanese");
    ui->cbMaterialLanguage->addItem("Hindi");

    // Sets all options for the materials subtitle combo box on the project window
    ui->cbSubLang->addItem("English");
    ui->cbSubLang->addItem("French");
    ui->cbSubLang->addItem("German");
    ui->cbSubLang->addItem("Spanish");
    ui->cbSubLang->addItem("Italian");
    ui->cbSubLang->addItem("Dutch");
    ui->cbSubLang->addItem("Japanese");
    ui->cbSubLang->addItem("Hindi");

    // Sets all options for the materials extra language tracks combo box on the project window
    ui->cbExtraLanguageTracks->addItem("English");
    ui->cbExtraLanguageTracks->addItem("French");
    ui->cbExtraLanguageTracks->addItem("German");
    ui->cbExtraLanguageTracks->addItem("Spanish");
    ui->cbExtraLanguageTracks->addItem("Italian");
    ui->cbExtraLanguageTracks->addItem("Dutch");
    ui->cbExtraLanguageTracks->addItem("Japanese");
    ui->cbExtraLanguageTracks->addItem("Hindi");

    // Sets all options for the materials extra subtitle tracks combo box on the project window
    ui->cbExtraSubtitleTracks->addItem("English");
    ui->cbExtraSubtitleTracks->addItem("French");
    ui->cbExtraSubtitleTracks->addItem("German");
    ui->cbExtraSubtitleTracks->addItem("Spanish");
    ui->cbExtraSubtitleTracks->addItem("Italian");
    ui->cbExtraSubtitleTracks->addItem("Dutch");
    ui->cbExtraSubtitleTracks->addItem("Japanese");
    ui->cbExtraSubtitleTracks->addItem("Hindi");

}

ProjectDetails::~ProjectDetails()
{
    delete ui;
}
