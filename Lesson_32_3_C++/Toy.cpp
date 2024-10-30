#include "Toy.h"

fun::Toy::Toy()
{
    material = "none";
}

fun::Toy::Toy(std::string name, float price, std::string manufacture, int age, std::string material):
    products::Product(name, price, manufacture, age)
{
    this->material = material;
}

void fun::Toy::setMaterial(std::string material)
{
    this->material = material;
}

std::string fun::Toy::getMaterial() const
{
    return material;
}

void fun::Toy::show() const
{
}

float fun::Toy::calcPrice() const
{
    return 0.0f;
}
