#include "packaging.h"

string Packaging::getMaterial() const
{
    return material;
}

void Packaging::setMaterial(const string &value)
{
    material = value;
}

unsigned int Packaging::getHeight() const
{
    return height;
}

void Packaging::setHeight(unsigned int value)
{
    height = value;
}

unsigned int Packaging::getWidth() const
{
    return width;
}

void Packaging::setWidth(unsigned int value)
{
    width = value;
}

unsigned int Packaging::getDepth() const
{
    return depth;
}

void Packaging::setDepth(unsigned int value)
{
    depth = value;
}

Packaging::Packaging(string material, unsigned int height, unsigned int width, unsigned int depth)
{
    this->material=material;
    this->height=height;
    this->width=width;
    this->depth=depth;
}
