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
    void setValue(int var, QString input);
    void setValue(int var, int input);
    void setValue(int var, QTextDocument* input);
    void setValue(QDate input);
    void output();  // Testing function

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
