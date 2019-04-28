#include "combobox.h"

unsigned int ComboBox::getNumberOfDVDs() const
{
    return numberOfDVDs;
}

void ComboBox::setNumberOfDVDs(unsigned int value)
{
    numberOfDVDs = value;
}

vector<string> ComboBox::getIdsOfDVDs() const
{
    return idsOfDVDs;
}

void ComboBox::setIdsOfDVDs(const vector<string> &value)
{
    idsOfDVDs = value;
}

vector<SingleSidedDVD> ComboBox::getSingleDVDs() const
{
    return SingleDVDs;
}

void ComboBox::setSingleDVDs(const vector<SingleSidedDVD> &value)
{
    SingleDVDs = value;
}

vector<DoubleSidedDVD> ComboBox::getDoubleDVDs() const
{
    return DoubleDVDs;
}

void ComboBox::setDoubleDVDs(const vector<DoubleSidedDVD> &value)
{
    DoubleDVDs = value;
}

string ComboBox::getIdNumber() const
{
    return idNumber;
}

void ComboBox::setIdNumber(const string &value)
{
    idNumber = value;
}

string ComboBox::getTitle() const
{
    return title;
}

void ComboBox::setTitle(const string &value)
{
    title = value;
}

Packaging ComboBox::getPackaging() const
{
    return packaging;
}

void ComboBox::setPackaging(const Packaging &value)
{
    packaging = value;
}

float ComboBox::getPrice() const
{
    return price;
}

void ComboBox::setPrice(float value)
{
    price = value;
}


unsigned int ComboBox::getNumberofDoubleDVDs() const
{
    return numberofDoubleDVDs;
}

void ComboBox::setNumberofDoubleDVDs(unsigned int value)
{
    numberofDoubleDVDs = value;
}

ComboBox::ComboBox()
{

}

ComboBox::ComboBox(unsigned int numberOfDVDs, vector<string> idsOfDVDs,
                   vector<SingleSidedDVD> SingleDVDs, vector<DoubleSidedDVD> DoubleDVDs,
                   string idNumber, string title, Packaging packaging, float price,
                   unsigned int numberOfDoubleDVDs)
{
    this->numberOfDVDs=numberOfDVDs;
    this->idsOfDVDs=idsOfDVDs;
    this->SingleDVDs=SingleDVDs;
    this->DoubleDVDs=DoubleDVDs;
    this->idNumber=idNumber;
    this->title=title;
    this->packaging=packaging;
    this->price=price;
    this->numberofDoubleDVDs=numberOfDoubleDVDs;
}
