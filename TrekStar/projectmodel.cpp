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

projectModel::projectModel()
{
}

unsigned long projectModel::getID()
{
    return this->projectID;
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

std::string projectModel::getLocations()
{
    if(this->locations.empty())
    {
        return " ";
    }
    std::string locations;
    locations.append("{");
    for(int i = 0; i<this->locations.size(); i++)
    {
        if(i==this->locations.size()-1)
        {
            locations.append(this->locations.at(i) + "}");
            return locations;
        }
        locations.append(this->locations.at(i) + ", ");
    }
}

std::string projectModel::getLanguage()
{
    return this->language;
}

int projectModel::getRuntime()
{
    return this->runtime;
}

std::string projectModel::getKeywords()
{
    if(this->keywords.empty())
    {
        return " ";
    }

    std::string keywords;
    keywords.append("{");
    for(int i = 0; i<this->keywords.size(); i++)
    {
        if(i==this->keywords.size()-1)
        {
            keywords.append(this->keywords.at(i) + "}");
            return keywords;
        }
        keywords.append(this->keywords.at(i) + ", ");
    }
}

double projectModel::getSales()
{
    return this->sales;
}

void projectModel::setTitle(std::string title)
{
    this->title = title;
}

void projectModel::setSummary(std::string summary)
{
    this->summary = summary;
}

void projectModel::setGenre(std::string genre)
{
    this->genre = genre;
}
void projectModel::setReleaseDate(QDate releaseDate)
{
    this->releaseDate = releaseDate;
}

void projectModel::setStatus(std::string status)
{
    this->status = status;
}

void projectModel::setLocations(std::vector <std::string> locations)
{
    this->locations = locations;
}

void projectModel::setLanguage(std::string language)
{
    this->language = language;
}

void projectModel::setRuntime(int runtime)
{
    this->runtime = runtime;
}

void projectModel::setKeywords(std::vector <std::string> keywords)
{
    this->keywords = keywords;
}

void projectModel::setSales(double sales)
{
    this->sales = sales;
}

