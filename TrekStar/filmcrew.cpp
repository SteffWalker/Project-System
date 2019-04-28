#include "filmcrew.h"

FilmCrew::FilmCrew()
{

}

string FilmCrew::getName() const
{
    return name;
}

void FilmCrew::setName(const string &value)
{
    name = value;
}

string FilmCrew::getDateOfBirth() const
{
    return dateOfBirth;
}

void FilmCrew::setDateOfBirth(const string &value)
{
    dateOfBirth = value;
}

string FilmCrew::getIdNumber() const
{
    return idNumber;
}

void FilmCrew::setIdNumber(const string &value)
{
    idNumber = value;
}

string FilmCrew::getTitle() const
{
    return title;
}

void FilmCrew::setTitle(const string &value)
{
    title = value;
}

int FilmCrew::getYearsOfExperience() const
{
    return yearsOfExperience;
}

void FilmCrew::setYearsOfExperience(int value)
{
    yearsOfExperience = value;
}

vector<string> FilmCrew::getLocationsWorkedAt() const
{
    return locationsWorkedAt;
}

void FilmCrew::setLocationsWorkedAt(const vector<string> &value)
{
    locationsWorkedAt = value;
}

string FilmCrew::getRole() const
{
    return role;
}

void FilmCrew::setRole(const string &value)
{
    role = value;
}


FilmCrew::FilmCrew(string name, string dateOfBirth, string idNumber, string title, string role, int yearsOfExperience, vector<string> locationsWorkedAt)
{
    this->name=name;
    this->dateOfBirth=dateOfBirth;
    this->idNumber=idNumber;
    this->title=title;
    this->role=role;
    this->yearsOfExperience=yearsOfExperience;
    this->locationsWorkedAt=locationsWorkedAt;
}
