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
    cout << "Toy: " << endl;
    cout << "Name: " << name << "\nPrice: " << price << endl
        << "Manufacture: " << manufacture << endl
        << "Age: " << age << endl <<
        "Material: " << material << endl << endl;

}

float fun::Toy::calcPrice() const
{
    float total = price;
    if (material.find("nature") != -1) 
    {
        total *= 1.3;

    }
    if (age <= 3) {
        total *= 1.1;
    }
    return total;
}
