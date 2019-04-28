#include "productcontroller.h"
#include "ui_mainwindow.h"
#include "ui_projectdetails.h"


ProductController::ProductController()
{
//    pd.ui->cbMaterialType->addItem("DVD Single Sided");
//    pd.ui->cbMaterialType->addItem("DVD Double Sided");
//    pd.ui->cbMaterialType->addItem("Blu Ray");
//    pd.ui->cbMaterialType->addItem("VHS");
//    pd.ui->cbMaterialType->addItem("Combo Box");

//    // Sets all options for the video format combo box on the project window
//    pd.ui->cbVFormat->addItem("MP4");
//    pd.ui->cbVFormat->addItem("FLV");
//    pd.ui->cbVFormat->addItem("AVI");
//    pd.ui->cbVFormat->addItem("3GP");
//    pd.ui->cbVFormat->addItem("WMV");
//    pd.ui->cbVFormat->addItem("HDV");

//    // Sets all options for the audio format combo box on the project window
//    pd.ui->cbAFormat->addItem("MP3");
//    pd.ui->cbAFormat->addItem("AC3(Dolby Digital)");
//    pd.ui->cbAFormat->addItem("EAC3(Dolby Digital Plus)");
//    pd.ui->cbAFormat->addItem("PCM");
//    pd.ui->cbAFormat->addItem("WMA");

//    // Sets all options for the materials language combo box on the project window
//    pd.ui->cbMaterialLanguage->addItem("English");
//    pd.ui->cbMaterialLanguage->addItem("French");
//    pd.ui->cbMaterialLanguage->addItem("German");
//    pd.ui->cbMaterialLanguage->addItem("Spanish");
//    pd.ui->cbMaterialLanguage->addItem("Italian");
//    pd.ui->cbMaterialLanguage->addItem("Dutch");
//    pd.ui->cbMaterialLanguage->addItem("Japanese");
//    pd.ui->cbMaterialLanguage->addItem("Hindi");

//    // Sets all options for the materials subtitle combo box on the project window
//    pd.ui->cbSubLang->addItem("English");
//    pd.ui->cbSubLang->addItem("French");
//    pd.ui->cbSubLang->addItem("German");
//    pd.ui->cbSubLang->addItem("Spanish");
//    pd.ui->cbSubLang->addItem("Italian");
//    pd.ui->cbSubLang->addItem("Dutch");
//    pd.ui->cbSubLang->addItem("Japanese");
//    pd.ui->cbSubLang->addItem("Hindi");

//    // Sets all options for the materials extra language tracks combo box on the project window
//    pd.ui->cbExtraLanguageTracks->addItem("English");
//    pd.ui->cbExtraLanguageTracks->addItem("French");
//    pd.ui->cbExtraLanguageTracks->addItem("German");
//    pd.ui->cbExtraLanguageTracks->addItem("Spanish");
//    pd.ui->cbExtraLanguageTracks->addItem("Italian");
//    pd.ui->cbExtraLanguageTracks->addItem("Dutch");
//    pd.ui->cbExtraLanguageTracks->addItem("Japanese");
//    pd.ui->cbExtraLanguageTracks->addItem("Hindi");

//    // Sets all options for the materials extra subtitle tracks combo box on the project window
//    pd.ui->cbExtraSubtitleTracks->addItem("English");
//    pd.ui->cbExtraSubtitleTracks->addItem("French");
//    pd.ui->cbExtraSubtitleTracks->addItem("German");
//    pd.ui->cbExtraSubtitleTracks->addItem("Spanish");
//    pd.ui->cbExtraSubtitleTracks->addItem("Italian");
//    pd.ui->cbExtraSubtitleTracks->addItem("Dutch");
//    pd.ui->cbExtraSubtitleTracks->addItem("Japanese");
//    pd.ui->cbExtraSubtitleTracks->addItem("Hindi");

//    // Sets all options for the filter combo box on the project window
//    pd.ui->cbCrew->addItem("All Crew Members");
//    pd.ui->cbCrew->addItem("Director");
//    pd.ui->cbCrew->addItem("Actor");
//    pd.ui->cbCrew->addItem("Producer");
//    pd.ui->cbCrew->addItem("Writer");
//    pd.ui->cbCrew->addItem("Editor");
//    pd.ui->cbCrew->addItem("Production Designer");
//    pd.ui->cbCrew->addItem("Set Decorator");
//    pd.ui->cbCrew->addItem("Costume Designer");

//    // Sets all options for the name title combo box on the project window
//    pd.ui->cbNameTitle->addItem("Mr");
//    pd.ui->cbNameTitle->addItem("Mrs");
//    pd.ui->cbNameTitle->addItem("Miss");
//    pd.ui->cbNameTitle->addItem("Dr");

    // Connects button press signals on project window to functions
  /*  connect(pd.ui->cmdApplyGeneralChanges, SIGNAL(clicked()),this, SLOT(handleApplyGeneralChanges()));
    connect(pd.ui->cmdClearGeneralChanges, SIGNAL(clicked()),this, SLOT(setProjectWindow()));
    //connect(pd.ui->cmdLocationAdd, SIGNAL(clicked()),this, SLOT(handleProjectWindowLocationAdd()));
    connect(pd.ui->cmdLocationDel, SIGNAL(clicked()),this, SLOT(handleProjectWindowLocationDel()));
    connect(pd.ui->cmdKeywordsAdd, SIGNAL(clicked()),this, SLOT(handleProjectWindowKeywordsAdd()));
    connect(pd.ui->cmdKeywordsDel, SIGNAL(clicked()),this, SLOT(handleProjectWindowKeywordsDel()));
    connect(pd.ui->cbStatus, SIGNAL(currentIndexChanged(int)), this, SLOT(handleProjectWindowStatusChange()));
    connect(pd.ui->cbCrew, SIGNAL(currentIndexChanged(int)), this, SLOT(handleProjectWindowCrewChange()));
    connect(pd.ui->cmdCrewAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowCrewAdd()));
    connect(pd.ui->cmdCrewDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowCrewDel()));
    connect(pd.ui->cmdCrewFilter, SIGNAL(clicked()), this, SLOT(handleProjectWindowCrewFilter()));
    connect(pd.ui->cbMaterialType, SIGNAL(currentIndexChanged(int)), this, SLOT(handleProjectWindowMaterialChange()));
    connect(pd.ui->cmdMaterialClear, SIGNAL(clicked()), this, SLOT(handleProjectWindowMaterialChange()));
    connect(pd.ui->cmdMaterialDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowMaterialDelete()));
    connect(pd.ui->cmdMaterialCreate, SIGNAL(clicked()), this, SLOT(handleProjectWindowMaterialCreate()));
    connect(pd.ui->cmdSubLangAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowSubLangAdd()));
    connect(pd.ui->cmdSubLangDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowSubLangDel()));
    connect(pd.ui->cmdExtraLanguageTracksAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowExtraLangAdd()));
    connect(pd.ui->cmdExtraLanguageTracksDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowExtraLangDel()));
    connect(pd.ui->cmdExtraSubtitleTracksAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowExtraSubLangAdd()));
    connect(pd.ui->cmdExtraSubtitleTracksDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowExtraSubLangDel()));
    connect(pd.ui->cmdBonusFeaturesAdd, SIGNAL(clicked()), this, SLOT(handleProjectWindowBonusAdd()));
    connect(pd.ui->cmdBonusFeaturesDel, SIGNAL(clicked()), this, SLOT(handleProjectWindowBonusDel()));
    connect(pd.ui->sbComboSingleDVD, SIGNAL(valueChanged(int)), this, SLOT(updateComboRuntime()));
    connect(pd.ui->sbComboDoubleDVD, SIGNAL(valueChanged(int)), this, SLOT(updateComboRuntime()));
    connect(pd.ui->sbComboSingleDVD, SIGNAL(valueChanged(int)), this, SLOT(updateMinimumPackage()));
    connect(pd.ui->sbComboDoubleDVD, SIGNAL(valueChanged(int)), this, SLOT(updateMinimumPackage()));*/
}



//void ProductController::setProjectWindow(){

//    pd.ui->lblProjectName->setText(QString::fromStdString("  " + openProj->getTitle()));
//    pd.ui->txtTitleProject->setText(QString::fromStdString(openProj->getTitle()));
//    pd.ui->txtSummary->setText(QString::fromStdString(openProj->getSummary()));

//    if(openProj->getProjectStatus() == "Unreleased"){
//        pd.ui->cbStatus->setCurrentIndex(0);
//    }
//    else if(openProj->getProjectStatus() == "Now Playing"){
//        pd.ui->cbStatus->setCurrentIndex(1);
//    }else if(openProj->getProjectStatus() == "Released"){
//        pd.ui->cbStatus->setCurrentIndex(2);
//    }

//    if(openProj->getGenre() == "Action"){
//        pd.ui->cbGenre->setCurrentIndex(0);
//    }
//    else if(openProj->getGenre() == "Comedy"){
//        pd.ui->cbGenre->setCurrentIndex(1);
//    }
//    else if(openProj->getGenre() == "Drama"){
//        pd.ui->cbGenre->setCurrentIndex(2);
//    }
//    else if(openProj->getGenre() == "Documentary"){
//        pd.ui->cbGenre->setCurrentIndex(3);
//    }
//    else if(openProj->getGenre() == "Horror"){
//        pd.ui->cbGenre->setCurrentIndex(4);
//    }
//    else if(openProj->getGenre() == "Thriller"){
//        pd.ui->cbGenre->setCurrentIndex(5);
//    }

//    if(openProj->getLanguage() == "English"){
//        pd.ui->cbLanguage->setCurrentIndex(0);
//    }
//    else if(openProj->getLanguage() == "French"){
//        pd.ui->cbLanguage->setCurrentIndex(1);
//    }
//    else if(openProj->getLanguage() == "German"){
//        pd.ui->cbLanguage->setCurrentIndex(2);
//    }
//    else if(openProj->getLanguage() == "Spanish"){
//        pd.ui->cbLanguage->setCurrentIndex(3);
//    }
//    else if(openProj->getLanguage() == "Mandarin"){
//        pd.ui->cbLanguage->setCurrentIndex(4);
//    }

//    pd.ui->deRelease->setDate(QDate::fromString(QString::fromStdString(openProj->getReleaseDate()), "dd/MM/yyyy"));
//    pd.ui->sbRuntime->setValue(openProj->getRunTime());
//    pd.ui->sbSales->setValue(openProj->getWeeklyBoxFigures());

//    pd.ui->txtLocationAdd->clear();
//    pd.ui->lstLocations->clear();
//    for(unsigned int i = 0; i < openProj->getFilmLocations().size(); ++i){
//         pd.ui->lstLocations->addItem(QString::fromStdString(openProj->getFilmLocations()[i]));
//    }

//    pd.ui->txtKeywordsAdd->clear();
//    pd.ui->lstKeywords->clear();
//    for(unsigned int j = 0; j < openProj->getKeywords().size(); ++j){
//         pd.ui->lstKeywords->addItem(QString::fromStdString(openProj->getKeywords()[j]));
//    }

//    pd.ui->lblTitleProjects->setStyleSheet("color: #78CAD2");
//    pd.ui->lblSummary->setStyleSheet("color: #78CAD2");
//    pd.ui->lblLocations->setStyleSheet("color: #78CAD2");
//    pd.ui->lblKeywords->setStyleSheet("color: #78CAD2");

//    //updateCrewLocations();

//}

//void ProductController::handleApplyGeneralChanges(){

//    bool apply = true;

//    // Gets data from the form
//    std::string projTitle = pd.ui->txtTitleProject->text().toStdString();
//    std::string summary = pd.ui->txtSummary->toPlainText().toStdString();
//    std::string status = pd.ui->cbStatus->currentText().toStdString();
//    std::string genre = pd.ui->cbGenre->currentText().toStdString();
//    std::string language = pd.ui->cbLanguage->currentText().toStdString();
//    std::string date = pd.ui->deRelease->date().toString(Qt::DefaultLocaleShortDate).toStdString();
//    int runtime = pd.ui->sbRuntime->value();
//    int sales = pd.ui->sbSales->value();

//    std::vector<std::string> locations;
//    for(int i = 0; i < pd.ui->lstLocations->count(); ++i){
//        locations.push_back(pd.ui->lstLocations->item(i)->text().toStdString());
//    }

//    std::vector<std::string> keywords;
//    for(int i = 0; i < pd.ui->lstKeywords->count(); ++i){
//        keywords.push_back(pd.ui->lstKeywords->item(i)->text().toStdString());
//    }

//    // Checks data has been inputted and flags red if it has not
//    if(projTitle == ""){
//        pd.ui->lblTitleProjects->setStyleSheet("color: #D81E5B");
//        apply = false;
//    }else{
//        pd.ui->lblTitleProjects->setStyleSheet("color: #78CAD2");
//    }

//    if(summary == ""){
//        pd.ui->lblSummary->setStyleSheet("color: #D81E5B");
//        apply = false;
//    }else{
//        pd.ui->lblSummary->setStyleSheet("color: #78CAD2");
//    }

//    if(locations.size() == 0){
//        pd.ui->lblLocations->setStyleSheet("color: #D81E5B");
//        apply = false;
//    }else{
//        pd.ui->lblLocations->setStyleSheet("color: #78CAD2");
//    }

//    if(keywords.size() == 0){
//        pd.ui->lblKeywords->setStyleSheet("color: #D81E5B");
//        apply = false;
//    }else{
//        pd.ui->lblKeywords->setStyleSheet("color: #78CAD2");
//    }

//    // If all fields have correctly inputted data a new project is created
//    if(apply){

//        openProj->setTitle(projTitle);
//        openProj->setSummary(summary);
//        openProj->setProjectStatus(status);
//        openProj->setGenre(genre);
//        openProj->setLanguage(language);
//        openProj->setReleaseDate(date);
//        openProj->setRunTime(runtime);
//        openProj->setWeeklyBoxFigures(sales);
//        openProj->setFilmLocations(locations);
//        openProj->setKeywords(keywords);

//        setProjectWindow();
//        //showAllProjects();

//     }

//}

//void ProductController::handleProjectWindowLocationAdd(){

//    QString input = pd.ui->txtLocationAdd->text();
//    if(input.toStdString() != ""){
//        pd.ui->lstLocations->addItem(input);
//    }
//    pd.ui->txtLocationAdd->clear();

//}

//void ProductController::handleProjectWindowLocationDel(){

//    QList <QListWidgetItem *> selectedItems = pd.ui->lstLocations->selectedItems();
//    for(int i = 0; i < selectedItems.size(); i++){
//        delete pd.ui->lstLocations->takeItem(pd.ui->lstLocations->row(selectedItems[i]));
//    }

//}

//void ProductController::handleProjectWindowKeywordsAdd(){

//    QString input = pd.ui->txtKeywordsAdd->text();
//    if(input.toStdString() != ""){
//        pd.ui->lstKeywords->addItem(input);
//    }
//    pd.ui->txtKeywordsAdd->clear();

//}

//void ProductController::handleProjectWindowKeywordsDel(){

//    QList <QListWidgetItem *> selectedItems = pd.ui->lstKeywords->selectedItems();
//    for(int i = 0; i < selectedItems.size(); i++){
//        delete pd.ui->lstKeywords->takeItem(pd.ui->lstKeywords->row(selectedItems[i]));
//    }

//}

//void ProductController::handleProjectWindowStatusChange(){

//    std::string status = pd.ui->cbStatus->currentText().toStdString();

//    if(status == "Unreleased" || status == "Released"){
//        pd.ui->lblSales->setStyleSheet("color: #7C8483");
//        pd.ui->sbSales->setReadOnly(true);
//        pd.ui->sbSales->setVisible(false);
//        if(status == "Unreleased"){
//            pd.ui->tabWidget->setTabEnabled(2, false);
//        }
//        else{
//            pd.ui->tabWidget->setTabEnabled(2, true);
//        }
//    }
//    else if (status == "Now Playing"){
//        pd.ui->lblSales->setStyleSheet("color: #78CAD2");
//        pd.ui->sbSales->setReadOnly(false);
//        pd.ui->sbSales->setVisible(true);
//        pd.ui->tabWidget->setTabEnabled(2, false);
//    }

//}

//void ProductController::displayCrew(){

//    pd.ui->lstCrew->clear();
//    std::vector <FilmCrew> crew = openProj->getCrew();

//    for(unsigned int i = 0; i < crew.size(); ++i){

//        std::string locationString = "";

//        for(unsigned int j = 0; j < crew[i].getLocationsWorkedAt().size(); ++j){

//            locationString += crew[i].getLocationsWorkedAt()[j];
//            if(j != crew[i].getLocationsWorkedAt().size() - 1){
//                locationString += ", ";
//            }

//        }

//        pd.ui->lstCrew->addItem(QString::fromStdString(\
//               crew[i].getTitle() + " " + crew[i].getName() + ": \n ID: " + crew[i].getIdNumber() \
//               + "\n Born: " + crew[i].getDateOfBirth() + "\n Role: " + crew[i].getRole() + "\n Experience: " \
//               + std::to_string(crew[i].getYearsOfExperience()) + " years"\
//               + "\n Locations: " + locationString));
//    }

//}

//void ProductController::updateCrewLocations(){

//    pd.ui->lstCrewLocations->clear();
//    for(unsigned int i = 0; i < openProj->getFilmLocations().size(); ++i){
//        pd.ui->lstCrewLocations->addItem(QString::fromStdString(openProj->getFilmLocations()[i]));
//    }

//}

//void ProductController::handleProjectWindowCrewChange(){

//    std::string selection = pd.ui->cbCrew->currentText().toStdString();

//    if(selection == "All Crew Members"){
//        pd.ui->lblNameTitle->setVisible(false);
//        pd.ui->cbNameTitle->setDisabled(true);
//        pd.ui->cbNameTitle->setVisible(false);
//        pd.ui->lblName->setVisible(false);
//        pd.ui->txtName->setDisabled(true);
//        pd.ui->txtName->setVisible(false);
//        pd.ui->lblIDNum->setVisible(false);
//        pd.ui->txtIDNum->setVisible(false);
//        pd.ui->txtIDNum->setDisabled(true);
//        pd.ui->cbNameTitle->setVisible(false);
//        pd.ui->lblDateOfBirth->setVisible(false);
//        pd.ui->deDofB->setVisible(false);
//        pd.ui->deDofB->setDisabled(true);
//        pd.ui->lblExperience->setVisible(false);
//        pd.ui->sbExperience->setDisabled(true);
//        pd.ui->sbExperience->setVisible(false);
//        pd.ui->cmdCrewAdd->setDisabled(true);
//        pd.ui->cmdCrewAdd->setVisible(false);
//        pd.ui->lblCrewLocations->setVisible(false);
//        pd.ui->lstCrewLocations->setDisabled(true);
//        pd.ui->lstCrewLocations->setVisible(false);

//        displayCrew();
//    }else{
//        pd.ui->lblNameTitle->setVisible(true);
//        pd.ui->cbNameTitle->setDisabled(false);
//        pd.ui->cbNameTitle->setVisible(true);
//        pd.ui->lblName->setVisible(true);
//        pd.ui->txtName->setDisabled(false);
//        pd.ui->txtName->setVisible(true);
//        pd.ui->lblIDNum->setVisible(true);
//        pd.ui->txtIDNum->setVisible(true);
//        pd.ui->txtIDNum->setDisabled(false);
//        pd.ui->cbNameTitle->setVisible(true);
//        pd.ui->lblDateOfBirth->setVisible(true);
//        pd.ui->deDofB->setVisible(true);
//        pd.ui->deDofB->setDisabled(false);
//        pd.ui->lblExperience->setVisible(true);
//        pd.ui->sbExperience->setDisabled(false);
//        pd.ui->sbExperience->setVisible(true);
//        pd.ui->cmdCrewAdd->setDisabled(false);
//        pd.ui->cmdCrewAdd->setVisible(true);
//        pd.ui->lblCrewLocations->setVisible(true);
//        pd.ui->lstCrewLocations->setDisabled(false);
//        pd.ui->lstCrewLocations->setVisible(true);

//        if(selection == "Director"){
//            filterCrewByRole("Director");
//        }
//        else if(selection == "Actor"){
//            filterCrewByRole("Actor");
//        }
//        else if(selection == "Producer"){
//            filterCrewByRole("Producer");
//        }
//        else if(selection == "Writer"){
//            filterCrewByRole("Writer");
//        }
//        else if(selection == "Editor"){
//            filterCrewByRole("Editor");
//        }
//        else if(selection == "Production Designer"){
//            filterCrewByRole("Production Designer");
//        }
//        else if(selection == "Set Decorator"){
//            filterCrewByRole("Set Decorator");
//        }
//        else if(selection == "Costume Designer"){
//            filterCrewByRole("Costume Designer");
//        }

//    }

//}

//void ProductController::handleProjectWindowCrewAdd(){

//    bool addCrew = true;

//    std::string name = pd.ui->txtName->text().toStdString();
//    std::string title = pd.ui->cbNameTitle->currentText().toStdString();
//    std::string DofB = pd.ui->deDofB->date().toString(Qt::DefaultLocaleShortDate).toStdString();
//    std::string ID = pd.ui->txtIDNum->text().toStdString();
//    std::string role = pd.ui->cbCrew->currentText().toStdString();
//    int experience = pd.ui->sbExperience->value();

//    QList <QListWidgetItem *> selectedItems = pd.ui->lstCrewLocations->selectedItems();
//    std::vector <std::string> loc;

//    for(int i = 0; i < selectedItems.size(); ++i){
//        loc.push_back(selectedItems[i]->text().toStdString());
//    }

//    if(name == ""){
//        pd.ui->lblName->setStyleSheet("color: #D81E5B");
//        addCrew = false;
//    }else{
//        pd.ui->lblName->setStyleSheet("color: #78CAD2");
//    }

//    if(ID == ""){
//        pd.ui->lblIDNum->setStyleSheet("color: #D81E5B");
//        addCrew = false;
//    }else{
//        pd.ui->lblIDNum->setStyleSheet("color: #78CAD2");
//    }

//    if(loc.size() == 0){
//        pd.ui->lblCrewLocations->setStyleSheet("color: #D81E5B");
//        addCrew = false;
//    }else{
//        pd.ui->lblIDNum->setStyleSheet("color: #78CAD2");
//    }

//    if(addCrew){

//        std::string locationString = "";
//        for(unsigned int j = 0; j < loc.size(); ++j){
//            locationString += loc[j];
//            if(j != loc.size() - 1){
//                locationString += ", ";
//            }
//        }
//        pd.ui->lstCrew->addItem(QString::fromStdString(\
//               title + " " + name + ": \n ID: " + ID + "\n Born: " + DofB + "\n Role: "\
//               + role + "\n Experience: " + std::to_string(experience) + " years" \
//               + "\n Locations: " + locationString));

//        FilmCrew newC;

//        newC.setName(name);
//        newC.setTitle(title);
//        newC.setIdNumber(ID);
//        newC.setDateOfBirth(DofB);
//        newC.setRole(role);
//        newC.setYearsOfExperience(experience);
//        newC.setLocationsWorkedAt(loc);

//        std::vector <FilmCrew> newCrew = openProj->getCrew();
//        newCrew.push_back(newC);
//        openProj->setCrew(newCrew);
//        //openProj->setCrewID(projList.getIdNumber());

//        pd.ui->txtName->clear();
//        pd.ui->cbNameTitle->setCurrentIndex(0);
//        pd.ui->deDofB->setDate(QDate(2000, 1, 1));
//        pd.ui->txtIDNum->clear();
//        pd.ui->sbExperience->setValue(0);
//        //handleCreateProject();
//        //handleFilter();
//    }

//}

//void ProductController::handleProjectWindowCrewDel(){

//    QList <QListWidgetItem *> selectedItems = pd.ui->lstCrew->selectedItems();

//    for(int i = 0; i < selectedItems.size(); i++){

//        std::string text = selectedItems[i]->text().toStdString();

//        std::string title = text.substr(0, text.find_first_of(" "));
//        std::string name = text.substr((text.find_first_of(" ") + 1), \
//                                       (text.find_first_of(":") - (text.find_first_of(" ") + 1)));
//        std::string id = text.substr((text.find("ID:") + 4), (text.find("\n Born:") - (text.find("ID:") + 4)));

//        std::vector <FilmCrew> crew = openProj->getCrew();

//        for(unsigned int i = 0; i < crew.size(); ++i){
//            if(crew[i].getTitle() == title && crew[i].getName() == name && crew[i].getIdNumber() == id){
//                crew.erase(crew.begin() + i);
//            }
//        }

//        openProj->setCrew(crew);
//        delete pd.ui->lstCrew->takeItem(pd.ui->lstCrew->row(selectedItems[i]));
//        //handleCreateProject();
//        //handleFilter();
//    }

//}

//void ProductController::handleProjectWindowCrewFilter(){

//    std::string role = pd.ui->cbCrew->currentText().toStdString();
//    std::string input = pd.ui->txtCrew->text().toStdString();

//    pd.ui->lstCrew->clear();

//    std::vector <FilmCrew> crew = openProj->getCrew();

//    for(unsigned int i = 0; i < crew.size(); ++i){
//        if((crew[i].getRole() == role || role == "All Crew Members") && crew[i].getName() == input){

//            std::string locationString = "";

//            for(unsigned int j = 0; j < crew[i].getLocationsWorkedAt().size(); ++j){

//                locationString += crew[i].getLocationsWorkedAt()[j];
//                if(j != crew[i].getLocationsWorkedAt().size() - 1){
//                    locationString += ", ";
//                }

//            }

//            pd.ui->lstCrew->addItem(QString::fromStdString(\
//                   crew[i].getTitle() + " " + crew[i].getName() + ": \n ID: " + crew[i].getIdNumber() \
//                   + "\n Born: " + crew[i].getDateOfBirth() + "\n Role: " + crew[i].getRole() + "\n Experience: " \
//                   + std::to_string(crew[i].getYearsOfExperience()) + " years"\
//                   + "\n Locations: " + locationString));

//        }
//    }

//}

//void ProductController::filterCrewByRole(std::string role){

//    pd.ui->lstCrew->clear();

//    std::vector <FilmCrew> crew = openProj->getCrew();

//    for(unsigned int i = 0; i < crew.size(); ++i){
//        if(crew[i].getRole() == role){

//            std::string locationString = "";

//            for(unsigned int j = 0; j < crew[i].getLocationsWorkedAt().size(); ++j){

//                locationString += crew[i].getLocationsWorkedAt()[j];
//                if(j != crew[i].getLocationsWorkedAt().size() - 1){
//                    locationString += ", ";
//                }

//            }

//            pd.ui->lstCrew->addItem(QString::fromStdString(\
//                   crew[i].getTitle() + " " + crew[i].getName() + ": \n ID: " + crew[i].getIdNumber() \
//                   + "\n Born: " + crew[i].getDateOfBirth() + "\n Role: " + crew[i].getRole() + "\n Experience: " \
//                   + std::to_string(crew[i].getYearsOfExperience()) + " years"\
//                   + "\n Locations: " + locationString));

//        }
//    }

//}

//void ProductController::handleProjectWindowMaterialChange(){

//    pd.ui->sbPackagingHeight->setMinimum(0);
//    pd.ui->sbPackagingWidth->setMinimum(0);
//    pd.ui->sbPackagingDepth->setMinimum(0);

//    pd.ui->txtMaterialTitle->clear();
//    pd.ui->txtMaterialIDNum->clear();
//    pd.ui->cbVFormat->setCurrentIndex(0);
//    pd.ui->cbAFormat->setCurrentIndex(0);
//    pd.ui->cbMaterialLanguage->setCurrentIndex(0);
//    pd.ui->sbMaterialRuntime->setValue(0);
//    pd.ui->sbMaterialPrice->setValue(0);
//    pd.ui->lstSubLang->clear();
//    pd.ui->txtFirstSideContent->clear();
//    pd.ui->txtSecondSideContent->clear();
//    pd.ui->sbFrameHorizontal->setValue(0);
//    pd.ui->sbFrameVertical->setValue(0);
//    pd.ui->txtFrameDescription->clear();
//    pd.ui->cbPackagingMaterial->clear();
//    pd.ui->sbPackagingHeight->setValue(0);
//    pd.ui->sbPackagingWidth->setValue(0);
//    pd.ui->sbPackagingDepth->setValue(0);
//    pd.ui->lstBonusFeatures->clear();
//    pd.ui->lstExtraLanguageTracks->clear();
//    pd.ui->lstExtraSubtitleTracks->clear();
//    pd.ui->sbComboSingleDVD->setValue(0);
//    pd.ui->sbComboDoubleDVD->setValue(0);

//    pd.ui->sbMaterialRuntime->setDisabled(false);

//    pd.ui->lblVFormat->setVisible(true);
//    pd.ui->cbVFormat->setDisabled(false);
//    pd.ui->cbVFormat->setVisible(true);

//    pd.ui->lblAFormat->setVisible(true);
//    pd.ui->cbAFormat->setDisabled(false);
//    pd.ui->cbAFormat->setVisible(true);

//    pd.ui->lblMaterialLanguage->setVisible(true);
//    pd.ui->cbMaterialLanguage->setDisabled(false);
//    pd.ui->cbMaterialLanguage->setVisible(true);

//    pd.ui->lblMaterialRuntime->setDisabled(false);

//    pd.ui->lblMaterialSubLang->setVisible(true);
//    pd.ui->cbSubLang->setDisabled(false);
//    pd.ui->cbSubLang->setVisible(true);
//    pd.ui->cmdSubLangAdd->setDisabled(false);
//    pd.ui->cmdSubLangAdd->setVisible(true);
//    pd.ui->cmdSubLangDel->setDisabled(false);
//    pd.ui->cmdSubLangDel->setVisible(true);
//    pd.ui->lstSubLang->setVisible(true);

//    pd.ui->lblMaterialFrameAspect->setVisible(true);
//    pd.ui->lblMaterialFrameDescription->setVisible(true);
//    pd.ui->txtFrameDescription->setDisabled(false);
//    pd.ui->txtFrameDescription->setVisible(true);
//    pd.ui->lblMaterialFrameHorizontal->setVisible(true);
//    pd.ui->sbFrameHorizontal->setDisabled(false);
//    pd.ui->sbFrameHorizontal->setVisible(true);
//    pd.ui->lblMaterialFrameVertical->setVisible(true);
//    pd.ui->sbFrameVertical->setDisabled(false);
//    pd.ui->sbFrameVertical->setVisible(true);

//    pd.ui->lblComboSingleDVD->setVisible(false);
//    pd.ui->sbComboSingleDVD->setDisabled(true);
//    pd.ui->sbComboSingleDVD->setVisible(false);

//    pd.ui->lblComboDoubleDVD->setVisible(false);
//    pd.ui->sbComboDoubleDVD->setDisabled(true);
//    pd.ui->sbComboDoubleDVD->setVisible(false);

//    pd.ui->cbPackagingMaterial->addItem("Plastic");

//    pd.ui->lblMaterialAnswer->setText("Not Created");
//    pd.ui->lblMaterialAnswer->setStyleSheet("color: #D81E5B");
//    pd.ui->cmdMaterialDel->setVisible(false);
//    pd.ui->cmdMaterialClear->setText("Clear");
//    pd.ui->cmdMaterialCreate->setText("Create");

//    std::string material = pd.ui->cbMaterialType->currentText().toStdString();

//    if(material == "DVD Single Sided"){

//        if(openProj->getSingleDVD().getTitle() != ""){

//            pd.ui->lblMaterialAnswer->setText("Created");
//            pd.ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
//            pd.ui->cmdMaterialDel->setVisible(true);
//            pd.ui->cmdMaterialClear->setText("Clear Changes");
//            pd.ui->cmdMaterialCreate->setText("Apply Changes");

//            pd.ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getSingleDVD().getTitle()));
//            pd.ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getSingleDVD().getIdNumber()));
//            pd.ui->sbMaterialRuntime->setValue(openProj->getSingleDVD().getRunTime());
//            pd.ui->sbMaterialPrice->setValue(openProj->getSingleDVD().getPrice());

//            if(openProj->getSingleDVD().getVFormat() == "mp4"){
//                pd.ui->cbVFormat->setCurrentIndex(0);
//            }
//            else if(openProj->getSingleDVD().getVFormat() == "flv"){
//                pd.ui->cbVFormat->setCurrentIndex(1);
//            }
//            else if(openProj->getSingleDVD().getVFormat() == "avi"){
//                pd.ui->cbVFormat->setCurrentIndex(2);
//            }
//            else if(openProj->getSingleDVD().getVFormat() == "mov"){
//                pd.ui->cbVFormat->setCurrentIndex(3);
//            }
//            else if(openProj->getSingleDVD().getVFormat() == "wmv"){
//                pd.ui->cbVFormat->setCurrentIndex(4);
//            }
//            else if(openProj->getSingleDVD().getVFormat() == "other"){
//                pd.ui->cbVFormat->setCurrentIndex(5);
//            }

//            if(openProj->getSingleDVD().getAFormat() == "Dolby"){
//                pd.ui->cbAFormat->setCurrentIndex(0);
//            }
//            else if(openProj->getSingleDVD().getAFormat() == "Dolby digital"){
//                pd.ui->cbAFormat->setCurrentIndex(1);
//            }
//            else if(openProj->getSingleDVD().getAFormat() == "MPEG-1"){
//                pd.ui->cbAFormat->setCurrentIndex(2);
//            }
//            else if(openProj->getSingleDVD().getAFormat() == "PCM"){
//                pd.ui->cbAFormat->setCurrentIndex(3);
//            }
//            else if(openProj->getSingleDVD().getAFormat() == "DTS"){
//                pd.ui->cbAFormat->setCurrentIndex(4);
//            }

//            if(openProj->getSingleDVD().getLanguage() == "English"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(0);
//            }
//            else if(openProj->getSingleDVD().getLanguage() == "French"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(1);
//            }
//            else if(openProj->getSingleDVD().getLanguage() == "German"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(2);
//            }
//            else if(openProj->getSingleDVD().getLanguage() == "Spanish"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(3);
//            }
//            else if(openProj->getSingleDVD().getLanguage() == "Mandarin"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(4);
//            }
//            else if(openProj->getSingleDVD().getLanguage() == "Other"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(5);
//            }

//            pd.ui->sbFrameHorizontal->setValue(openProj->getSingleDVD().getFrame().getHorizontalRatio());
//            pd.ui->sbFrameVertical->setValue(openProj->getSingleDVD().getFrame().getVerticalRatio());
//            pd.ui->txtFrameDescription->setText(QString::fromStdString(openProj->getSingleDVD().getFrame().getRatioDescription()));

//            pd.ui->cbPackagingMaterial->setCurrentIndex(0);
//            pd.ui->sbPackagingHeight->setValue(openProj->getSingleDVD().getPackage().getHeight());
//            pd.ui->sbPackagingWidth->setValue(openProj->getSingleDVD().getPackage().getWidth());
//            pd.ui->sbPackagingDepth->setValue(openProj->getSingleDVD().getPackage().getDepth());

//            pd.ui->txtFirstSideContent->setText(QString::fromStdString(openProj->getSingleDVD().getFirstSideContent()));

//            for(unsigned int i = 0; i < openProj->getSingleDVD().getSubTitleLanguages().size(); ++i){
//                pd.ui->lstSubLang->addItem(QString::fromStdString(openProj->getSingleDVD().getSubTitleLanguages()[i]));
//            }

//            for(unsigned int j = 0; j < openProj->getSingleDVD().getExtraLanguageTracks().size(); ++j){
//                pd.ui->lstExtraLanguageTracks->addItem(QString::fromStdString(openProj->getSingleDVD().getExtraLanguageTracks()[j]));
//            }

//            for(unsigned int k = 0; k < openProj->getSingleDVD().getExtraSubtitleTracks().size(); ++k){
//                pd.ui->lstExtraSubtitleTracks->addItem(QString::fromStdString(openProj->getSingleDVD().getExtraSubtitleTracks()[k]));
//            }

//            for(unsigned int l = 0; l < openProj->getSingleDVD().getBonusFeatures().size(); ++l){
//                pd.ui->lstBonusFeatures->addItem(QString::fromStdString(openProj->getSingleDVD().getBonusFeatures()[l]));
//            }

//        }

//        pd.ui->lblFirstSideContent->setVisible(true);
//        pd.ui->txtFirstSideContent->setDisabled(false);
//        pd.ui->txtFirstSideContent->setVisible(true);

//        pd.ui->lblSecondSideContent->setVisible(false);
//        pd.ui->txtSecondSideContent->setDisabled(true);
//        pd.ui->txtSecondSideContent->setVisible(false);

//        pd.ui->lblExtraLanguageTracks->setVisible(true);
//        pd.ui->cbExtraLanguageTracks->setVisible(true);
//        pd.ui->cmdExtraLanguageTracksAdd->setDisabled(false);
//        pd.ui->cmdExtraLanguageTracksAdd->setVisible(true);
//        pd.ui->cmdExtraLanguageTracksDel->setDisabled(false);
//        pd.ui->cmdExtraLanguageTracksDel->setVisible(true);
//        pd.ui->lstExtraLanguageTracks->setVisible(true);

//        pd.ui->lblExtraSubtitleTracks->setVisible(true);
//        pd.ui->cbExtraSubtitleTracks->setVisible(true);
//        pd.ui->cmdExtraSubtitleTracksAdd->setDisabled(false);
//        pd.ui->cmdExtraSubtitleTracksAdd->setVisible(true);
//        pd.ui->cmdExtraSubtitleTracksDel->setDisabled(false);
//        pd.ui->cmdExtraSubtitleTracksDel->setVisible(true);
//        pd.ui->lstExtraSubtitleTracks->setVisible(true);

//        pd.ui->lblBonusFeatures->setVisible(true);
//        pd.ui->txtBonusFeatures->setVisible(true);
//        pd.ui->cmdBonusFeaturesAdd->setDisabled(false);
//        pd.ui->cmdBonusFeaturesAdd->setVisible(true);
//        pd.ui->cmdBonusFeaturesDel->setDisabled(false);
//        pd.ui->cmdBonusFeaturesDel->setVisible(true);
//        pd.ui->lstBonusFeatures->setVisible(true);

//    }
//    else if(material == "DVD Double Sided"){

//        if(openProj->getTwoDVD().getTitle() != ""){

//            pd.ui->lblMaterialAnswer->setText("Created");
//            pd.ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
//            pd.ui->cmdMaterialDel->setVisible(true);
//            pd.ui->cmdMaterialClear->setText("Clear Changes");
//            pd.ui->cmdMaterialCreate->setText("Apply Changes");

//            pd.ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getTwoDVD().getTitle()));
//            pd.ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getTwoDVD().getIdNumber()));
//            pd.ui->sbMaterialRuntime->setValue(openProj->getTwoDVD().getRunTime());
//            pd.ui->sbMaterialPrice->setValue(openProj->getTwoDVD().getPrice());

//            if(openProj->getTwoDVD().getVFormat() == "mp4"){
//                pd.ui->cbVFormat->setCurrentIndex(0);
//            }
//            else if(openProj->getTwoDVD().getVFormat() == "flv"){
//                pd.ui->cbVFormat->setCurrentIndex(1);
//            }
//            else if(openProj->getTwoDVD().getVFormat() == "avi"){
//                pd.ui->cbVFormat->setCurrentIndex(2);
//            }
//            else if(openProj->getTwoDVD().getVFormat() == "mov"){
//                pd.ui->cbVFormat->setCurrentIndex(3);
//            }
//            else if(openProj->getTwoDVD().getVFormat() == "wmv"){
//                pd.ui->cbVFormat->setCurrentIndex(4);
//            }
//            else if(openProj->getTwoDVD().getVFormat() == "other"){
//                pd.ui->cbVFormat->setCurrentIndex(5);
//            }

//            if(openProj->getTwoDVD().getAFormat() == "Dolby"){
//                pd.ui->cbAFormat->setCurrentIndex(0);
//            }
//            else if(openProj->getTwoDVD().getAFormat() == "Dolby digital"){
//                pd.ui->cbAFormat->setCurrentIndex(1);
//            }
//            else if(openProj->getTwoDVD().getAFormat() == "MPEG-1"){
//                pd.ui->cbAFormat->setCurrentIndex(2);
//            }
//            else if(openProj->getTwoDVD().getAFormat() == "PCM"){
//                pd.ui->cbAFormat->setCurrentIndex(3);
//            }
//            else if(openProj->getTwoDVD().getAFormat() == "DTS"){
//                pd.ui->cbAFormat->setCurrentIndex(4);
//            }

//            if(openProj->getTwoDVD().getLanguage() == "English"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(0);
//            }
//            else if(openProj->getTwoDVD().getLanguage() == "French"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(1);
//            }
//            else if(openProj->getTwoDVD().getLanguage() == "German"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(2);
//            }
//            else if(openProj->getTwoDVD().getLanguage() == "Spanish"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(3);
//            }
//            else if(openProj->getTwoDVD().getLanguage() == "Mandarin"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(4);
//            }
//            else if(openProj->getTwoDVD().getLanguage() == "Other"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(5);
//            }

//            pd.ui->sbFrameHorizontal->setValue(openProj->getTwoDVD().getFrame().getHorizontalRatio());
//            pd.ui->sbFrameVertical->setValue(openProj->getTwoDVD().getFrame().getVerticalRatio());
//            pd.ui->txtFrameDescription->setText(QString::fromStdString(openProj->getTwoDVD().getFrame().getRatioDescription()));

//            pd.ui->cbPackagingMaterial->setCurrentIndex(0);
//            pd.ui->sbPackagingHeight->setValue(openProj->getTwoDVD().getPackage().getHeight());
//            pd.ui->sbPackagingWidth->setValue(openProj->getTwoDVD().getPackage().getWidth());
//            pd.ui->sbPackagingDepth->setValue(openProj->getTwoDVD().getPackage().getDepth());

//            pd.ui->txtFirstSideContent->setText(QString::fromStdString(openProj->getTwoDVD().getFirstSideContent()));
//            pd.ui->txtSecondSideContent->setText(QString::fromStdString(openProj->getTwoDVD().getSecondSideContent()));


//            for(unsigned int i = 0; i < openProj->getTwoDVD().getSubTitleLanguages().size(); ++i){
//                pd.ui->lstSubLang->addItem(QString::fromStdString(openProj->getTwoDVD().getSubTitleLanguages()[i]));
//            }

//            for(unsigned int j = 0; j < openProj->getTwoDVD().getExtraLanguageTracks().size(); ++j){
//                pd.ui->lstExtraLanguageTracks->addItem(QString::fromStdString(openProj->getTwoDVD().getExtraLanguageTracks()[j]));
//            }

//            for(unsigned int k = 0; k < openProj->getTwoDVD().getExtraSubtitleTracks().size(); ++k){
//                pd.ui->lstExtraSubtitleTracks->addItem(QString::fromStdString(openProj->getTwoDVD().getExtraSubtitleTracks()[k]));
//            }

//            for(unsigned int l = 0; l < openProj->getTwoDVD().getBonusFeatures().size(); ++l){
//                pd.ui->lstBonusFeatures->addItem(QString::fromStdString(openProj->getTwoDVD().getBonusFeatures()[l]));
//            }

//        }

//        pd.ui->lblFirstSideContent->setVisible(true);
//        pd.ui->txtFirstSideContent->setDisabled(false);
//        pd.ui->txtFirstSideContent->setVisible(true);

//        pd.ui->lblSecondSideContent->setVisible(true);
//        pd.ui->txtSecondSideContent->setDisabled(false);
//        pd.ui->txtSecondSideContent->setVisible(true);

//        pd.ui->lblExtraLanguageTracks->setVisible(true);
//        pd.ui->cbExtraLanguageTracks->setVisible(true);
//        pd.ui->cmdExtraLanguageTracksAdd->setDisabled(false);
//        pd.ui->cmdExtraLanguageTracksAdd->setVisible(true);
//        pd.ui->cmdExtraLanguageTracksDel->setDisabled(false);
//        pd.ui->cmdExtraLanguageTracksDel->setVisible(true);
//        pd.ui->lstExtraLanguageTracks->setVisible(true);

//        pd.ui->lblExtraSubtitleTracks->setVisible(true);
//        pd.ui->cbExtraSubtitleTracks->setVisible(true);
//        pd.ui->cmdExtraSubtitleTracksAdd->setDisabled(false);
//        pd.ui->cmdExtraSubtitleTracksAdd->setVisible(true);
//        pd.ui->cmdExtraSubtitleTracksDel->setDisabled(false);
//        pd.ui->cmdExtraSubtitleTracksDel->setVisible(true);
//        pd.ui->lstExtraSubtitleTracks->setVisible(true);

//        pd.ui->lblBonusFeatures->setVisible(true);
//        pd.ui->txtBonusFeatures->setVisible(true);
//        pd.ui->cmdBonusFeaturesAdd->setDisabled(false);
//        pd.ui->cmdBonusFeaturesAdd->setVisible(true);
//        pd.ui->cmdBonusFeaturesDel->setDisabled(false);
//        pd.ui->cmdBonusFeaturesDel->setVisible(true);
//        pd.ui->lstBonusFeatures->setVisible(true);

//    }
//    else if(material == "Blu Ray"){

//        if(openProj->getBluRay().getTitle() != ""){

//            pd.ui->lblMaterialAnswer->setText("Created");
//            pd.ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
//            pd.ui->cmdMaterialDel->setVisible(true);
//            pd.ui->cmdMaterialClear->setText("Clear Changes");
//            pd.ui->cmdMaterialCreate->setText("Apply Changes");

//            pd.ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getBluRay().getTitle()));
//            pd.ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getBluRay().getIdNumber()));
//            pd.ui->sbMaterialRuntime->setValue(openProj->getBluRay().getRunTime());
//            pd.ui->sbMaterialPrice->setValue(openProj->getBluRay().getPrice());

//            if(openProj->getBluRay().getVFormat() == "mp4"){
//                pd.ui->cbVFormat->setCurrentIndex(0);
//            }
//            else if(openProj->getBluRay().getVFormat() == "flv"){
//                pd.ui->cbVFormat->setCurrentIndex(1);
//            }
//            else if(openProj->getBluRay().getVFormat() == "avi"){
//                pd.ui->cbVFormat->setCurrentIndex(2);
//            }
//            else if(openProj->getBluRay().getVFormat() == "mov"){
//                pd.ui->cbVFormat->setCurrentIndex(3);
//            }
//            else if(openProj->getBluRay().getVFormat() == "wmv"){
//                pd.ui->cbVFormat->setCurrentIndex(4);
//            }
//            else if(openProj->getBluRay().getVFormat() == "other"){
//                pd.ui->cbVFormat->setCurrentIndex(5);
//            }

//            if(openProj->getBluRay().getAFormat() == "Dolby"){
//                pd.ui->cbAFormat->setCurrentIndex(0);
//            }
//            else if(openProj->getBluRay().getAFormat() == "Dolby digital"){
//                pd.ui->cbAFormat->setCurrentIndex(1);
//            }
//            else if(openProj->getBluRay().getAFormat() == "MPEG-1"){
//                pd.ui->cbAFormat->setCurrentIndex(2);
//            }
//            else if(openProj->getBluRay().getAFormat() == "PCM"){
//                pd.ui->cbAFormat->setCurrentIndex(3);
//            }
//            else if(openProj->getBluRay().getAFormat() == "DTS"){
//                pd.ui->cbAFormat->setCurrentIndex(4);
//            }

//            if(openProj->getBluRay().getLanguage() == "English"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(0);
//            }
//            else if(openProj->getBluRay().getLanguage() == "French"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(1);
//            }
//            else if(openProj->getBluRay().getLanguage() == "German"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(2);
//            }
//            else if(openProj->getBluRay().getLanguage() == "Spanish"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(3);
//            }
//            else if(openProj->getBluRay().getLanguage() == "Mandarin"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(4);
//            }
//            else if(openProj->getBluRay().getLanguage() == "Other"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(5);
//            }

//            pd.ui->sbFrameHorizontal->setValue(openProj->getBluRay().getFrame().getHorizontalRatio());
//            pd.ui->sbFrameVertical->setValue(openProj->getBluRay().getFrame().getVerticalRatio());
//            pd.ui->txtFrameDescription->setText(QString::fromStdString(openProj->getBluRay().getFrame().getRatioDescription()));

//            pd.ui->cbPackagingMaterial->setCurrentIndex(0);
//            pd.ui->sbPackagingHeight->setValue(openProj->getBluRay().getPackage().getHeight());
//            pd.ui->sbPackagingWidth->setValue(openProj->getBluRay().getPackage().getWidth());
//            pd.ui->sbPackagingDepth->setValue(openProj->getBluRay().getPackage().getDepth());

//            for(unsigned int i = 0; i < openProj->getBluRay().getSubTitleLanguages().size(); ++i){
//                pd.ui->lstSubLang->addItem(QString::fromStdString(openProj->getBluRay().getSubTitleLanguages()[i]));
//            }

//            for(unsigned int j = 0; j < openProj->getBluRay().getExtraLanguageTracks().size(); ++j){
//                pd.ui->lstExtraLanguageTracks->addItem(QString::fromStdString(openProj->getBluRay().getExtraLanguageTracks()[j]));
//            }

//            for(unsigned int k = 0; k < openProj->getBluRay().getExtraSubtitleTracks().size(); ++k){
//                pd.ui->lstExtraSubtitleTracks->addItem(QString::fromStdString(openProj->getBluRay().getExtraSubtitleTracks()[k]));
//            }

//            for(unsigned int l = 0; l < openProj->getBluRay().getBonusTracks().size(); ++l){
//                pd.ui->lstBonusFeatures->addItem(QString::fromStdString(openProj->getBluRay().getBonusTracks()[l]));
//            }

//        }

//        pd.ui->lblFirstSideContent->setVisible(false);
//        pd.ui->txtFirstSideContent->setDisabled(true);
//        pd.ui->txtFirstSideContent->setVisible(false);

//        pd.ui->lblSecondSideContent->setVisible(false);
//        pd.ui->txtSecondSideContent->setDisabled(true);
//        pd.ui->txtSecondSideContent->setVisible(false);

//        pd.ui->lblExtraLanguageTracks->setVisible(true);
//        pd.ui->cbExtraLanguageTracks->setVisible(true);
//        pd.ui->cmdExtraLanguageTracksAdd->setDisabled(false);
//        pd.ui->cmdExtraLanguageTracksAdd->setVisible(true);
//        pd.ui->cmdExtraLanguageTracksDel->setDisabled(false);
//        pd.ui->cmdExtraLanguageTracksDel->setVisible(true);
//        pd.ui->lstExtraLanguageTracks->setVisible(true);

//        pd.ui->lblExtraSubtitleTracks->setVisible(true);
//        pd.ui->cbExtraSubtitleTracks->setVisible(true);
//        pd.ui->cmdExtraSubtitleTracksAdd->setDisabled(false);
//        pd.ui->cmdExtraSubtitleTracksAdd->setVisible(true);
//        pd.ui->cmdExtraSubtitleTracksDel->setDisabled(false);
//        pd.ui->cmdExtraSubtitleTracksDel->setVisible(true);
//        pd.ui->lstExtraSubtitleTracks->setVisible(true);

//        pd.ui->lblBonusFeatures->setVisible(true);
//        pd.ui->txtBonusFeatures->setVisible(true);
//        pd.ui->cmdBonusFeaturesAdd->setDisabled(false);
//        pd.ui->cmdBonusFeaturesAdd->setVisible(true);
//        pd.ui->cmdBonusFeaturesDel->setDisabled(false);
//        pd.ui->cmdBonusFeaturesDel->setVisible(true);
//        pd.ui->lstBonusFeatures->setVisible(true);

//    }
//    else if(material == "VHS"){

//        pd.ui->cbPackagingMaterial->addItem("Cardboard");

//        if(openProj->getVhs().getTitle() != ""){

//            pd.ui->lblMaterialAnswer->setText("Created");
//            pd.ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
//            pd.ui->cmdMaterialDel->setVisible(true);
//            pd.ui->cmdMaterialClear->setText("Clear Changes");
//            pd.ui->cmdMaterialCreate->setText("Apply Changes");

//            pd.ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getVhs().getTitle()));
//            pd.ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getVhs().getIdNumber()));
//            pd.ui->sbMaterialRuntime->setValue(openProj->getVhs().getRunTime());
//            pd.ui->sbMaterialPrice->setValue(openProj->getVhs().getPrice());

//            if(openProj->getVhs().getVFormat() == "mp4"){
//                pd.ui->cbVFormat->setCurrentIndex(0);
//            }
//            else if(openProj->getVhs().getVFormat() == "flv"){
//                pd.ui->cbVFormat->setCurrentIndex(1);
//            }
//            else if(openProj->getVhs().getVFormat() == "avi"){
//                pd.ui->cbVFormat->setCurrentIndex(2);
//            }
//            else if(openProj->getVhs().getVFormat() == "mov"){
//                pd.ui->cbVFormat->setCurrentIndex(3);
//            }
//            else if(openProj->getVhs().getVFormat() == "wmv"){
//                pd.ui->cbVFormat->setCurrentIndex(4);
//            }
//            else if(openProj->getVhs().getVFormat() == "other"){
//                pd.ui->cbVFormat->setCurrentIndex(5);
//            }

//            if(openProj->getVhs().getAFormat() == "Dolby"){
//                pd.ui->cbAFormat->setCurrentIndex(0);
//            }
//            else if(openProj->getVhs().getAFormat() == "Dolby digital"){
//                pd.ui->cbAFormat->setCurrentIndex(1);
//            }
//            else if(openProj->getVhs().getAFormat() == "MPEG-1"){
//                pd.ui->cbAFormat->setCurrentIndex(2);
//            }
//            else if(openProj->getVhs().getAFormat() == "PCM"){
//                pd.ui->cbAFormat->setCurrentIndex(3);
//            }
//            else if(openProj->getVhs().getAFormat() == "DTS"){
//                pd.ui->cbAFormat->setCurrentIndex(4);
//            }

//            if(openProj->getVhs().getLanguage() == "English"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(0);
//            }
//            else if(openProj->getVhs().getLanguage() == "French"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(1);
//            }
//            else if(openProj->getVhs().getLanguage() == "German"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(2);
//            }
//            else if(openProj->getVhs().getLanguage() == "Spanish"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(3);
//            }
//            else if(openProj->getVhs().getLanguage() == "Mandarin"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(4);
//            }
//            else if(openProj->getVhs().getLanguage() == "Other"){
//                pd.ui->cbMaterialLanguage->setCurrentIndex(5);
//            }

//            pd.ui->sbFrameHorizontal->setValue(openProj->getVhs().getFrame().getHorizontalRatio());
//            pd.ui->sbFrameVertical->setValue(openProj->getVhs().getFrame().getVerticalRatio());
//            pd.ui->txtFrameDescription->setText(QString::fromStdString(openProj->getVhs().getFrame().getRatioDescription()));

//            if(openProj->getVhs().getPackage().getMaterial() == "Plastic"){
//                pd.ui->cbPackagingMaterial->setCurrentIndex(0);
//            }else if(openProj->getVhs().getPackage().getMaterial() == "Cardboard"){
//                pd.ui->cbPackagingMaterial->setCurrentIndex(1);
//            }

//            pd.ui->sbPackagingHeight->setValue(openProj->getVhs().getPackage().getHeight());
//            pd.ui->sbPackagingWidth->setValue(openProj->getVhs().getPackage().getWidth());
//            pd.ui->sbPackagingDepth->setValue(openProj->getVhs().getPackage().getDepth());

//            for(unsigned int i = 0; i < openProj->getVhs().getSubTitleLanguages().size(); ++i){
//                pd.ui->lstSubLang->addItem(QString::fromStdString(openProj->getVhs().getSubTitleLanguages()[i]));
//            }

//        }

//        pd.ui->lblFirstSideContent->setVisible(false);
//        pd.ui->txtFirstSideContent->setDisabled(true);
//        pd.ui->txtFirstSideContent->setVisible(false);

//        pd.ui->lblSecondSideContent->setVisible(false);
//        pd.ui->txtSecondSideContent->setDisabled(true);
//        pd.ui->txtSecondSideContent->setVisible(false);

//        pd.ui->lblExtraLanguageTracks->setVisible(false);
//        pd.ui->cbExtraLanguageTracks->setVisible(false);
//        pd.ui->cmdExtraLanguageTracksAdd->setDisabled(true);
//        pd.ui->cmdExtraLanguageTracksAdd->setVisible(false);
//        pd.ui->cmdExtraLanguageTracksDel->setDisabled(true);
//        pd.ui->cmdExtraLanguageTracksDel->setVisible(false);
//        pd.ui->lstExtraLanguageTracks->setVisible(false);

//        pd.ui->lblExtraSubtitleTracks->setVisible(false);
//        pd.ui->cbExtraSubtitleTracks->setVisible(false);
//        pd.ui->cmdExtraSubtitleTracksAdd->setDisabled(true);
//        pd.ui->cmdExtraSubtitleTracksAdd->setVisible(false);
//        pd.ui->cmdExtraSubtitleTracksDel->setDisabled(true);
//        pd.ui->cmdExtraSubtitleTracksDel->setVisible(false);
//        pd.ui->lstExtraSubtitleTracks->setVisible(false);

//        pd.ui->lblBonusFeatures->setVisible(false);
//        pd.ui->txtBonusFeatures->setVisible(false);
//        pd.ui->cmdBonusFeaturesAdd->setDisabled(true);
//        pd.ui->cmdBonusFeaturesAdd->setVisible(false);
//        pd.ui->cmdBonusFeaturesDel->setDisabled(true);
//        pd.ui->cmdBonusFeaturesDel->setVisible(false);
//        pd.ui->lstBonusFeatures->setVisible(false);

//    }
//    else if(material == "Combo Box"){

//        pd.ui->cbPackagingMaterial->clear();
//        pd.ui->cbPackagingMaterial->addItem("Cardboard");

//        pd.ui->sbMaterialRuntime->setDisabled(true);

//        if(openProj->getComboBox().getTitle() != ""){

//            pd.ui->lblMaterialAnswer->setText("Created");
//            pd.ui->lblMaterialAnswer->setStyleSheet("color: #78CAD2");
//            pd.ui->cmdMaterialDel->setVisible(true);
//            pd.ui->cmdMaterialClear->setText("Clear Changes");
//            pd.ui->cmdMaterialCreate->setText("Apply Changes");

//            pd.ui->txtMaterialIDNum->setText(QString::fromStdString(openProj->getComboBox().getIdNumber()));
//            pd.ui->txtMaterialTitle->setText(QString::fromStdString(openProj->getComboBox().getTitle()));
//            pd.ui->sbMaterialPrice->setValue(openProj->getComboBox().getPrice());
//            pd.ui->sbComboSingleDVD->setValue(openProj->getComboBox().getNumberOfDVDs());
//            pd.ui->sbComboDoubleDVD->setValue(openProj->getComboBox().getNumberofDoubleDVDs());
//            pd.ui->sbPackagingHeight->setValue(openProj->getComboBox().getPackaging().getHeight());
//            pd.ui->sbPackagingWidth->setValue(openProj->getComboBox().getPackaging().getWidth());
//            pd.ui->sbPackagingDepth->setValue(openProj->getComboBox().getPackaging().getDepth());

//            updateComboRuntime();

//        }

//        pd.ui->lblComboSingleDVD->setVisible(true);
//        pd.ui->sbComboSingleDVD->setDisabled(false);
//        pd.ui->sbComboSingleDVD->setVisible(true);

//        pd.ui->lblComboDoubleDVD->setVisible(true);
//        pd.ui->sbComboDoubleDVD->setDisabled(false);
//        pd.ui->sbComboDoubleDVD->setVisible(true);

//        pd.ui->lblVFormat->setVisible(false);
//        pd.ui->cbVFormat->setDisabled(true);
//        pd.ui->cbVFormat->setVisible(false);

//        pd.ui->lblAFormat->setVisible(false);
//        pd.ui->cbAFormat->setDisabled(true);
//        pd.ui->cbAFormat->setVisible(false);

//        pd.ui->lblMaterialLanguage->setVisible(false);
//        pd.ui->cbMaterialLanguage->setDisabled(true);
//        pd.ui->cbMaterialLanguage->setVisible(false);

//        pd.ui->lblMaterialRuntime->setDisabled(true);

//        pd.ui->lblMaterialSubLang->setVisible(false);
//        pd.ui->cbSubLang->setDisabled(true);
//        pd.ui->cbSubLang->setVisible(false);
//        pd.ui->cmdSubLangAdd->setDisabled(true);
//        pd.ui->cmdSubLangAdd->setVisible(false);
//        pd.ui->cmdSubLangDel->setDisabled(true);
//        pd.ui->cmdSubLangDel->setVisible(false);
//        pd.ui->lstSubLang->setVisible(false);

//        pd.ui->lblMaterialFrameAspect->setVisible(false);
//        pd.ui->lblMaterialFrameDescription->setVisible(false);
//        pd.ui->txtFrameDescription->setDisabled(true);
//        pd.ui->txtFrameDescription->setVisible(false);
//        pd.ui->lblMaterialFrameHorizontal->setVisible(false);
//        pd.ui->sbFrameHorizontal->setDisabled(true);
//        pd.ui->sbFrameHorizontal->setVisible(false);
//        pd.ui->lblMaterialFrameVertical->setVisible(false);
//        pd.ui->sbFrameVertical->setDisabled(true);
//        pd.ui->sbFrameVertical->setVisible(false);

//        pd.ui->lblFirstSideContent->setVisible(false);
//        pd.ui->txtFirstSideContent->setDisabled(true);
//        pd.ui->txtFirstSideContent->setVisible(false);

//        pd.ui->lblSecondSideContent->setVisible(false);
//        pd.ui->txtSecondSideContent->setDisabled(true);
//        pd.ui->txtSecondSideContent->setVisible(false);

//        pd.ui->lblExtraLanguageTracks->setVisible(false);
//        pd.ui->cbExtraLanguageTracks->setVisible(false);
//        pd.ui->cmdExtraLanguageTracksAdd->setDisabled(true);
//        pd.ui->cmdExtraLanguageTracksAdd->setVisible(false);
//        pd.ui->cmdExtraLanguageTracksDel->setDisabled(true);
//        pd.ui->cmdExtraLanguageTracksDel->setVisible(false);
//        pd.ui->lstExtraLanguageTracks->setVisible(false);

//        pd.ui->lblExtraSubtitleTracks->setVisible(false);
//        pd.ui->cbExtraSubtitleTracks->setVisible(false);
//        pd.ui->cmdExtraSubtitleTracksAdd->setDisabled(true);
//        pd.ui->cmdExtraSubtitleTracksAdd->setVisible(false);
//        pd.ui->cmdExtraSubtitleTracksDel->setDisabled(true);
//        pd.ui->cmdExtraSubtitleTracksDel->setVisible(false);
//        pd.ui->lstExtraSubtitleTracks->setVisible(false);

//        pd.ui->lblBonusFeatures->setVisible(false);
//        pd.ui->txtBonusFeatures->setVisible(false);
//        pd.ui->cmdBonusFeaturesAdd->setDisabled(true);
//        pd.ui->cmdBonusFeaturesAdd->setVisible(false);
//        pd.ui->cmdBonusFeaturesDel->setDisabled(true);
//        pd.ui->cmdBonusFeaturesDel->setVisible(false);
//        pd.ui->lstBonusFeatures->setVisible(false);

//    }

//    pd.ui->lblMaterialIDNum->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialTitle->setStyleSheet("color: #78CAD2");
//    pd.ui->lblBonusFeatures->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialSubLang->setStyleSheet("color: #78CAD2");
//    pd.ui->lblFirstSideContent->setStyleSheet("color: #78CAD2");
//    pd.ui->lblSecondSideContent->setStyleSheet("color: #78CAD2");
//    pd.ui->lblExtraLanguageTracks->setStyleSheet("color: #78CAD2");
//    pd.ui->lblExtraSubtitleTracks->setStyleSheet("color: #78CAD2");
//    pd.ui->lblBonusFeatures->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialFrameAspect->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialFrameDescription->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialPackage->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialPackageMaterial->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialPrice->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialRuntime->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialPackageHeight->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialPackageWidth->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialPackageDepth->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialFrameHorizontal->setStyleSheet("color: #78CAD2");
//    pd.ui->lblMaterialFrameVertical->setStyleSheet("color: #78CAD2");
//    pd.ui->lblComboSingleDVD->setStyleSheet("color: #78CAD2");
//    pd.ui->lblComboDoubleDVD->setStyleSheet("color: #78CAD2");

//}

//void ProductController::handleProjectWindowMaterialDelete(){

//    std::string material = pd.ui->cbMaterialType->currentText().toStdString();

//    if(material == "DVD Single Sided"){
//        openProj->setSingleDVD(SingleSidedDVD());
//    }else if(material == "DVD Double Sided"){
//        openProj->setTwoDVD(DoubleSidedDVD());
//    }else if(material == "Blu Ray"){
//        openProj->setBluRay(BluRay());
//    }else if(material == "VHS"){
//        openProj->setVhs(VHS());
//    }else if(material == "Combo Box"){
//        openProj->setComboBox(ComboBox());
//    }

//    handleProjectWindowMaterialChange();
//    //handleCreateProject();
//    //handleFilter();

//}

//void ProductController::handleProjectWindowMaterialCreate(){

//    bool submit = true;
//    std::string materialType = pd.ui->cbMaterialType->currentText().toStdString();

//    std::string firstSideContent;
//    std::string secondSideContent;
//    std::string vformat;
//    std::string aformat;
//    std::string language;
//    int frameHorizontal;
//    int frameVertical;
//    int runtime;
//    int comboNumberSingleDVD;
//    int comboNumberDoubleDVD;
//    std::string frameDesc;
//    std::vector<std::string> subLang;
//    std::vector<std::string> extraLanguageTracks;
//    std::vector<std::string> extraSubtitleTracks;
//    std::vector<std::string> bonusFeatures;

//    // Getting data from window
//    std::string title = pd.ui->txtMaterialTitle->text().toStdString();
//    //std::string id = to_string(projList.getNewMaterialId());
//    int price = pd.ui->sbMaterialPrice->value();
//    std::string packagingMaterial = pd.ui->cbPackagingMaterial->currentText().toStdString();
//    int packagingHeight = pd.ui->sbPackagingHeight->value();
//    int packagingWidth = pd.ui->sbPackagingWidth->value();
//    int packagingDepth = pd.ui->sbPackagingDepth->value();

//    if(materialType != "Combo Box"){

//        runtime = pd.ui->sbMaterialRuntime->value();
//        vformat = pd.ui->cbVFormat->currentText().toStdString();
//        aformat = pd.ui->cbAFormat->currentText().toStdString();
//        language = pd.ui->cbMaterialLanguage->currentText().toStdString();
//        frameHorizontal = pd.ui->sbFrameHorizontal->value();
//        frameVertical = pd.ui->sbFrameVertical->value();
//        frameDesc = pd.ui->txtFrameDescription->text().toStdString();

//        for(int i = 0; i < pd.ui->lstSubLang->count(); ++i){
//            subLang.push_back(pd.ui->lstSubLang->item(i)->text().toStdString());
//        }

//        if(materialType != "VHS"){

//            for(int i = 0; i < pd.ui->lstExtraLanguageTracks->count(); ++i){
//                extraLanguageTracks.push_back(pd.ui->lstExtraLanguageTracks->item(i)->text().toStdString());
//            }

//            for(int i = 0; i < pd.ui->lstExtraSubtitleTracks->count(); ++i){
//                extraSubtitleTracks.push_back(pd.ui->lstExtraSubtitleTracks->item(i)->text().toStdString());
//            }

//            for(int i = 0; i < pd.ui->lstBonusFeatures->count(); ++i){
//                bonusFeatures.push_back(pd.ui->lstBonusFeatures->item(i)->text().toStdString());
//            }

//            if(materialType != "Blu Ray"){
//                firstSideContent = pd.ui->txtFirstSideContent->text().toStdString();
//                if(materialType == "DVD Double Sided"){
//                    secondSideContent = pd.ui->txtSecondSideContent->text().toStdString();
//                }
//            }
//        }
//    }else{

//        comboNumberSingleDVD = pd.ui->sbComboSingleDVD->value();
//        comboNumberDoubleDVD = pd.ui->sbComboDoubleDVD->value();

//    }

//    // Error checking
//    if(title == ""){
//        submit = false;
//        pd.ui->lblMaterialTitle->setStyleSheet("color: #D81E5B");
//    }else{
//        pd.ui->lblMaterialTitle->setStyleSheet("color: #78CAD2");
//    }

////    if(id == ""){
////        submit = false;
////        pd.ui->lblMaterialIDNum->setStyleSheet("color: #D81E5B");
////    }else{
////        pd.ui->lblMaterialIDNum->setStyleSheet("color: #78CAD2");
////    }

//    if(price == 0){
//        submit = false;
//        pd.ui->lblMaterialPrice->setStyleSheet("color: #D81E5B");
//    }else{
//        pd.ui->lblMaterialPrice->setStyleSheet("color: #78CAD2");
//    }

//    if(packagingMaterial == ""){
//        submit = false;
//        pd.ui->lblMaterialPackageMaterial->setStyleSheet("color: #D81E5B");
//    }else{
//        pd.ui->lblMaterialPackageMaterial->setStyleSheet("color: #78CAD2");
//    }

//    if(packagingHeight == 0){
//        submit = false;
//        pd.ui->lblMaterialPackageHeight->setStyleSheet("color: #D81E5B");
//    }else{
//        pd.ui->lblMaterialPackageHeight->setStyleSheet("color: #78CAD2");
//    }

//    if(packagingWidth == 0){
//        submit = false;
//        pd.ui->lblMaterialPackageWidth->setStyleSheet("color: #D81E5B");
//    }else{
//        pd.ui->lblMaterialPackageWidth->setStyleSheet("color: #78CAD2");
//    }

//    if(packagingDepth == 0){
//        submit = false;
//        pd.ui->lblMaterialPackageDepth->setStyleSheet("color: #D81E5B");
//    }else{
//        pd.ui->lblMaterialPackageDepth->setStyleSheet("color: #78CAD2");
//    }

//    if(materialType != "Combo Box"){

//        if(runtime == 0){
//            submit = false;
//            pd.ui->lblMaterialRuntime->setStyleSheet("color: #D81E5B");
//        }else{
//            pd.ui->lblMaterialRuntime->setStyleSheet("color: #78CAD2");
//        }

//        if(frameDesc == ""){
//            submit = false;
//            pd.ui->lblMaterialFrameDescription->setStyleSheet("color: #D81E5B");
//        }else{
//            pd.ui->lblMaterialFrameDescription->setStyleSheet("color: #78CAD2");
//        }

//        if(subLang.size() == 0 ||(subLang.size() > 1 && materialType == "VHS")){
//            submit = false;
//            pd.ui->lblMaterialSubLang->setStyleSheet("color: #D81E5B");
//        }else{
//            pd.ui->lblMaterialSubLang->setStyleSheet("color: #78CAD2");
//        }

//        if(frameHorizontal == 0){
//            submit = false;
//            pd.ui->lblMaterialFrameHorizontal->setStyleSheet("color: #D81E5B");
//        }else{
//            pd.ui->lblMaterialFrameHorizontal->setStyleSheet("color: #78CAD2");
//        }

//        if(frameVertical == 0){
//            submit = false;
//            pd.ui->lblMaterialFrameVertical->setStyleSheet("color: #D81E5B");
//        }else{
//            pd.ui->lblMaterialFrameVertical->setStyleSheet("color: #78CAD2");
//        }

//        if(materialType != "VHS"){

//            if(extraLanguageTracks.size() == 0){
//                submit = false;
//                pd.ui->lblExtraLanguageTracks->setStyleSheet("color: #D81E5B");
//            }else{
//                pd.ui->lblExtraLanguageTracks->setStyleSheet("color: #78CAD2");
//            }

//            if(extraSubtitleTracks.size() == 0){
//                submit = false;
//                pd.ui->lblExtraSubtitleTracks->setStyleSheet("color: #D81E5B");
//            }else{
//                pd.ui->lblExtraSubtitleTracks->setStyleSheet("color: #78CAD2");
//            }

//            if(bonusFeatures.size() == 0){
//                submit = false;
//                pd.ui->lblBonusFeatures->setStyleSheet("color: #D81E5B");
//            }else{
//                pd.ui->lblBonusFeatures->setStyleSheet("color: #78CAD2");
//            }

//            if(materialType != "Blu Ray"){

//                if(firstSideContent == ""){
//                    submit = false;
//                    pd.ui->lblFirstSideContent->setStyleSheet("color: #D81E5B");
//                }else{
//                    pd.ui->lblFirstSideContent->setStyleSheet("color: #78CAD2");
//                }

//                if(materialType == "DVD Double Sided"){

//                    if(secondSideContent == ""){
//                        submit = false;
//                        pd.ui->lblSecondSideContent->setStyleSheet("color: #D81E5B");
//                    }else{
//                        pd.ui->lblSecondSideContent->setStyleSheet("color: #78CAD2");
//                    }
//                }
//            }
//        }
//    }else{

//        if(comboNumberSingleDVD == 0){
//            submit = false;
//            pd.ui->lblComboSingleDVD->setStyleSheet("color: #D81E5B");
//        }else{
//            pd.ui->lblComboSingleDVD->setStyleSheet("color: #78CAD2");
//        }

//        if(comboNumberDoubleDVD == 0){
//            submit = false;
//            pd.ui->lblComboDoubleDVD->setStyleSheet("color: #D81E5B");
//        }else{
//            pd.ui->lblComboDoubleDVD->setStyleSheet("color: #78CAD2");
//        }

//    }

//    if(submit == true){

//        Packaging package;
//        package.setMaterial(packagingMaterial);
//        package.setHeight(packagingHeight);
//        package.setWidth(packagingWidth);
//        package.setDepth(packagingDepth);

//        FrameAspect frame;
//        if(materialType != "Combo Box"){
//            frame.setRatioDescription(frameDesc);
//            frame.setHorizontalRatio(frameHorizontal);
//            frame.setVerticalRatio(frameVertical);
//        }

//        if(materialType == "DVD Single Sided"){

//            SingleSidedDVD newMaterial;

//            //newMaterial.setIdNumber(idNumber);
//            newMaterial.setTitle(title);
//            newMaterial.setVFormat(vformat);
//            newMaterial.setAFormat(aformat);
//            newMaterial.setLanguage(language);
//            newMaterial.setPrice(price);
//            newMaterial.setRunTime(runtime);
//            newMaterial.setSubTitleLanguages(subLang);
//            newMaterial.setFrame(frame);
//            newMaterial.setPackage(package);
//            newMaterial.setFirstSideContent(firstSideContent);
//            newMaterial.setExtraLanguageTracks(extraLanguageTracks);
//            newMaterial.setExtraSubtitleTracks(extraSubtitleTracks);
//            newMaterial.setBonusFeatures(bonusFeatures);

//            openProj->setSingleDVD(newMaterial);

//        }else if(materialType == "DVD Double Sided"){

//            DoubleSidedDVD newMaterial;

//            //newMaterial.setIdNumber(id);
//            newMaterial.setTitle(title);
//            newMaterial.setVFormat(vformat);
//            newMaterial.setAFormat(aformat);
//            newMaterial.setLanguage(language);
//            newMaterial.setPrice(price);
//            newMaterial.setRunTime(runtime);
//            newMaterial.setSubTitleLanguages(subLang);
//            newMaterial.setFrame(frame);
//            newMaterial.setPackage(package);
//            newMaterial.setFirstSideContent(firstSideContent);
//            newMaterial.setSecondSideContent(secondSideContent);
//            newMaterial.setExtraLanguageTracks(extraLanguageTracks);
//            newMaterial.setExtraSubtitleTracks(extraSubtitleTracks);
//            newMaterial.setBonusFeatures(bonusFeatures);

//            openProj->setTwoDVD(newMaterial);

//        }else if(materialType == "Blu Ray"){

//            BluRay newMaterial;

//            //newMaterial.setIdNumber(id);
//            newMaterial.setTitle(title);
//            newMaterial.setVFormat(vformat);
//            newMaterial.setAFormat(aformat);
//            newMaterial.setLanguage(language);
//            newMaterial.setPrice(price);
//            newMaterial.setRunTime(runtime);
//            newMaterial.setSubTitleLanguages(subLang);
//            newMaterial.setFrame(frame);
//            newMaterial.setPackage(package);
//            newMaterial.setExtraLanguageTracks(extraLanguageTracks);
//            newMaterial.setExtraSubtitleTracks(extraSubtitleTracks);
//            newMaterial.setBonusTracks(bonusFeatures);

//            openProj->setBluRay(newMaterial);

//        }else if(materialType == "VHS"){

//            VHS newMaterial;

//            //newMaterial.setIdNumber(id);
//            newMaterial.setTitle(title);
//            newMaterial.setVFormat(vformat);
//            newMaterial.setAFormat(aformat);
//            newMaterial.setLanguage(language);
//            newMaterial.setPrice(price);
//            newMaterial.setRunTime(runtime);
//            newMaterial.setSubTitleLanguages(subLang);
//            newMaterial.setFrame(frame);
//            newMaterial.setPackage(package);

//            openProj->setVhs(newMaterial);

//        }else if(materialType == "Combo Box"){

//            ComboBox newMaterial;

//            //newMaterial.setIdNumber(id);
//            newMaterial.setTitle(title);
//            newMaterial.setPrice(price);
//            newMaterial.setPackaging(package);
//            newMaterial.setNumberOfDVDs(comboNumberSingleDVD);
//            newMaterial.setNumberofDoubleDVDs(comboNumberDoubleDVD);

//            openProj->setComboBox(newMaterial);

//        }

//        handleProjectWindowMaterialChange();
//        //handleCreateProject();
//        //handleFilter();

//    }

//}

//void ProductController::handleProjectWindowSubLangAdd(){

//    QString input = pd.ui->cbSubLang->currentText();
//    bool addOption = true;

//    std::vector<std::string> languages;
//    for(int i = 0; i < pd.ui->lstSubLang->count(); ++i){
//        languages.push_back(pd.ui->lstSubLang->item(i)->text().toStdString());
//    }

//    for(unsigned int j = 0; j < languages.size(); ++j){
//        if(input.toStdString() == languages[j]){
//            addOption = false;
//        }
//    }

//    if(addOption){
//        pd.ui->lstSubLang->addItem(input);
//    }

//    pd.ui->cbSubLang->setCurrentIndex(0);

//}

//void ProductController::handleProjectWindowSubLangDel(){

//    QList <QListWidgetItem *> selectedItems = pd.ui->lstSubLang->selectedItems();
//    for(int i = 0; i < selectedItems.size(); i++){
//        delete pd.ui->lstSubLang->takeItem(pd.ui->lstSubLang->row(selectedItems[i]));
//    }

//}

//void ProductController::handleProjectWindowExtraLangAdd(){

//    QString input = pd.ui->cbExtraLanguageTracks->currentText();
//    bool addOption = true;

//    std::vector<std::string> languages;
//    for(int i = 0; i < pd.ui->lstExtraLanguageTracks->count(); ++i){
//        languages.push_back(pd.ui->lstExtraLanguageTracks->item(i)->text().toStdString());
//    }

//    for(unsigned int j = 0; j < languages.size(); ++j){
//        if(input.toStdString() == languages[j]){
//            addOption = false;
//        }
//    }

//    if(addOption){
//        pd.ui->lstExtraLanguageTracks->addItem(input);
//    }

//    pd.ui->cbExtraLanguageTracks->setCurrentIndex(0);

//}

//void ProductController::handleProjectWindowExtraLangDel(){

//    QList <QListWidgetItem *> selectedItems = pd.ui->lstExtraLanguageTracks->selectedItems();
//    for(int i = 0; i < selectedItems.size(); i++){
//        delete pd.ui->lstExtraLanguageTracks->takeItem(pd.ui->lstExtraLanguageTracks->row(selectedItems[i]));
//    }

//}

//void ProductController::handleProjectWindowExtraSubLangAdd(){

//    QString input = pd.ui->cbExtraSubtitleTracks->currentText();
//    bool addOption = true;

//    std::vector<std::string> languages;
//    for(int i = 0; i < pd.ui->lstExtraSubtitleTracks->count(); ++i){
//        languages.push_back(pd.ui->lstExtraSubtitleTracks->item(i)->text().toStdString());
//    }

//    for(unsigned int j = 0; j < languages.size(); ++j){
//        if(input.toStdString() == languages[j]){
//            addOption = false;
//        }
//    }

//    if(addOption){
//        pd.ui->lstExtraSubtitleTracks->addItem(input);
//    }

//    pd.ui->cbExtraSubtitleTracks->setCurrentIndex(0);

//}

//void ProductController::handleProjectWindowExtraSubLangDel(){

//    QList <QListWidgetItem *> selectedItems = pd.ui->lstExtraSubtitleTracks->selectedItems();
//    for(int i = 0; i < selectedItems.size(); i++){
//        delete pd.ui->lstExtraSubtitleTracks->takeItem(pd.ui->lstExtraSubtitleTracks->row(selectedItems[i]));
//    }

//}

//void ProductController::handleProjectWindowBonusAdd(){

//    QString input = pd.ui->txtBonusFeatures->text();
//    if(input.toStdString() != ""){
//        pd.ui->lstBonusFeatures->addItem(input);
//    }
//    pd.ui->txtBonusFeatures->clear();

//}

//void ProductController::handleProjectWindowBonusDel(){

//    QList <QListWidgetItem *> selectedItems = pd.ui->lstBonusFeatures->selectedItems();
//    for(int i = 0; i < selectedItems.size(); i++){
//        delete pd.ui->lstBonusFeatures->takeItem(pd.ui->lstBonusFeatures->row(selectedItems[i]));
//    }

//}


//void ProductController::updateComboRuntime(){

//    int numOfSingle = pd.ui->sbComboSingleDVD->value();
//    int numOfDouble = pd.ui->sbComboDoubleDVD->value();
//    int runtimeSingle = openProj->getSingleDVD().getRunTime();
//    int runtimeDouble = openProj->getTwoDVD().getRunTime();

//    pd.ui->sbMaterialRuntime->setValue((numOfSingle * runtimeSingle) + (numOfDouble * runtimeDouble));

//}

//void ProductController::updateMinimumPackage(){

//    int numOfSingle = pd.ui->sbComboSingleDVD->value();
//    int numOfDouble = pd.ui->sbComboDoubleDVD->value();

//    unsigned int minHeight = 0;
//    unsigned int minWidth = 0;
//    unsigned int minDepth = 0;

//    pd.ui->sbPackagingHeight->setMinimum(0);
//    pd.ui->sbPackagingWidth->setMinimum(0);
//    pd.ui->sbPackagingDepth->setMinimum(0);

//    pd.ui->sbPackagingHeight->setValue(0);
//    pd.ui->sbPackagingWidth->setValue(0);
//    pd.ui->sbPackagingDepth->setValue(0);

//    if(pd.ui->sbComboSingleDVD->value() != 0){

//        minHeight = openProj->getSingleDVD().getPackage().getHeight();
//        minWidth = openProj->getSingleDVD().getPackage().getWidth();

//    }

//    if(pd.ui->sbComboDoubleDVD->value() != 0){

//        if(minHeight < openProj->getTwoDVD().getPackage().getHeight()){
//            minHeight = openProj->getTwoDVD().getPackage().getHeight();
//        }

//        if(minWidth < openProj->getTwoDVD().getPackage().getWidth()){
//            minWidth = openProj->getTwoDVD().getPackage().getWidth();
//        }

//    }

//    minDepth = (openProj->getSingleDVD().getPackage().getDepth() * numOfSingle)  \
//            + (openProj->getTwoDVD().getPackage().getDepth() * numOfDouble);

//    pd.ui->sbPackagingHeight->setMinimum(minHeight);
//    pd.ui->sbPackagingWidth->setMinimum(minWidth);
//    pd.ui->sbPackagingDepth->setMinimum(minDepth);

//}
