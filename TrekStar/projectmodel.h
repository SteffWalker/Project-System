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
    projectModel();

    unsigned long getID();
    std::string getTitle();
    std::string getSummary();
    std::string getGenre();
    QDate getReleaseDate();
    std::string getStatus();
    std::string getLocations();
    std::string getLanguage();
    int getRuntime();
    std::string getKeywords();
    double getSales();

    void setTitle(std::string title);
    void setSummary(std::string summary);
    void setGenre(std::string genre);
    void setReleaseDate(QDate releaseDate);
    void setStatus(std::string status);
    void setLocations(std::vector <std::string> locations);
    void setLanguage(std::string language);
    void setRuntime(int runtime);
    void setKeywords(std::vector <std::string> keywords);
    void setSales(double sales);

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
