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

    // Sets all options for the filter combo box on the project window
    ui->cbCrew->addItem("All Crew Members");
    ui->cbCrew->addItem("Director");
    ui->cbCrew->addItem("Actor");
    ui->cbCrew->addItem("Producer");
    ui->cbCrew->addItem("Writer");
    ui->cbCrew->addItem("Editor");
    ui->cbCrew->addItem("Production Designer");
    ui->cbCrew->addItem("Set Decorator");
    ui->cbCrew->addItem("Costume Designer");

    // Sets all options for the name title combo box on the project window
    ui->cbNameTitle->addItem("Mr");
    ui->cbNameTitle->addItem("Mrs");
    ui->cbNameTitle->addItem("Miss");
    ui->cbNameTitle->addItem("Dr");

    // Connects button press signals on project window to functions
    connect(ui->cmdApplyGeneralChanges, SIGNAL(clicked()),this, SLOT(handleApplyGeneralChanges()));
    //connect(ui->cmdClearGeneralChanges, SIGNAL(clicked()),this, SLOT(setProjectWindow()));
    connect(ui->cmdClearGeneralChanges, SIGNAL(clicked()),this, SLOT(clearFormGeneral()));
    connect(ui->cmdLocationAdd, SIGNAL(clicked()),this, SLOT(handleProjectWindowLocationAdd()));
    connect(ui->cmdLocationDel, SIGNAL(clicked()),this, SLOT(handleProjectWindowLocationDel()));
    connect(ui->cmdKeywordsAdd, SIGNAL(clicked()),this, SLOT(handleProjectWindowKeywordsAdd()));
    connect(ui->cmdKeywordsDel, SIGNAL(clicked()),this, SLOT(handleProjectWindowKeywordsDel()));
    connect(ui->cbStatus, SIGNAL(currentIndexChanged(int)), this, SLOT(handleProjectWindowStatusChange()));
    connect(ui->cbCrew, SIGNAL(currentIndexChanged(int)), this, SLOT(handleProjectWindowCrewChange()));
    connect(ui->cmdCrewAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowCrewAdd()));
    connect(ui->cmdCrewDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowCrewDel()));
    connect(ui->cmdCrewFilter, SIGNAL(clicked()), this, SLOT(handleProjectWindowCrewFilter()));
    connect(ui->cbMaterialType, SIGNAL(currentIndexChanged(int)), this, SLOT(handleProjectWindowMaterialChange()));
    connect(ui->cmdMaterialClear, SIGNAL(clicked()), this, SLOT(handleProjectWindowMaterialChange()));
    connect(ui->cmdMaterialDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowMaterialDelete()));
    connect(ui->cmdMaterialCreate, SIGNAL(clicked()), this, SLOT(handleProjectWindowMaterialCreate()));
    connect(ui->cmdSubLangAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowSubLangAdd()));
    connect(ui->cmdSubLangDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowSubLangDel()));
    connect(ui->cmdExtraLanguageTracksAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowExtraLangAdd()));
    connect(ui->cmdExtraLanguageTracksDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowExtraLangDel()));
    connect(ui->cmdExtraSubtitleTracksAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowExtraSubLangAdd()));
    connect(ui->cmdExtraSubtitleTracksDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowExtraSubLangDel()));
    connect(ui->cmdBonusFeaturesAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowBonusAdd()));
    connect(ui->cmdBonusFeaturesDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowBonusDel()));
    connect(ui->sbComboSingleDVD, SIGNAL(valueChanged(int)), this, SLOT(updateComboRuntime()));
    connect(ui->sbComboDoubleDVD, SIGNAL(valueChanged(int)), this, SLOT(updateComboRuntime()));
    connect(ui->sbComboSingleDVD, SIGNAL(valueChanged(int)), this, SLOT(updateMinimumPackage()));
    connect(ui->sbComboDoubleDVD, SIGNAL(valueChanged(int)), this, SLOT(updateMinimumPackage()));
}

void ProjectDetails::clearFormGeneral()
{
    ui->txtTitleProject->clear();
    ui->txtSummary->clear();
    ui->cbStatus->setCurrentIndex(0);
    ui->cbGenre->setCurrentIndex(0);
    ui->cbLanguage->setCurrentIndex(0);
    ui->deRelease->setDate(QDate(2000, 1, 1));
    ui->sbRuntime->setValue(0);
    ui->sbSales->setValue(0);
    ui->txtLocationAdd->clear();
    ui->lstLocations->clear();
    ui->txtKeywordsAdd->clear();
    ui->lstKeywords->clear();
}

void ProjectDetails::handleProjectWindowLocationAdd(){

    QString input = ui->txtLocationAdd->text();
    if(input.toStdString() != ""){
        ui->lstLocations->addItem(input);
    }
    ui->txtLocationAdd->clear();
}
void ProjectDetails::setProjectWindow(){

        ui->lblProjectName->setText(QString::fromStdString("  " + openProj->getTitle()));
        ui->txtTitleProject->setText(QString::fromStdString(openProj->getTitle()));
        ui->txtSummary->setText(QString::fromStdString(openProj->getSummary()));

        if(openProj->getProjectStatus() == "Unreleased"){
            ui->cbStatus->setCurrentIndex(0);
        }
        else if(openProj->getProjectStatus() == "Now Playing"){
            ui->cbStatus->setCurrentIndex(1);
        }else if(openProj->getProjectStatus() == "Released"){
            ui->cbStatus->setCurrentIndex(2);
        }

        if(openProj->getGenre() == "Action"){
            ui->cbGenre->setCurrentIndex(0);
        }
        else if(openProj->getGenre() == "Comedy"){
            ui->cbGenre->setCurrentIndex(1);
        }
        else if(openProj->getGenre() == "Drama"){
            ui->cbGenre->setCurrentIndex(2);
        }
        else if(openProj->getGenre() == "Documentary"){
            ui->cbGenre->setCurrentIndex(3);
        }
        else if(openProj->getGenre() == "Horror"){
            ui->cbGenre->setCurrentIndex(4);
        }
        else if(openProj->getGenre() == "Thriller"){
            ui->cbGenre->setCurrentIndex(5);
        }

        if(openProj->getLanguage() == "English"){
            ui->cbLanguage->setCurrentIndex(0);
        }
        else if(openProj->getLanguage() == "French"){
            ui->cbLanguage->setCurrentIndex(1);
        }
        else if(openProj->getLanguage() == "German"){
            ui->cbLanguage->setCurrentIndex(2);
        }
        else if(openProj->getLanguage() == "Spanish"){
            ui->cbLanguage->setCurrentIndex(3);
        }
        else if(openProj->getLanguage() == "Mandarin"){
            ui->cbLanguage->setCurrentIndex(4);
        }

        ui->deRelease->setDate(QDate::fromString(QString::fromStdString(openProj->getReleaseDate()), "dd/MM/yyyy"));
        ui->sbRuntime->setValue(openProj->getRunTime());
        ui->sbSales->setValue(openProj->getWeeklyBoxFigures());

        ui->txtLocationAdd->clear();
        ui->lstLocations->clear();
        for(unsigned int i = 0; i < openProj->getFilmLocations().size(); ++i){
             ui->lstLocations->addItem(QString::fromStdString(openProj->getFilmLocations()[i]));
        }

        ui->txtKeywordsAdd->clear();
        ui->lstKeywords->clear();
        for(unsigned int j = 0; j < openProj->getKeywords().size(); ++j){
             ui->lstKeywords->addItem(QString::fromStdString(openProj->getKeywords()[j]));
        }

        ui->lblTitleProjects->setStyleSheet("color: #78CAD2");
        ui->lblSummary->setStyleSheet("color: #78CAD2");
        ui->lblLocations->setStyleSheet("color: #78CAD2");
        ui->lblKeywords->setStyleSheet("color: #78CAD2");

        //updateCrewLocations();

    }

    void ProjectDetails::handleApplyGeneralChanges(){

        bool apply = true;

        // Gets data from the form
        std::string projTitle = ui->txtTitleProject->text().toStdString();
        std::string summary = ui->txtSummary->toPlainText().toStdString();
        std::string status = ui->cbStatus->currentText().toStdString();
        std::string genre = ui->cbGenre->currentText().toStdString();
        std::string language = ui->cbLanguage->currentText().toStdString();
        std::string date = ui->deRelease->date().toString(Qt::DefaultLocaleShortDate).toStdString();
        int runtime = ui->sbRuntime->value();
        int sales = ui->sbSales->value();

        std::vector<std::string> locations;
        for(int i = 0; i < ui->lstLocations->count(); ++i){
            locations.push_back(ui->lstLocations->item(i)->text().toStdString());
        }

        std::vector<std::string> keywords;
        for(int i = 0; i < ui->lstKeywords->count(); ++i){
            keywords.push_back(ui->lstKeywords->item(i)->text().toStdString());
        }

        // Checks data has been inputted and flags red if it has not
        if(projTitle == ""){
            ui->lblTitleProjects->setStyleSheet("color: #D81E5B");
            apply = false;
        }else{
            ui->lblTitleProjects->setStyleSheet("color: #78CAD2");
        }

        if(summary == ""){
            ui->lblSummary->setStyleSheet("color: #D81E5B");
            apply = false;
        }else{
            ui->lblSummary->setStyleSheet("color: #78CAD2");
        }

        if(locations.size() == 0){
            ui->lblLocations->setStyleSheet("color: #D81E5B");
            apply = false;
        }else{
            ui->lblLocations->setStyleSheet("color: #78CAD2");
        }

        if(keywords.size() == 0){
            ui->lblKeywords->setStyleSheet("color: #D81E5B");
            apply = false;
        }else{
            ui->lblKeywords->setStyleSheet("color: #78CAD2");
        }

        // If all fields have correctly inputted data a new project is created
        if(apply){

            openProj->setTitle(projTitle);
            openProj->setSummary(summary);
            openProj->setProjectStatus(status);
            openProj->setGenre(genre);
            openProj->setLanguage(language);
            openProj->setReleaseDate(date);
            openProj->setRunTime(runtime);
            openProj->setWeeklyBoxFigures(sales);
            openProj->setFilmLocations(locations);
            openProj->setKeywords(keywords);

            setProjectWindow();
            //showAllProjects();

         }

    }



    void ProjectDetails::handleProjectWindowLocationDel(){

        QList <QListWidgetItem *> selectedItems = ui->lstLocations->selectedItems();
        for(int i = 0; i < selectedItems.size(); i++){
            delete ui->lstLocations->takeItem(ui->lstLocations->row(selectedItems[i]));
        }

    }

    void ProjectDetails::handleProjectWindowKeywordsAdd(){

        QString input = ui->txtKeywordsAdd->text();
        if(input.toStdString() != ""){
            ui->lstKeywords->addItem(input);
        }
        ui->txtKeywordsAdd->clear();

    }

    void ProjectDetails::handleProjectWindowKeywordsDel(){

        QList <QListWidgetItem *> selectedItems = ui->lstKeywords->selectedItems();
        for(int i = 0; i < selectedItems.size(); i++){
            delete ui->lstKeywords->takeItem(ui->lstKeywords->row(selectedItems[i]));
        }

    }

    void ProjectDetails::handleProjectWindowStatusChange(){

        std::string status = ui->cbStatus->currentText().toStdString();

        if(status == "Unreleased" || status == "Released"){
            ui->lblSales->setStyleSheet("color: #7C8483");
            ui->sbSales->setReadOnly(true);
            ui->sbSales->setVisible(false);
            if(status == "Unreleased"){
                ui->tabWidget->setTabEnabled(2, false);
            }
            else{
                ui->tabWidget->setTabEnabled(2, true);
            }
        }
        else if (status == "Now Playing"){
            ui->lblSales->setStyleSheet("color: #78CAD2");
            ui->sbSales->setReadOnly(false);
            ui->sbSales->setVisible(true);
            ui->tabWidget->setTabEnabled(2, false);
        }

    }

    void ProjectDetails::displayCrew(){

        ui->lstCrew->clear();
        std::vector <FilmCrew> crew = openProj->getCrew();

        for(unsigned int i = 0; i < crew.size(); ++i){

            std::string locationString = "";

            for(unsigned int j = 0; j < crew[i].getLocationsWorkedAt().size(); ++j){

                locationString += crew[i].getLocationsWorkedAt()[j];
                if(j != crew[i].getLocationsWorkedAt().size() - 1){
                    locationString += ", ";
                }

            }

            ui->lstCrew->addItem(QString::fromStdString(\
                   crew[i].getTitle() + " " + crew[i].getName() + ": \n ID: " + crew[i].getIdNumber() \
                   + "\n Born: " + crew[i].getDateOfBirth() + "\n Role: " + crew[i].getRole() + "\n Experience: " \
                   + std::to_string(crew[i].getYearsOfExperience()) + " years"\
                   + "\n Locations: " + locationString));
        }

    }

    void ProjectDetails::updateCrewLocations(){

        ui->lstCrewLocations->clear();
        for(unsigned int i = 0; i < openProj->getFilmLocations().size(); ++i){
            ui->lstCrewLocations->addItem(QString::fromStdString(openProj->getFilmLocations()[i]));
        }

    }

    void ProjectDetails::handleProjectWindowCrewChange(){

        std::string selection = ui->cbCrew->currentText().toStdString();

        if(selection == "All Crew Members"){
            ui->lblNameTitle->setVisible(false);
            ui->cbNameTitle->setDisabled(true);
            ui->cbNameTitle->setVisible(false);
            ui->lblName->setVisible(false);
            ui->txtName->setDisabled(true);
            ui->txtName->setVisible(false);
            ui->lblIDNum->setVisible(false);
            ui->txtIDNum->setVisible(false);
            ui->txtIDNum->setDisabled(true);
            ui->cbNameTitle->setVisible(false);
            ui->lblDateOfBirth->setVisible(false);
            ui->deDofB->setVisible(false);
            ui->deDofB->setDisabled(true);
            ui->lblExperience->setVisible(false);
            ui->sbExperience->setDisabled(true);
            ui->sbExperience->setVisible(false);
            ui->cmdCrewAdd->setDisabled(true);
            ui->cmdCrewAdd->setVisible(false);
            ui->lblCrewLocations->setVisible(false);
            ui->lstCrewLocations->setDisabled(true);
            ui->lstCrewLocations->setVisible(false);

            displayCrew();
        }else{
            ui->lblNameTitle->setVisible(true);
            ui->cbNameTitle->setDisabled(false);
            ui->cbNameTitle->setVisible(true);
            ui->lblName->setVisible(true);
            ui->txtName->setDisabled(false);
            ui->txtName->setVisible(true);
            ui->lblIDNum->setVisible(true);
            ui->txtIDNum->setVisible(true);
            ui->txtIDNum->setDisabled(false);
            ui->cbNameTitle->setVisible(true);
            ui->lblDateOfBirth->setVisible(true);
            ui->deDofB->setVisible(true);
            ui->deDofB->setDisabled(false);
            ui->lblExperience->setVisible(true);
            ui->sbExperience->setDisabled(false);
            ui->sbExperience->setVisible(true);
            ui->cmdCrewAdd->setDisabled(false);
            ui->cmdCrewAdd->setVisible(true);
            ui->lblCrewLocations->setVisible(true);
            ui->lstCrewLocations->setDisabled(false);
            ui->lstCrewLocations->setVisible(true);

            if(selection == "Director"){
                filterCrewByRole("Director");
            }
            else if(selection == "Actor"){
                filterCrewByRole("Actor");
            }
            else if(selection == "Producer"){
                filterCrewByRole("Producer");
            }
            else if(selection == "Writer"){
                filterCrewByRole("Writer");
            }
            else if(selection == "Editor"){
                filterCrewByRole("Editor");
            }
            else if(selection == "Production Designer"){
                filterCrewByRole("Production Designer");
            }
            else if(selection == "Set Decorator"){
                filterCrewByRole("Set Decorator");
            }
            else if(selection == "Costume Designer"){
                filterCrewByRole("Costume Designer");
            }

        }

    }

    void ProjectDetails::handleProjectWindowCrewAdd(){

        bool addCrew = true;

        std::string name = ui->txtName->text().toStdString();
        std::string title = ui->cbNameTitle->currentText().toStdString();
        std::string DofB = ui->deDofB->date().toString(Qt::DefaultLocaleShortDate).toStdString();
        std::string ID = ui->txtIDNum->text().toStdString();
        std::string role = ui->cbCrew->currentText().toStdString();
        int experience = ui->sbExperience->value();

        QList <QListWidgetItem *> selectedItems = ui->lstCrewLocations->selectedItems();
        std::vector <std::string> loc;

        for(int i = 0; i < selectedItems.size(); ++i){
            loc.push_back(selectedItems[i]->text().toStdString());
        }

        if(name == ""){
            ui->lblName->setStyleSheet("color: #D81E5B");
            addCrew = false;
        }else{
            ui->lblName->setStyleSheet("color: #78CAD2");
        }

        if(ID == ""){
            ui->lblIDNum->setStyleSheet("color: #D81E5B");
            addCrew = false;
        }else{
            ui->lblIDNum->setStyleSheet("color: #78CAD2");
        }

        if(loc.size() == 0){
            ui->lblCrewLocations->setStyleSheet("color: #D81E5B");
            addCrew = false;
        }else{
            ui->lblIDNum->setStyleSheet("color: #78CAD2");
        }

        if(addCrew){

            std::string locationString = "";
            for(unsigned int j = 0; j < loc.size(); ++j){
                locationString += loc[j];
                if(j != loc.size() - 1){
                    locationString += ", ";
                }
            }
            ui->lstCrew->addItem(QString::fromStdString(\
                   title + " " + name + ": \n ID: " + ID + "\n Born: " + DofB + "\n Role: "\
                   + role + "\n Experience: " + std::to_string(experience) + " years" \
                   + "\n Locations: " + locationString));

            FilmCrew newC;

            newC.setName(name);
            newC.setTitle(title);
            newC.setIdNumber(ID);
            newC.setDateOfBirth(DofB);
            newC.setRole(role);
            newC.setYearsOfExperience(experience);
            newC.setLocationsWorkedAt(loc);

            std::vector <FilmCrew> newCrew = openProj->getCrew();
            newCrew.push_back(newC);
            openProj->setCrew(newCrew);
            //openProj->setCrewID(projList.getIdNumber());

            ui->txtName->clear();
            ui->cbNameTitle->setCurrentIndex(0);
            ui->deDofB->setDate(QDate(2000, 1, 1));
            ui->txtIDNum->clear();
            ui->sbExperience->setValue(0);
            //handleCreateProject();
            //handleFilter();
        }

    }

    void ProjectDetails::handleProjectWindowCrewDel(){

        QList <QListWidgetItem *> selectedItems = ui->lstCrew->selectedItems();

        for(int i = 0; i < selectedItems.size(); i++){

            std::string text = selectedItems[i]->text().toStdString();

            std::string title = text.substr(0, text.find_first_of(" "));
            std::string name = text.substr((text.find_first_of(" ") + 1), \
                                           (text.find_first_of(":") - (text.find_first_of(" ") + 1)));
            std::string id = text.substr((text.find("ID:") + 4), (text.find("\n Born:") - (text.find("ID:") + 4)));

            std::vector <FilmCrew> crew = openProj->getCrew();

            for(unsigned int i = 0; i < crew.size(); ++i){
                if(crew[i].getTitle() == title && crew[i].getName() == name && crew[i].getIdNumber() == id){
                    crew.erase(crew.begin() + i);
                }
            }

            openProj->setCrew(crew);
            delete ui->lstCrew->takeItem(ui->lstCrew->row(selectedItems[i]));
            //handleCreateProject();
            //handleFilter();
        }

    }

    void ProjectDetails::handleProjectWindowCrewFilter(){

        std::string role = ui->cbCrew->currentText().toStdString();
        std::string input = ui->txtCrew->text().toStdString();

        ui->lstCrew->clear();

        std::vector <FilmCrew> crew = openProj->getCrew();

        for(unsigned int i = 0; i < crew.size(); ++i){
            if((crew[i].getRole() == role || role == "All Crew Members") && crew[i].getName() == input){

                std::string locationString = "";

                for(unsigned int j = 0; j < crew[i].getLocationsWorkedAt().size(); ++j){

                    locationString += crew[i].getLocationsWorkedAt()[j];
                    if(j != crew[i].getLocationsWorkedAt().size() - 1){
                        locationString += ", ";
                    }

                }

                ui->lstCrew->addItem(QString::fromStdString(\
                       crew[i].getTitle() + " " + crew[i].getName() + ": \n ID: " + crew[i].getIdNumber() \
                       + "\n Born: " + crew[i].getDateOfBirth() + "\n Role: " + crew[i].getRole() + "\n Experience: " \
                       + std::to_string(crew[i].getYearsOfExperience()) + " years"\
                       + "\n Locations: " + locationString));

            }
        }

    }

    void ProjectDetails::filterCrewByRole(std::string role){

        ui->lstCrew->clear();

        std::vector <FilmCrew> crew = openProj->getCrew();

        for(unsigned int i = 0; i < crew.size(); ++i){
            if(crew[i].getRole() == role){

                std::string locationString = "";

                for(unsigned int j = 0; j < crew[i].getLocationsWorkedAt().size(); ++j){

                    locationString += crew[i].getLocationsWorkedAt()[j];
                    if(j != crew[i].getLocationsWorkedAt().size() - 1){
                        locationString += ", ";
                    }

                }

                ui->lstCrew->addItem(QString::fromStdString(\
                       crew[i].getTitle() + " " + crew[i].getName() + ": \n ID: " + crew[i].getIdNumber() \
                       + "\n Born: " + crew[i].getDateOfBirth() + "\n Role: " + crew[i].getRole() + "\n Experience: " \
                       + std::to_string(crew[i].getYearsOfExperience()) + " years"\
                       + "\n Locations: " + locationString));

            }
        }

    }

    void ProjectDetails::handleProjectWindowMaterialChange(){

        ui->sbPackagingHeight->setMinimum(0);
        ui->sbPackagingWidth->setMinimum(0);
        ui->sbPackagingDepth->setMinimum(0);

        ui->txtMaterialTitle->clear();
        ui->txtMaterialIDNum->clear();
        ui->cbVFormat->setCurrentIndex(0);
        ui->cbAFormat->setCurrentIndex(0);
        ui->cbMaterialLanguage->setCurrentIndex(0);
        ui->sbMaterialRuntime->setValue(0);
        ui->sbMaterialPrice->setValue(0);
        ui->lstSubLang->clear();
        ui->txtFirstSideContent->clear();
        ui->txtSecondSideContent->clear();
        ui->sbFrameHorizontal->setValue(0);
        ui->sbFrameVertical->setValue(0);
        ui->txtFrameDescription->clear();
        ui->cbPackagingMaterial->clear();
        ui->sbPackagingHeight->setValue(0);
        ui->sbPackagingWidth->setValue(0);
        ui->sbPackagingDepth->setValue(0);
        ui->lstBonusFeatures->clear();
        ui->lstExtraLanguageTracks->clear();
        ui->lstExtraSubtitleTracks->clear();
        ui->sbComboSingleDVD->setValue(0);
        ui->sbComboDoubleDVD->setValue(0);

        ui->sbMaterialRuntime->setDisabled(false);

        ui->lblVFormat->setVisible(true);
        ui->cbVFormat->setDisabled(false);
        ui->cbVFormat->setVisible(true);

        ui->lblAFormat->setVisible(true);
        ui->cbAFormat->setDisabled(false);
        ui->cbAFormat->setVisible(true);

        ui->lblMaterialLanguage->setVisible(true);
        ui->cbMaterialLanguage->setDisabled(false);
        ui->cbMaterialLanguage->setVisible(true);

        ui->lblMaterialRuntime->setDisabled(false);

        ui->lblMaterialSubLang->setVisible(true);
        ui->cbSubLang->setDisabled(false);
        ui->cbSubLang->setVisible(true);
        ui->cmdSubLangAdd->setDisabled(false);
        ui->cmdSubLangAdd->setVisible(true);
        ui->cmdSubLangDel->setDisabled(false);
        ui->cmdSubLangDel->setVisible(true);
        ui->lstSubLang->setVisible(true);

        ui->lblMaterialFrameAspect->setVisible(true);
        ui->lblMaterialFrameDescription->setVisible(true);
        ui->txtFrameDescription->setDisabled(false);
        ui->txtFrameDescription->setVisible(true);
        ui->lblMaterialFrameHorizontal->setVisible(true);
        ui->sbFrameHorizontal->setDisabled(false);
        ui->sbFrameHorizontal->setVisible(true);
        ui->lblMaterialFrameVertical->setVisible(true);
        ui->sbFrameVertical->setDisabled(false);
        ui->sbFrameVertical->setVisible(true);

        ui->lblComboSingleDVD->setVisible(false);
        ui->sbComboSingleDVD->setDisabled(true);
        ui->sbComboSingleDVD->setVisible(false);

        ui->lblComboDoubleDVD->setVisible(false);
        ui->sbComboDoubleDVD->setDisabled(true);
        ui->sbComboDoubleDVD->setVisible(false);

        ui->cbPackagingMaterial->addItem("Plastic");

        ui->lblMaterialAnswer->setText("Not Created");
        ui->lblMaterialAnswer->setStyleSheet("color: #D81E5B");
        ui->cmdMaterialDel->setVisible(false);
        ui->cmdMaterialClear->setText("Clear");
        ui->cmdMaterialCreate->setText("Create");

        std::string material = ui->cbMaterialType->currentText().toStdString();

        if(material == "DVD Single Sided"){

            if(openProj->getSingleDVD().getTitle() != ""){

                ui->lblMaterialAnswer->setText("Created");
                ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
                ui->cmdMaterialDel->setVisible(true);
                ui->cmdMaterialClear->setText("Clear Changes");
                ui->cmdMaterialCreate->setText("Apply Changes");

                ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getSingleDVD().getTitle()));
                ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getSingleDVD().getIdNumber()));
                ui->sbMaterialRuntime->setValue(openProj->getSingleDVD().getRunTime());
                ui->sbMaterialPrice->setValue(openProj->getSingleDVD().getPrice());

                if(openProj->getSingleDVD().getVFormat() == "mp4"){
                    ui->cbVFormat->setCurrentIndex(0);
                }
                else if(openProj->getSingleDVD().getVFormat() == "flv"){
                    ui->cbVFormat->setCurrentIndex(1);
                }
                else if(openProj->getSingleDVD().getVFormat() == "avi"){
                    ui->cbVFormat->setCurrentIndex(2);
                }
                else if(openProj->getSingleDVD().getVFormat() == "mov"){
                    ui->cbVFormat->setCurrentIndex(3);
                }
                else if(openProj->getSingleDVD().getVFormat() == "wmv"){
                    ui->cbVFormat->setCurrentIndex(4);
                }
                else if(openProj->getSingleDVD().getVFormat() == "other"){
                    ui->cbVFormat->setCurrentIndex(5);
                }

                if(openProj->getSingleDVD().getAFormat() == "Dolby"){
                    ui->cbAFormat->setCurrentIndex(0);
                }
                else if(openProj->getSingleDVD().getAFormat() == "Dolby digital"){
                    ui->cbAFormat->setCurrentIndex(1);
                }
                else if(openProj->getSingleDVD().getAFormat() == "MPEG-1"){
                    ui->cbAFormat->setCurrentIndex(2);
                }
                else if(openProj->getSingleDVD().getAFormat() == "PCM"){
                    ui->cbAFormat->setCurrentIndex(3);
                }
                else if(openProj->getSingleDVD().getAFormat() == "DTS"){
                    ui->cbAFormat->setCurrentIndex(4);
                }

                if(openProj->getSingleDVD().getLanguage() == "English"){
                    ui->cbMaterialLanguage->setCurrentIndex(0);
                }
                else if(openProj->getSingleDVD().getLanguage() == "French"){
                    ui->cbMaterialLanguage->setCurrentIndex(1);
                }
                else if(openProj->getSingleDVD().getLanguage() == "German"){
                    ui->cbMaterialLanguage->setCurrentIndex(2);
                }
                else if(openProj->getSingleDVD().getLanguage() == "Spanish"){
                    ui->cbMaterialLanguage->setCurrentIndex(3);
                }
                else if(openProj->getSingleDVD().getLanguage() == "Mandarin"){
                    ui->cbMaterialLanguage->setCurrentIndex(4);
                }
                else if(openProj->getSingleDVD().getLanguage() == "Other"){
                    ui->cbMaterialLanguage->setCurrentIndex(5);
                }

                ui->sbFrameHorizontal->setValue(openProj->getSingleDVD().getFrame().getHorizontalRatio());
                ui->sbFrameVertical->setValue(openProj->getSingleDVD().getFrame().getVerticalRatio());
                ui->txtFrameDescription->setText(QString::fromStdString(openProj->getSingleDVD().getFrame().getRatioDescription()));

                ui->cbPackagingMaterial->setCurrentIndex(0);
                ui->sbPackagingHeight->setValue(openProj->getSingleDVD().getPackage().getHeight());
                ui->sbPackagingWidth->setValue(openProj->getSingleDVD().getPackage().getWidth());
                ui->sbPackagingDepth->setValue(openProj->getSingleDVD().getPackage().getDepth());

                ui->txtFirstSideContent->setText(QString::fromStdString(openProj->getSingleDVD().getFirstSideContent()));

                for(unsigned int i = 0; i < openProj->getSingleDVD().getSubTitleLanguages().size(); ++i){
                    ui->lstSubLang->addItem(QString::fromStdString(openProj->getSingleDVD().getSubTitleLanguages()[i]));
                }

                for(unsigned int j = 0; j < openProj->getSingleDVD().getExtraLanguageTracks().size(); ++j){
                    ui->lstExtraLanguageTracks->addItem(QString::fromStdString(openProj->getSingleDVD().getExtraLanguageTracks()[j]));
                }

                for(unsigned int k = 0; k < openProj->getSingleDVD().getExtraSubtitleTracks().size(); ++k){
                    ui->lstExtraSubtitleTracks->addItem(QString::fromStdString(openProj->getSingleDVD().getExtraSubtitleTracks()[k]));
                }

                for(unsigned int l = 0; l < openProj->getSingleDVD().getBonusFeatures().size(); ++l){
                    ui->lstBonusFeatures->addItem(QString::fromStdString(openProj->getSingleDVD().getBonusFeatures()[l]));
                }

            }

            ui->lblFirstSideContent->setVisible(true);
            ui->txtFirstSideContent->setDisabled(false);
            ui->txtFirstSideContent->setVisible(true);

            ui->lblSecondSideContent->setVisible(false);
            ui->txtSecondSideContent->setDisabled(true);
            ui->txtSecondSideContent->setVisible(false);

            ui->lblExtraLanguageTracks->setVisible(true);
            ui->cbExtraLanguageTracks->setVisible(true);
            ui->cmdExtraLanguageTracksAdd->setDisabled(false);
            ui->cmdExtraLanguageTracksAdd->setVisible(true);
            ui->cmdExtraLanguageTracksDel->setDisabled(false);
            ui->cmdExtraLanguageTracksDel->setVisible(true);
            ui->lstExtraLanguageTracks->setVisible(true);

            ui->lblExtraSubtitleTracks->setVisible(true);
            ui->cbExtraSubtitleTracks->setVisible(true);
            ui->cmdExtraSubtitleTracksAdd->setDisabled(false);
            ui->cmdExtraSubtitleTracksAdd->setVisible(true);
            ui->cmdExtraSubtitleTracksDel->setDisabled(false);
            ui->cmdExtraSubtitleTracksDel->setVisible(true);
            ui->lstExtraSubtitleTracks->setVisible(true);

            ui->lblBonusFeatures->setVisible(true);
            ui->txtBonusFeatures->setVisible(true);
            ui->cmdBonusFeaturesAdd->setDisabled(false);
            ui->cmdBonusFeaturesAdd->setVisible(true);
            ui->cmdBonusFeaturesDel->setDisabled(false);
            ui->cmdBonusFeaturesDel->setVisible(true);
            ui->lstBonusFeatures->setVisible(true);

        }
        else if(material == "DVD Double Sided"){

            if(openProj->getTwoDVD().getTitle() != ""){

                ui->lblMaterialAnswer->setText("Created");
                ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
                ui->cmdMaterialDel->setVisible(true);
                ui->cmdMaterialClear->setText("Clear Changes");
                ui->cmdMaterialCreate->setText("Apply Changes");

                ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getTwoDVD().getTitle()));
                ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getTwoDVD().getIdNumber()));
                ui->sbMaterialRuntime->setValue(openProj->getTwoDVD().getRunTime());
                ui->sbMaterialPrice->setValue(openProj->getTwoDVD().getPrice());

                if(openProj->getTwoDVD().getVFormat() == "mp4"){
                    ui->cbVFormat->setCurrentIndex(0);
                }
                else if(openProj->getTwoDVD().getVFormat() == "flv"){
                    ui->cbVFormat->setCurrentIndex(1);
                }
                else if(openProj->getTwoDVD().getVFormat() == "avi"){
                    ui->cbVFormat->setCurrentIndex(2);
                }
                else if(openProj->getTwoDVD().getVFormat() == "mov"){
                    ui->cbVFormat->setCurrentIndex(3);
                }
                else if(openProj->getTwoDVD().getVFormat() == "wmv"){
                    ui->cbVFormat->setCurrentIndex(4);
                }
                else if(openProj->getTwoDVD().getVFormat() == "other"){
                    ui->cbVFormat->setCurrentIndex(5);
                }

                if(openProj->getTwoDVD().getAFormat() == "Dolby"){
                    ui->cbAFormat->setCurrentIndex(0);
                }
                else if(openProj->getTwoDVD().getAFormat() == "Dolby digital"){
                    ui->cbAFormat->setCurrentIndex(1);
                }
                else if(openProj->getTwoDVD().getAFormat() == "MPEG-1"){
                    ui->cbAFormat->setCurrentIndex(2);
                }
                else if(openProj->getTwoDVD().getAFormat() == "PCM"){
                    ui->cbAFormat->setCurrentIndex(3);
                }
                else if(openProj->getTwoDVD().getAFormat() == "DTS"){
                    ui->cbAFormat->setCurrentIndex(4);
                }

                if(openProj->getTwoDVD().getLanguage() == "English"){
                    ui->cbMaterialLanguage->setCurrentIndex(0);
                }
                else if(openProj->getTwoDVD().getLanguage() == "French"){
                    ui->cbMaterialLanguage->setCurrentIndex(1);
                }
                else if(openProj->getTwoDVD().getLanguage() == "German"){
                    ui->cbMaterialLanguage->setCurrentIndex(2);
                }
                else if(openProj->getTwoDVD().getLanguage() == "Spanish"){
                    ui->cbMaterialLanguage->setCurrentIndex(3);
                }
                else if(openProj->getTwoDVD().getLanguage() == "Mandarin"){
                    ui->cbMaterialLanguage->setCurrentIndex(4);
                }
                else if(openProj->getTwoDVD().getLanguage() == "Other"){
                    ui->cbMaterialLanguage->setCurrentIndex(5);
                }

                ui->sbFrameHorizontal->setValue(openProj->getTwoDVD().getFrame().getHorizontalRatio());
                ui->sbFrameVertical->setValue(openProj->getTwoDVD().getFrame().getVerticalRatio());
                ui->txtFrameDescription->setText(QString::fromStdString(openProj->getTwoDVD().getFrame().getRatioDescription()));

                ui->cbPackagingMaterial->setCurrentIndex(0);
                ui->sbPackagingHeight->setValue(openProj->getTwoDVD().getPackage().getHeight());
                ui->sbPackagingWidth->setValue(openProj->getTwoDVD().getPackage().getWidth());
                ui->sbPackagingDepth->setValue(openProj->getTwoDVD().getPackage().getDepth());

                ui->txtFirstSideContent->setText(QString::fromStdString(openProj->getTwoDVD().getFirstSideContent()));
                ui->txtSecondSideContent->setText(QString::fromStdString(openProj->getTwoDVD().getSecondSideContent()));


                for(unsigned int i = 0; i < openProj->getTwoDVD().getSubTitleLanguages().size(); ++i){
                    ui->lstSubLang->addItem(QString::fromStdString(openProj->getTwoDVD().getSubTitleLanguages()[i]));
                }

                for(unsigned int j = 0; j < openProj->getTwoDVD().getExtraLanguageTracks().size(); ++j){
                    ui->lstExtraLanguageTracks->addItem(QString::fromStdString(openProj->getTwoDVD().getExtraLanguageTracks()[j]));
                }

                for(unsigned int k = 0; k < openProj->getTwoDVD().getExtraSubtitleTracks().size(); ++k){
                    ui->lstExtraSubtitleTracks->addItem(QString::fromStdString(openProj->getTwoDVD().getExtraSubtitleTracks()[k]));
                }

                for(unsigned int l = 0; l < openProj->getTwoDVD().getBonusFeatures().size(); ++l){
                    ui->lstBonusFeatures->addItem(QString::fromStdString(openProj->getTwoDVD().getBonusFeatures()[l]));
                }

            }

            ui->lblFirstSideContent->setVisible(true);
            ui->txtFirstSideContent->setDisabled(false);
            ui->txtFirstSideContent->setVisible(true);

            ui->lblSecondSideContent->setVisible(true);
            ui->txtSecondSideContent->setDisabled(false);
            ui->txtSecondSideContent->setVisible(true);

            ui->lblExtraLanguageTracks->setVisible(true);
            ui->cbExtraLanguageTracks->setVisible(true);
            ui->cmdExtraLanguageTracksAdd->setDisabled(false);
            ui->cmdExtraLanguageTracksAdd->setVisible(true);
            ui->cmdExtraLanguageTracksDel->setDisabled(false);
            ui->cmdExtraLanguageTracksDel->setVisible(true);
            ui->lstExtraLanguageTracks->setVisible(true);

            ui->lblExtraSubtitleTracks->setVisible(true);
            ui->cbExtraSubtitleTracks->setVisible(true);
            ui->cmdExtraSubtitleTracksAdd->setDisabled(false);
            ui->cmdExtraSubtitleTracksAdd->setVisible(true);
            ui->cmdExtraSubtitleTracksDel->setDisabled(false);
            ui->cmdExtraSubtitleTracksDel->setVisible(true);
            ui->lstExtraSubtitleTracks->setVisible(true);

            ui->lblBonusFeatures->setVisible(true);
            ui->txtBonusFeatures->setVisible(true);
            ui->cmdBonusFeaturesAdd->setDisabled(false);
            ui->cmdBonusFeaturesAdd->setVisible(true);
            ui->cmdBonusFeaturesDel->setDisabled(false);
            ui->cmdBonusFeaturesDel->setVisible(true);
            ui->lstBonusFeatures->setVisible(true);

        }
        else if(material == "Blu Ray"){

            if(openProj->getBluRay().getTitle() != ""){

                ui->lblMaterialAnswer->setText("Created");
                ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
                ui->cmdMaterialDel->setVisible(true);
                ui->cmdMaterialClear->setText("Clear Changes");
                ui->cmdMaterialCreate->setText("Apply Changes");

                ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getBluRay().getTitle()));
                ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getBluRay().getIdNumber()));
                ui->sbMaterialRuntime->setValue(openProj->getBluRay().getRunTime());
                ui->sbMaterialPrice->setValue(openProj->getBluRay().getPrice());

                if(openProj->getBluRay().getVFormat() == "mp4"){
                    ui->cbVFormat->setCurrentIndex(0);
                }
                else if(openProj->getBluRay().getVFormat() == "flv"){
                    ui->cbVFormat->setCurrentIndex(1);
                }
                else if(openProj->getBluRay().getVFormat() == "avi"){
                    ui->cbVFormat->setCurrentIndex(2);
                }
                else if(openProj->getBluRay().getVFormat() == "mov"){
                    ui->cbVFormat->setCurrentIndex(3);
                }
                else if(openProj->getBluRay().getVFormat() == "wmv"){
                    ui->cbVFormat->setCurrentIndex(4);
                }
                else if(openProj->getBluRay().getVFormat() == "other"){
                    ui->cbVFormat->setCurrentIndex(5);
                }

                if(openProj->getBluRay().getAFormat() == "Dolby"){
                    ui->cbAFormat->setCurrentIndex(0);
                }
                else if(openProj->getBluRay().getAFormat() == "Dolby digital"){
                    ui->cbAFormat->setCurrentIndex(1);
                }
                else if(openProj->getBluRay().getAFormat() == "MPEG-1"){
                    ui->cbAFormat->setCurrentIndex(2);
                }
                else if(openProj->getBluRay().getAFormat() == "PCM"){
                    ui->cbAFormat->setCurrentIndex(3);
                }
                else if(openProj->getBluRay().getAFormat() == "DTS"){
                    ui->cbAFormat->setCurrentIndex(4);
                }

                if(openProj->getBluRay().getLanguage() == "English"){
                    ui->cbMaterialLanguage->setCurrentIndex(0);
                }
                else if(openProj->getBluRay().getLanguage() == "French"){
                    ui->cbMaterialLanguage->setCurrentIndex(1);
                }
                else if(openProj->getBluRay().getLanguage() == "German"){
                    ui->cbMaterialLanguage->setCurrentIndex(2);
                }
                else if(openProj->getBluRay().getLanguage() == "Spanish"){
                    ui->cbMaterialLanguage->setCurrentIndex(3);
                }
                else if(openProj->getBluRay().getLanguage() == "Mandarin"){
                    ui->cbMaterialLanguage->setCurrentIndex(4);
                }
                else if(openProj->getBluRay().getLanguage() == "Other"){
                    ui->cbMaterialLanguage->setCurrentIndex(5);
                }

                ui->sbFrameHorizontal->setValue(openProj->getBluRay().getFrame().getHorizontalRatio());
                ui->sbFrameVertical->setValue(openProj->getBluRay().getFrame().getVerticalRatio());
                ui->txtFrameDescription->setText(QString::fromStdString(openProj->getBluRay().getFrame().getRatioDescription()));

                ui->cbPackagingMaterial->setCurrentIndex(0);
                ui->sbPackagingHeight->setValue(openProj->getBluRay().getPackage().getHeight());
                ui->sbPackagingWidth->setValue(openProj->getBluRay().getPackage().getWidth());
                ui->sbPackagingDepth->setValue(openProj->getBluRay().getPackage().getDepth());

                for(unsigned int i = 0; i < openProj->getBluRay().getSubTitleLanguages().size(); ++i){
                    ui->lstSubLang->addItem(QString::fromStdString(openProj->getBluRay().getSubTitleLanguages()[i]));
                }

                for(unsigned int j = 0; j < openProj->getBluRay().getExtraLanguageTracks().size(); ++j){
                    ui->lstExtraLanguageTracks->addItem(QString::fromStdString(openProj->getBluRay().getExtraLanguageTracks()[j]));
                }

                for(unsigned int k = 0; k < openProj->getBluRay().getExtraSubtitleTracks().size(); ++k){
                    ui->lstExtraSubtitleTracks->addItem(QString::fromStdString(openProj->getBluRay().getExtraSubtitleTracks()[k]));
                }

                for(unsigned int l = 0; l < openProj->getBluRay().getBonusTracks().size(); ++l){
                    ui->lstBonusFeatures->addItem(QString::fromStdString(openProj->getBluRay().getBonusTracks()[l]));
                }

            }

            ui->lblFirstSideContent->setVisible(false);
            ui->txtFirstSideContent->setDisabled(true);
            ui->txtFirstSideContent->setVisible(false);

            ui->lblSecondSideContent->setVisible(false);
            ui->txtSecondSideContent->setDisabled(true);
            ui->txtSecondSideContent->setVisible(false);

            ui->lblExtraLanguageTracks->setVisible(true);
            ui->cbExtraLanguageTracks->setVisible(true);
            ui->cmdExtraLanguageTracksAdd->setDisabled(false);
            ui->cmdExtraLanguageTracksAdd->setVisible(true);
            ui->cmdExtraLanguageTracksDel->setDisabled(false);
            ui->cmdExtraLanguageTracksDel->setVisible(true);
            ui->lstExtraLanguageTracks->setVisible(true);

            ui->lblExtraSubtitleTracks->setVisible(true);
            ui->cbExtraSubtitleTracks->setVisible(true);
            ui->cmdExtraSubtitleTracksAdd->setDisabled(false);
            ui->cmdExtraSubtitleTracksAdd->setVisible(true);
            ui->cmdExtraSubtitleTracksDel->setDisabled(false);
            ui->cmdExtraSubtitleTracksDel->setVisible(true);
            ui->lstExtraSubtitleTracks->setVisible(true);

            ui->lblBonusFeatures->setVisible(true);
            ui->txtBonusFeatures->setVisible(true);
            ui->cmdBonusFeaturesAdd->setDisabled(false);
            ui->cmdBonusFeaturesAdd->setVisible(true);
            ui->cmdBonusFeaturesDel->setDisabled(false);
            ui->cmdBonusFeaturesDel->setVisible(true);
            ui->lstBonusFeatures->setVisible(true);

        }
        else if(material == "VHS"){

            ui->cbPackagingMaterial->addItem("Cardboard");

            if(openProj->getVhs().getTitle() != ""){

                ui->lblMaterialAnswer->setText("Created");
                ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
                ui->cmdMaterialDel->setVisible(true);
                ui->cmdMaterialClear->setText("Clear Changes");
                ui->cmdMaterialCreate->setText("Apply Changes");

                ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getVhs().getTitle()));
                ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getVhs().getIdNumber()));
                ui->sbMaterialRuntime->setValue(openProj->getVhs().getRunTime());
                ui->sbMaterialPrice->setValue(openProj->getVhs().getPrice());

                if(openProj->getVhs().getVFormat() == "mp4"){
                    ui->cbVFormat->setCurrentIndex(0);
                }
                else if(openProj->getVhs().getVFormat() == "flv"){
                    ui->cbVFormat->setCurrentIndex(1);
                }
                else if(openProj->getVhs().getVFormat() == "avi"){
                    ui->cbVFormat->setCurrentIndex(2);
                }
                else if(openProj->getVhs().getVFormat() == "mov"){
                    ui->cbVFormat->setCurrentIndex(3);
                }
                else if(openProj->getVhs().getVFormat() == "wmv"){
                    ui->cbVFormat->setCurrentIndex(4);
                }
                else if(openProj->getVhs().getVFormat() == "other"){
                    ui->cbVFormat->setCurrentIndex(5);
                }

                if(openProj->getVhs().getAFormat() == "Dolby"){
                    ui->cbAFormat->setCurrentIndex(0);
                }
                else if(openProj->getVhs().getAFormat() == "Dolby digital"){
                    ui->cbAFormat->setCurrentIndex(1);
                }
                else if(openProj->getVhs().getAFormat() == "MPEG-1"){
                    ui->cbAFormat->setCurrentIndex(2);
                }
                else if(openProj->getVhs().getAFormat() == "PCM"){
                    ui->cbAFormat->setCurrentIndex(3);
                }
                else if(openProj->getVhs().getAFormat() == "DTS"){
                    ui->cbAFormat->setCurrentIndex(4);
                }

                if(openProj->getVhs().getLanguage() == "English"){
                    ui->cbMaterialLanguage->setCurrentIndex(0);
                }
                else if(openProj->getVhs().getLanguage() == "French"){
                    ui->cbMaterialLanguage->setCurrentIndex(1);
                }
                else if(openProj->getVhs().getLanguage() == "German"){
                    ui->cbMaterialLanguage->setCurrentIndex(2);
                }
                else if(openProj->getVhs().getLanguage() == "Spanish"){
                    ui->cbMaterialLanguage->setCurrentIndex(3);
                }
                else if(openProj->getVhs().getLanguage() == "Mandarin"){
                    ui->cbMaterialLanguage->setCurrentIndex(4);
                }
                else if(openProj->getVhs().getLanguage() == "Other"){
                    ui->cbMaterialLanguage->setCurrentIndex(5);
                }

                ui->sbFrameHorizontal->setValue(openProj->getVhs().getFrame().getHorizontalRatio());
                ui->sbFrameVertical->setValue(openProj->getVhs().getFrame().getVerticalRatio());
                ui->txtFrameDescription->setText(QString::fromStdString(openProj->getVhs().getFrame().getRatioDescription()));

                if(openProj->getVhs().getPackage().getMaterial() == "Plastic"){
                    ui->cbPackagingMaterial->setCurrentIndex(0);
                }else if(openProj->getVhs().getPackage().getMaterial() == "Cardboard"){
                    ui->cbPackagingMaterial->setCurrentIndex(1);
                }

                ui->sbPackagingHeight->setValue(openProj->getVhs().getPackage().getHeight());
                ui->sbPackagingWidth->setValue(openProj->getVhs().getPackage().getWidth());
                ui->sbPackagingDepth->setValue(openProj->getVhs().getPackage().getDepth());

                for(unsigned int i = 0; i < openProj->getVhs().getSubTitleLanguages().size(); ++i){
                    ui->lstSubLang->addItem(QString::fromStdString(openProj->getVhs().getSubTitleLanguages()[i]));
                }

            }

            ui->lblFirstSideContent->setVisible(false);
            ui->txtFirstSideContent->setDisabled(true);
            ui->txtFirstSideContent->setVisible(false);

            ui->lblSecondSideContent->setVisible(false);
            ui->txtSecondSideContent->setDisabled(true);
            ui->txtSecondSideContent->setVisible(false);

            ui->lblExtraLanguageTracks->setVisible(false);
            ui->cbExtraLanguageTracks->setVisible(false);
            ui->cmdExtraLanguageTracksAdd->setDisabled(true);
            ui->cmdExtraLanguageTracksAdd->setVisible(false);
            ui->cmdExtraLanguageTracksDel->setDisabled(true);
            ui->cmdExtraLanguageTracksDel->setVisible(false);
            ui->lstExtraLanguageTracks->setVisible(false);

            ui->lblExtraSubtitleTracks->setVisible(false);
            ui->cbExtraSubtitleTracks->setVisible(false);
            ui->cmdExtraSubtitleTracksAdd->setDisabled(true);
            ui->cmdExtraSubtitleTracksAdd->setVisible(false);
            ui->cmdExtraSubtitleTracksDel->setDisabled(true);
            ui->cmdExtraSubtitleTracksDel->setVisible(false);
            ui->lstExtraSubtitleTracks->setVisible(false);

            ui->lblBonusFeatures->setVisible(false);
            ui->txtBonusFeatures->setVisible(false);
            ui->cmdBonusFeaturesAdd->setDisabled(true);
            ui->cmdBonusFeaturesAdd->setVisible(false);
            ui->cmdBonusFeaturesDel->setDisabled(true);
            ui->cmdBonusFeaturesDel->setVisible(false);
            ui->lstBonusFeatures->setVisible(false);

        }
        else if(material == "Combo Box"){

            ui->cbPackagingMaterial->clear();
            ui->cbPackagingMaterial->addItem("Cardboard");

            ui->sbMaterialRuntime->setDisabled(true);

            if(openProj->getComboBox().getTitle() != ""){

                ui->lblMaterialAnswer->setText("Created");
                ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
                ui->cmdMaterialDel->setVisible(true);
                ui->cmdMaterialClear->setText("Clear Changes");
                ui->cmdMaterialCreate->setText("Apply Changes");

                ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getComboBox().getIdNumber()));
                ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getComboBox().getTitle()));
                ui->sbMaterialPrice->setValue(openProj->getComboBox().getPrice());
                ui->sbComboSingleDVD->setValue(openProj->getComboBox().getNumberOfDVDs());
                ui->sbComboDoubleDVD->setValue(openProj->getComboBox().getNumberofDoubleDVDs());
                ui->sbPackagingHeight->setValue(openProj->getComboBox().getPackaging().getHeight());
                ui->sbPackagingWidth->setValue(openProj->getComboBox().getPackaging().getWidth());
                ui->sbPackagingDepth->setValue(openProj->getComboBox().getPackaging().getDepth());

                updateComboRuntime();

            }

            ui->lblComboSingleDVD->setVisible(true);
            ui->sbComboSingleDVD->setDisabled(false);
            ui->sbComboSingleDVD->setVisible(true);

            ui->lblComboDoubleDVD->setVisible(true);
            ui->sbComboDoubleDVD->setDisabled(false);
            ui->sbComboDoubleDVD->setVisible(true);

            ui->lblVFormat->setVisible(false);
            ui->cbVFormat->setDisabled(true);
            ui->cbVFormat->setVisible(false);

            ui->lblAFormat->setVisible(false);
            ui->cbAFormat->setDisabled(true);
            ui->cbAFormat->setVisible(false);

            ui->lblMaterialLanguage->setVisible(false);
            ui->cbMaterialLanguage->setDisabled(true);
            ui->cbMaterialLanguage->setVisible(false);

            ui->lblMaterialRuntime->setDisabled(true);

            ui->lblMaterialSubLang->setVisible(false);
            ui->cbSubLang->setDisabled(true);
            ui->cbSubLang->setVisible(false);
            ui->cmdSubLangAdd->setDisabled(true);
            ui->cmdSubLangAdd->setVisible(false);
            ui->cmdSubLangDel->setDisabled(true);
            ui->cmdSubLangDel->setVisible(false);
            ui->lstSubLang->setVisible(false);

            ui->lblMaterialFrameAspect->setVisible(false);
            ui->lblMaterialFrameDescription->setVisible(false);
            ui->txtFrameDescription->setDisabled(true);
            ui->txtFrameDescription->setVisible(false);
            ui->lblMaterialFrameHorizontal->setVisible(false);
            ui->sbFrameHorizontal->setDisabled(true);
            ui->sbFrameHorizontal->setVisible(false);
            ui->lblMaterialFrameVertical->setVisible(false);
            ui->sbFrameVertical->setDisabled(true);
            ui->sbFrameVertical->setVisible(false);

            ui->lblFirstSideContent->setVisible(false);
            ui->txtFirstSideContent->setDisabled(true);
            ui->txtFirstSideContent->setVisible(false);

            ui->lblSecondSideContent->setVisible(false);
            ui->txtSecondSideContent->setDisabled(true);
            ui->txtSecondSideContent->setVisible(false);

            ui->lblExtraLanguageTracks->setVisible(false);
            ui->cbExtraLanguageTracks->setVisible(false);
            ui->cmdExtraLanguageTracksAdd->setDisabled(true);
            ui->cmdExtraLanguageTracksAdd->setVisible(false);
            ui->cmdExtraLanguageTracksDel->setDisabled(true);
            ui->cmdExtraLanguageTracksDel->setVisible(false);
            ui->lstExtraLanguageTracks->setVisible(false);

            ui->lblExtraSubtitleTracks->setVisible(false);
            ui->cbExtraSubtitleTracks->setVisible(false);
            ui->cmdExtraSubtitleTracksAdd->setDisabled(true);
            ui->cmdExtraSubtitleTracksAdd->setVisible(false);
            ui->cmdExtraSubtitleTracksDel->setDisabled(true);
            ui->cmdExtraSubtitleTracksDel->setVisible(false);
            ui->lstExtraSubtitleTracks->setVisible(false);

            ui->lblBonusFeatures->setVisible(false);
            ui->txtBonusFeatures->setVisible(false);
            ui->cmdBonusFeaturesAdd->setDisabled(true);
            ui->cmdBonusFeaturesAdd->setVisible(false);
            ui->cmdBonusFeaturesDel->setDisabled(true);
            ui->cmdBonusFeaturesDel->setVisible(false);
            ui->lstBonusFeatures->setVisible(false);

        }

        ui->lblMaterialIDNum->setStyleSheet("color: #78CAD2");
        ui->lblMaterialTitle->setStyleSheet("color: #78CAD2");
        ui->lblBonusFeatures->setStyleSheet("color: #78CAD2");
        ui->lblMaterialSubLang->setStyleSheet("color: #78CAD2");
        ui->lblFirstSideContent->setStyleSheet("color: #78CAD2");
        ui->lblSecondSideContent->setStyleSheet("color: #78CAD2");
        ui->lblExtraLanguageTracks->setStyleSheet("color: #78CAD2");
        ui->lblExtraSubtitleTracks->setStyleSheet("color: #78CAD2");
        ui->lblBonusFeatures->setStyleSheet("color: #78CAD2");
        ui->lblMaterialFrameAspect->setStyleSheet("color: #78CAD2");
        ui->lblMaterialFrameDescription->setStyleSheet("color: #78CAD2");
        ui->lblMaterialPackage->setStyleSheet("color: #78CAD2");
        ui->lblMaterialPackageMaterial->setStyleSheet("color: #78CAD2");
        ui->lblMaterialPrice->setStyleSheet("color: #78CAD2");
        ui->lblMaterialRuntime->setStyleSheet("color: #78CAD2");
        ui->lblMaterialPackageHeight->setStyleSheet("color: #78CAD2");
        ui->lblMaterialPackageWidth->setStyleSheet("color: #78CAD2");
        ui->lblMaterialPackageDepth->setStyleSheet("color: #78CAD2");
        ui->lblMaterialFrameHorizontal->setStyleSheet("color: #78CAD2");
        ui->lblMaterialFrameVertical->setStyleSheet("color: #78CAD2");
        ui->lblComboSingleDVD->setStyleSheet("color: #78CAD2");
        ui->lblComboDoubleDVD->setStyleSheet("color: #78CAD2");

    }

    void ProjectDetails::handleProjectWindowMaterialDelete(){

        std::string material = ui->cbMaterialType->currentText().toStdString();

        if(material == "DVD Single Sided"){
            openProj->setSingleDVD(SingleSidedDVD());
        }else if(material == "DVD Double Sided"){
            openProj->setTwoDVD(DoubleSidedDVD());
        }else if(material == "Blu Ray"){
            openProj->setBluRay(BluRay());
        }else if(material == "VHS"){
            openProj->setVhs(VHS());
        }else if(material == "Combo Box"){
            openProj->setComboBox(ComboBox());
        }

        handleProjectWindowMaterialChange();
        //handleCreateProject();
        //handleFilter();

    }

    void ProjectDetails::handleProjectWindowMaterialCreate(){

        bool submit = true;
        std::string materialType = ui->cbMaterialType->currentText().toStdString();

        std::string firstSideContent;
        std::string secondSideContent;
        std::string vformat;
        std::string aformat;
        std::string language;
        int frameHorizontal;
        int frameVertical;
        int runtime;
        int comboNumberSingleDVD;
        int comboNumberDoubleDVD;
        std::string frameDesc;
        std::vector<std::string> subLang;
        std::vector<std::string> extraLanguageTracks;
        std::vector<std::string> extraSubtitleTracks;
        std::vector<std::string> bonusFeatures;

        // Getting data from window
        std::string title = ui->txtMaterialTitle->text().toStdString();
        //std::string id = to_string(projList.getNewMaterialId());
        int price = ui->sbMaterialPrice->value();
        std::string packagingMaterial = ui->cbPackagingMaterial->currentText().toStdString();
        int packagingHeight = ui->sbPackagingHeight->value();
        int packagingWidth = ui->sbPackagingWidth->value();
        int packagingDepth = ui->sbPackagingDepth->value();

        if(materialType != "Combo Box"){

            runtime = ui->sbMaterialRuntime->value();
            vformat = ui->cbVFormat->currentText().toStdString();
            aformat = ui->cbAFormat->currentText().toStdString();
            language = ui->cbMaterialLanguage->currentText().toStdString();
            frameHorizontal = ui->sbFrameHorizontal->value();
            frameVertical = ui->sbFrameVertical->value();
            frameDesc = ui->txtFrameDescription->text().toStdString();

            for(int i = 0; i < ui->lstSubLang->count(); ++i){
                subLang.push_back(ui->lstSubLang->item(i)->text().toStdString());
            }

            if(materialType != "VHS"){

                for(int i = 0; i < ui->lstExtraLanguageTracks->count(); ++i){
                    extraLanguageTracks.push_back(ui->lstExtraLanguageTracks->item(i)->text().toStdString());
                }

                for(int i = 0; i < ui->lstExtraSubtitleTracks->count(); ++i){
                    extraSubtitleTracks.push_back(ui->lstExtraSubtitleTracks->item(i)->text().toStdString());
                }

                for(int i = 0; i < ui->lstBonusFeatures->count(); ++i){
                    bonusFeatures.push_back(ui->lstBonusFeatures->item(i)->text().toStdString());
                }

                if(materialType != "Blu Ray"){
                    firstSideContent = ui->txtFirstSideContent->text().toStdString();
                    if(materialType == "DVD Double Sided"){
                        secondSideContent = ui->txtSecondSideContent->text().toStdString();
                    }
                }
            }
        }else{

            comboNumberSingleDVD = ui->sbComboSingleDVD->value();
            comboNumberDoubleDVD = ui->sbComboDoubleDVD->value();

        }

        // Error checking
        if(title == ""){
            submit = false;
            ui->lblMaterialTitle->setStyleSheet("color: #D81E5B");
        }else{
            ui->lblMaterialTitle->setStyleSheet("color: #78CAD2");
        }

    //    if(id == ""){
    //        submit = false;
    //        ui->lblMaterialIDNum->setStyleSheet("color: #D81E5B");
    //    }else{
    //        ui->lblMaterialIDNum->setStyleSheet("color: #78CAD2");
    //    }

        if(price == 0){
            submit = false;
            ui->lblMaterialPrice->setStyleSheet("color: #D81E5B");
        }else{
            ui->lblMaterialPrice->setStyleSheet("color: #78CAD2");
        }

        if(packagingMaterial == ""){
            submit = false;
            ui->lblMaterialPackageMaterial->setStyleSheet("color: #D81E5B");
        }else{
            ui->lblMaterialPackageMaterial->setStyleSheet("color: #78CAD2");
        }

        if(packagingHeight == 0){
            submit = false;
            ui->lblMaterialPackageHeight->setStyleSheet("color: #D81E5B");
        }else{
            ui->lblMaterialPackageHeight->setStyleSheet("color: #78CAD2");
        }

        if(packagingWidth == 0){
            submit = false;
            ui->lblMaterialPackageWidth->setStyleSheet("color: #D81E5B");
        }else{
            ui->lblMaterialPackageWidth->setStyleSheet("color: #78CAD2");
        }

        if(packagingDepth == 0){
            submit = false;
            ui->lblMaterialPackageDepth->setStyleSheet("color: #D81E5B");
        }else{
            ui->lblMaterialPackageDepth->setStyleSheet("color: #78CAD2");
        }

        if(materialType != "Combo Box"){

            if(runtime == 0){
                submit = false;
                ui->lblMaterialRuntime->setStyleSheet("color: #D81E5B");
            }else{
                ui->lblMaterialRuntime->setStyleSheet("color: #78CAD2");
            }

            if(frameDesc == ""){
                submit = false;
                ui->lblMaterialFrameDescription->setStyleSheet("color: #D81E5B");
            }else{
                ui->lblMaterialFrameDescription->setStyleSheet("color: #78CAD2");
            }

            if(subLang.size() == 0 ||(subLang.size() > 1 && materialType == "VHS")){
                submit = false;
                ui->lblMaterialSubLang->setStyleSheet("color: #D81E5B");
            }else{
                ui->lblMaterialSubLang->setStyleSheet("color: #78CAD2");
            }

            if(frameHorizontal == 0){
                submit = false;
                ui->lblMaterialFrameHorizontal->setStyleSheet("color: #D81E5B");
            }else{
                ui->lblMaterialFrameHorizontal->setStyleSheet("color: #78CAD2");
            }

            if(frameVertical == 0){
                submit = false;
                ui->lblMaterialFrameVertical->setStyleSheet("color: #D81E5B");
            }else{
                ui->lblMaterialFrameVertical->setStyleSheet("color: #78CAD2");
            }

            if(materialType != "VHS"){

                if(extraLanguageTracks.size() == 0){
                    submit = false;
                    ui->lblExtraLanguageTracks->setStyleSheet("color: #D81E5B");
                }else{
                    ui->lblExtraLanguageTracks->setStyleSheet("color: #78CAD2");
                }

                if(extraSubtitleTracks.size() == 0){
                    submit = false;
                    ui->lblExtraSubtitleTracks->setStyleSheet("color: #D81E5B");
                }else{
                    ui->lblExtraSubtitleTracks->setStyleSheet("color: #78CAD2");
                }

                if(bonusFeatures.size() == 0){
                    submit = false;
                    ui->lblBonusFeatures->setStyleSheet("color: #D81E5B");
                }else{
                    ui->lblBonusFeatures->setStyleSheet("color: #78CAD2");
                }

                if(materialType != "Blu Ray"){

                    if(firstSideContent == ""){
                        submit = false;
                        ui->lblFirstSideContent->setStyleSheet("color: #D81E5B");
                    }else{
                        ui->lblFirstSideContent->setStyleSheet("color: #78CAD2");
                    }

                    if(materialType == "DVD Double Sided"){

                        if(secondSideContent == ""){
                            submit = false;
                            ui->lblSecondSideContent->setStyleSheet("color: #D81E5B");
                        }else{
                            ui->lblSecondSideContent->setStyleSheet("color: #78CAD2");
                        }
                    }
                }
            }
        }else{

            if(comboNumberSingleDVD == 0){
                submit = false;
                ui->lblComboSingleDVD->setStyleSheet("color: #D81E5B");
            }else{
                ui->lblComboSingleDVD->setStyleSheet("color: #78CAD2");
            }

            if(comboNumberDoubleDVD == 0){
                submit = false;
                ui->lblComboDoubleDVD->setStyleSheet("color: #D81E5B");
            }else{
                ui->lblComboDoubleDVD->setStyleSheet("color: #78CAD2");
            }

        }

        if(submit == true){

            Packaging package;
            package.setMaterial(packagingMaterial);
            package.setHeight(packagingHeight);
            package.setWidth(packagingWidth);
            package.setDepth(packagingDepth);

            FrameAspect frame;
            if(materialType != "Combo Box"){
                frame.setRatioDescription(frameDesc);
                frame.setHorizontalRatio(frameHorizontal);
                frame.setVerticalRatio(frameVertical);
            }

            if(materialType == "DVD Single Sided"){

                SingleSidedDVD newMaterial;

                //newMaterial.setIdNumber(idNumber);
                newMaterial.setTitle(title);
                newMaterial.setVFormat(vformat);
                newMaterial.setAFormat(aformat);
                newMaterial.setLanguage(language);
                newMaterial.setPrice(price);
                newMaterial.setRunTime(runtime);
                newMaterial.setSubTitleLanguages(subLang);
                newMaterial.setFrame(frame);
                newMaterial.setPackage(package);
                newMaterial.setFirstSideContent(firstSideContent);
                newMaterial.setExtraLanguageTracks(extraLanguageTracks);
                newMaterial.setExtraSubtitleTracks(extraSubtitleTracks);
                newMaterial.setBonusFeatures(bonusFeatures);

                openProj->setSingleDVD(newMaterial);

            }else if(materialType == "DVD Double Sided"){

                DoubleSidedDVD newMaterial;

                //newMaterial.setIdNumber(id);
                newMaterial.setTitle(title);
                newMaterial.setVFormat(vformat);
                newMaterial.setAFormat(aformat);
                newMaterial.setLanguage(language);
                newMaterial.setPrice(price);
                newMaterial.setRunTime(runtime);
                newMaterial.setSubTitleLanguages(subLang);
                newMaterial.setFrame(frame);
                newMaterial.setPackage(package);
                newMaterial.setFirstSideContent(firstSideContent);
                newMaterial.setSecondSideContent(secondSideContent);
                newMaterial.setExtraLanguageTracks(extraLanguageTracks);
                newMaterial.setExtraSubtitleTracks(extraSubtitleTracks);
                newMaterial.setBonusFeatures(bonusFeatures);

                openProj->setTwoDVD(newMaterial);

            }else if(materialType == "Blu Ray"){

                BluRay newMaterial;

                //newMaterial.setIdNumber(id);
                newMaterial.setTitle(title);
                newMaterial.setVFormat(vformat);
                newMaterial.setAFormat(aformat);
                newMaterial.setLanguage(language);
                newMaterial.setPrice(price);
                newMaterial.setRunTime(runtime);
                newMaterial.setSubTitleLanguages(subLang);
                newMaterial.setFrame(frame);
                newMaterial.setPackage(package);
                newMaterial.setExtraLanguageTracks(extraLanguageTracks);
                newMaterial.setExtraSubtitleTracks(extraSubtitleTracks);
                newMaterial.setBonusTracks(bonusFeatures);

                openProj->setBluRay(newMaterial);

            }else if(materialType == "VHS"){

                VHS newMaterial;

                //newMaterial.setIdNumber(id);
                newMaterial.setTitle(title);
                newMaterial.setVFormat(vformat);
                newMaterial.setAFormat(aformat);
                newMaterial.setLanguage(language);
                newMaterial.setPrice(price);
                newMaterial.setRunTime(runtime);
                newMaterial.setSubTitleLanguages(subLang);
                newMaterial.setFrame(frame);
                newMaterial.setPackage(package);

                openProj->setVhs(newMaterial);

            }else if(materialType == "Combo Box"){

                ComboBox newMaterial;

                //newMaterial.setIdNumber(id);
                newMaterial.setTitle(title);
                newMaterial.setPrice(price);
                newMaterial.setPackaging(package);
                newMaterial.setNumberOfDVDs(comboNumberSingleDVD);
                newMaterial.setNumberofDoubleDVDs(comboNumberDoubleDVD);

                openProj->setComboBox(newMaterial);

            }

            handleProjectWindowMaterialChange();
            //handleCreateProject();
            //handleFilter();

        }

    }

    void ProjectDetails::handleProjectWindowSubLangAdd(){

        QString input = ui->cbSubLang->currentText();
        bool addOption = true;

        std::vector<std::string> languages;
        for(int i = 0; i < ui->lstSubLang->count(); ++i){
            languages.push_back(ui->lstSubLang->item(i)->text().toStdString());
        }

        for(unsigned int j = 0; j < languages.size(); ++j){
            if(input.toStdString() == languages[j]){
                addOption = false;
            }
        }

        if(addOption){
            ui->lstSubLang->addItem(input);
        }

        ui->cbSubLang->setCurrentIndex(0);

    }

    void ProjectDetails::handleProjectWindowSubLangDel(){

        QList <QListWidgetItem *> selectedItems = ui->lstSubLang->selectedItems();
        for(int i = 0; i < selectedItems.size(); i++){
            delete ui->lstSubLang->takeItem(ui->lstSubLang->row(selectedItems[i]));
        }

    }

    void ProjectDetails::handleProjectWindowExtraLangAdd(){

        QString input = ui->cbExtraLanguageTracks->currentText();
        bool addOption = true;

        std::vector<std::string> languages;
        for(int i = 0; i < ui->lstExtraLanguageTracks->count(); ++i){
            languages.push_back(ui->lstExtraLanguageTracks->item(i)->text().toStdString());
        }

        for(unsigned int j = 0; j < languages.size(); ++j){
            if(input.toStdString() == languages[j]){
                addOption = false;
            }
        }

        if(addOption){
            ui->lstExtraLanguageTracks->addItem(input);
        }

        ui->cbExtraLanguageTracks->setCurrentIndex(0);

    }

    void ProjectDetails::handleProjectWindowExtraLangDel(){

        QList <QListWidgetItem *> selectedItems = ui->lstExtraLanguageTracks->selectedItems();
        for(int i = 0; i < selectedItems.size(); i++){
            delete ui->lstExtraLanguageTracks->takeItem(ui->lstExtraLanguageTracks->row(selectedItems[i]));
        }

    }

    void ProjectDetails::handleProjectWindowExtraSubLangAdd(){

        QString input = ui->cbExtraSubtitleTracks->currentText();
        bool addOption = true;

        std::vector<std::string> languages;
        for(int i = 0; i < ui->lstExtraSubtitleTracks->count(); ++i){
            languages.push_back(ui->lstExtraSubtitleTracks->item(i)->text().toStdString());
        }

        for(unsigned int j = 0; j < languages.size(); ++j){
            if(input.toStdString() == languages[j]){
                addOption = false;
            }
        }

        if(addOption){
            ui->lstExtraSubtitleTracks->addItem(input);
        }

        ui->cbExtraSubtitleTracks->setCurrentIndex(0);

    }

    void ProjectDetails::handleProjectWindowExtraSubLangDel(){

        QList <QListWidgetItem *> selectedItems = ui->lstExtraSubtitleTracks->selectedItems();
        for(int i = 0; i < selectedItems.size(); i++){
            delete ui->lstExtraSubtitleTracks->takeItem(ui->lstExtraSubtitleTracks->row(selectedItems[i]));
        }

    }

    void ProjectDetails::handleProjectWindowBonusAdd(){

        QString input = ui->txtBonusFeatures->text();
        if(input.toStdString() != ""){
            ui->lstBonusFeatures->addItem(input);
        }
        ui->txtBonusFeatures->clear();

    }

    void ProjectDetails::handleProjectWindowBonusDel(){

        QList <QListWidgetItem *> selectedItems = ui->lstBonusFeatures->selectedItems();
        for(int i = 0; i < selectedItems.size(); i++){
            delete ui->lstBonusFeatures->takeItem(ui->lstBonusFeatures->row(selectedItems[i]));
        }

    }


    void ProjectDetails::updateComboRuntime(){

        int numOfSingle = ui->sbComboSingleDVD->value();
        int numOfDouble = ui->sbComboDoubleDVD->value();
        int runtimeSingle = openProj->getSingleDVD().getRunTime();
        int runtimeDouble = openProj->getTwoDVD().getRunTime();

        ui->sbMaterialRuntime->setValue((numOfSingle * runtimeSingle) + (numOfDouble * runtimeDouble));

    }

    void ProjectDetails::updateMinimumPackage(){

        int numOfSingle = ui->sbComboSingleDVD->value();
        int numOfDouble = ui->sbComboDoubleDVD->value();

        unsigned int minHeight = 0;
        unsigned int minWidth = 0;
        unsigned int minDepth = 0;

        ui->sbPackagingHeight->setMinimum(0);
        ui->sbPackagingWidth->setMinimum(0);
        ui->sbPackagingDepth->setMinimum(0);

        ui->sbPackagingHeight->setValue(0);
        ui->sbPackagingWidth->setValue(0);
        ui->sbPackagingDepth->setValue(0);

        if(ui->sbComboSingleDVD->value() != 0){

            minHeight = openProj->getSingleDVD().getPackage().getHeight();
            minWidth = openProj->getSingleDVD().getPackage().getWidth();

        }

        if(ui->sbComboDoubleDVD->value() != 0){

            if(minHeight < openProj->getTwoDVD().getPackage().getHeight()){
                minHeight = openProj->getTwoDVD().getPackage().getHeight();
            }

            if(minWidth < openProj->getTwoDVD().getPackage().getWidth()){
                minWidth = openProj->getTwoDVD().getPackage().getWidth();
            }

        }

        minDepth = (openProj->getSingleDVD().getPackage().getDepth() * numOfSingle)  \
                + (openProj->getTwoDVD().getPackage().getDepth() * numOfDouble);

        ui->sbPackagingHeight->setMinimum(minHeight);
        ui->sbPackagingWidth->setMinimum(minWidth);
        ui->sbPackagingDepth->setMinimum(minDepth);

    }



ProjectDetails::~ProjectDetails()
{
    delete ui;
}
