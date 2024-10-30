#include "Product.h"

products::Product::Product()
{
    name = "none";
    price = 0;
    manufacture = "none";
    age = 0;


}

products::Product::Product(std::string name, float price, std::string manufacture, int age)
{
    this->name = name;
    this->price = price;
    this->manufacture = manufacture;
    this->age = age;
}

products::Product::~Product()
{
}

void products::Product::setName(std::string name)
{
    this->name = name;
}

void products::Product::setPrice(float price)
{
    this->price = price;
}

void products::Product::setManufacture(std::string manufacture)
{
    this->manufacture = manufacture;
}

void products::Product::setAge(int age)
{
    this->age = age;
}

std::string products::Product::getName() const
{
    return name;
}

float products::Product::getPrice() const
{
    return price;
}

std::string products::Product::getManufacture() const
{
    return manufacture;
}

int products::Product::getAge() const
{
    return age;
}
