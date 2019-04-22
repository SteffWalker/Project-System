#include <iostream>
#include "projectmodel.h"

projectModel::projectModel()
{

}

void projectModel::output()
{
    std::cout << this->title << std::endl;
    std::cout << this->summary << std::endl;
    std::cout << this->status << std::endl;
    std::cout << this->genre << std::endl;
    std::cout << this->language << std::endl;
    std::cout << this->runtime << std::endl;
    std::cout << this->sales << std::endl;

}

void projectModel::setValue(int var, QString input)
{
    switch(var)
    {
        case 1 : //title
            this->title = input.toStdString();
            break;
    case 2  :   //Status
        this->status = input.toStdString();
        break;
    case 3  :   //Genre
        this->genre = input.toStdString();
        break;
    case 4  :   //language
        this->language = input.toStdString();
        break;
    }
}

void projectModel::setValue(int var, QTextDocument* input)
{
    switch(var)
    {
        case 1  :   // Summary
            QString string = input->toPlainText();
            this->summary = string.toStdString();
            break;
    }
}

void projectModel::setValue(QDate input)
{
    this->releaseDate = input;  // Release Date
}

void projectModel::setValue(int var, int input)
{
    switch(var)
        {
            case 1  :   // Run Time
                this->runtime = input;
                break;
            case 2  :   // Sales
                this->sales = input;
                break;
        }
}
