#ifndef PROJECTMODEL_H
#define PROJECTMODEL_H

#include <string>
#include <vector>
#include <QString>
#include <QTextEdit>
#include <QDate>


class projectModel
{
public:
    projectModel(std::string title, std::string summary, std::string genre, QDate releaseDate, std::string status,
                 std::vector <std::string> locations, std::string language, int runtime, std::vector <std::string> keywords,
                 double sales);
    std::string getTitle();

private:
    int projectID;
    std::string title;
    std::string summary;
    std::string genre;
    QDate releaseDate;
    std::string status;
    std::vector <std::string> locations;
    std::string language;
    int runtime;
    std::vector <std::string> keywords;
    double sales;
};

#endif // PROJECTMODEL_H
