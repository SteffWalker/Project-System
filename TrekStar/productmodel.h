#ifndef PRODUCTMODEL_H
#define PRODUCTMODEL_H

#include <string>
#include <vector>

class productModel
{
public:
    productModel();

private:
    int productID;
    std::string title;
    //format
    std::vector <std::string> audioFormat;
    int runtime;
    std::string language;
    double price;
    std::string subtitle;
    std::vector <std::string> frameAspect;
    std::vector <std::string> packaging;

};

#endif // PRODUCTMODEL_H
