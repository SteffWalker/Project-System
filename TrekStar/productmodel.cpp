#include "productmodel.h"

productModel::productModel()
{

}
#include "productModel.h"
#include "frameaspect.h"


string productModel::getIdNumber() const
{
    return idNumber;
}

void productModel::setIdNumber(const string &value)
{
    idNumber = value;
}

string productModel::getTitle() const
{
    return title;
}

void productModel::setTitle(const string &value)
{
    title = value;
}

string productModel::getVFormat() const
{
    return vFormat;
}

void productModel::setVFormat(const string &value)
{
    vFormat = value;
}

string productModel::getAFormat() const
{
    return aFormat;
}

void productModel::setAFormat(const string &value)
{
    aFormat = value;
}

string productModel::getLanguage() const
{
    return language;
}

void productModel::setLanguage(const string &value)
{
    language = value;
}

int productModel::getRunTime() const
{
    return runTime;
}

void productModel::setRunTime(int value)
{
    runTime = value;
}

float productModel::getPrice() const
{
    return price;
}

void productModel::setPrice(float value)
{
    price = value;
}

vector<string> productModel::getSubTitleLanguages() const
{
    return subTitleLanguages;
}

void productModel::setSubTitleLanguages(const vector<string> &value)
{
    subTitleLanguages = value;
}

FrameAspect productModel::getFrame() const
{
    return frame;
}

void productModel::setFrame(const FrameAspect &value)
{
    frame = value;
}

Packaging productModel::getPackage() const
{
    return package;
}

void productModel::setPackage(const Packaging &value)
{
    package = value;
}


productModel::productModel(string idNumber, string title, string vFormat, string aFormat, string language,
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
