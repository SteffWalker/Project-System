#include <iostream>
#include "projectmodel.h"
#include "newproject.h"
#include "ui_newproject.h"

projectModel::projectModel(std::string title, std::string summary, std::string genre, QDate releaseDate, std::string status,
                           std::vector <std::string> locations, std::string language, int runtime, std::vector <std::string> keywords,
                           double sales)
{
    this->title = title;
    this->summary = summary;
    this->genre = genre;
    this->releaseDate = releaseDate;
    this->status = status;
    this->locations = locations;
    this->language = language;
    this->runtime = runtime;
    this->keywords = keywords;
    this->sales = sales;
    std::cout << "Project successfully created" << std::endl;
}

std::string projectModel::getTitle()
{
    return this->title;
}

