#ifndef PROJECT_H
#define PROJECT_H
#include <string>
#include "date.h"

class project
{

public:
    project();
    int projectID;
    std::string title;
    std::string summary;
    std::string genre;
    date projectDate;

};

#endif // PROJECT_H
