#ifndef PROJECTMODEL_H
#define PROJECTMODEL_H

#include <string>
#include <vector>
#include "date.h"

class projectModel
{
public:
    projectModel();

private:
    int projectID;
    std::string title;
    std::string summary;
    std::string genre;
    date releaseDate;
    std::vector <std::string> locations;
    std::string language;
    int runtime;
    std::vector <std::string> keywords;
    double sale;
};

#endif // PROJECTMODEL_H
