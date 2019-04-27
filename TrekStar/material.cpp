#include "material.h"
#include "frameaspect.h"


string Material::getIdNumber() const
{
    return idNumber;
}

void Material::setIdNumber(const string &value)
{
    idNumber = value;
}

string Material::getTitle() const
{
    return title;
}

void Material::setTitle(const string &value)
{
    title = value;
}

string Material::getVFormat() const
{
    return vFormat;
}

void Material::setVFormat(const string &value)
{
    vFormat = value;
}

string Material::getAFormat() const
{
    return aFormat;
}

void Material::setAFormat(const string &value)
{
    aFormat = value;
}

string Material::getLanguage() const
{
    return language;
}

void Material::setLanguage(const string &value)
{
    language = value;
}

int Material::getRunTime() const
{
    return runTime;
}

void Material::setRunTime(int value)
{
    runTime = value;
}

float Material::getPrice() const
{
    return price;
}

void Material::setPrice(float value)
{
    price = value;
}

vector<string> Material::getSubTitleLanguages() const
{
    return subTitleLanguages;
}

void Material::setSubTitleLanguages(const vector<string> &value)
{
    subTitleLanguages = value;
}

FrameAspect Material::getFrame() const
{
    return frame;
}

void Material::setFrame(const FrameAspect &value)
{
    frame = value;
}

Packaging Material::getPackage() const
{
    return package;
}

void Material::setPackage(const Packaging &value)
{
    package = value;
}

Material::Material(string idNumber, string title, string vFormat, string aFormat, string language,
                   FrameAspect frame, Packaging package, int runTime, float price,
                   vector<string> subTitleLanguages)
{
    this->idNumber=idNumber;
    this->title=title;
    this->vFormat=vFormat;
    this->aFormat=aFormat;
    this->language=language;
    this->frame=frame;
    this->package=package;
    this->runTime=runTime;
    this->price=price;
    this->subTitleLanguages=subTitleLanguages;
}
