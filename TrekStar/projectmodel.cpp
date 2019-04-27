#include <iostream>
#include "projectmodel.h"
#include "newproject.h"
#include "ui_newproject.h"

projectModel::projectModel(unsigned long projectID, std::string title, std::string summary, std::string genre, QDate releaseDate, std::string status,
                           std::vector <std::string> locations, std::string language, int runtime, std::vector <std::string> keywords,
                           double sales)
{
    this->projectID = projectID;
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

std::string projectModel::getSummary()
{
    return this->summary;
}

std::string projectModel::getGenre()
{
    return this->genre;
}

QDate projectModel::getReleaseDate()
{
    return this->releaseDate;
}

std::string projectModel::getStatus()
{
    return this->status;
}

std::vector <std::string> projectModel::getLocations()
{
    return this->locations;
}

std::string projectModel::getLanguage()
{
    return this->language;
}

int projectModel::getRuntime()
{
    return this->runtime;
}

std::vector <std::string> projectModel::getKeywords()
{
    return this->keywords;
}

double projectModel::getSales()
{
    return this->sales;
}

