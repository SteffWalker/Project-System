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
    projectModel(unsigned long projectID, std::string title, std::string summary, std::string genre, QDate releaseDate, std::string status,
                 std::vector <std::string> locations, std::string language, int runtime, std::vector <std::string> keywords,
                 double sales);
    std::string getTitle();
    std::string getSummary();
    std::string getGenre();
    QDate getReleaseDate();
    std::string getStatus();
    std::vector<std::string> getLocations();
    std::string getLanguage();
    int getRuntime();
    std::vector<std::string> getKeywords();
    double getSales();

private:
    unsigned long projectID;
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
