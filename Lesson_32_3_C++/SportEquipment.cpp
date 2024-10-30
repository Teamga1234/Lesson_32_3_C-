#include "SportEquipment.h"

products::sport::SportEquipment::SportEquipment()
{
    weight = 0;
    type_sport = "none";
}

products::sport::SportEquipment::SportEquipment(std::string name, float price, std::string manufacture, int age, float weight, std::string type_sport):
    Product(name, price, manufacture, age)
{
    this->weight = weight;
    this->type_sport = type_sport;
}

void products::sport::SportEquipment::setWeight(float weight)
{
    this->weight = weight;
}

void products::sport::SportEquipment::setTypeSport(std::string type_sport)
{
    this->type_sport = type_sport;
}

std::string products::sport::SportEquipment::getTypeSport() const
{
    return type_sport;
}

float products::sport::SportEquipment::getWeight() const
{
    return weight;
}

void products::sport::SportEquipment::show() const
{
    cout << "Sport equipment: " << endl;
    cout << "Name: " << name << "\nPrice: " << price << endl
        << "Manufacture: " << manufacture << endl
        << "Age: " << age << endl <<
        "Weight: " << weight << endl
        << "Type sport: " << type_sport << endl << endl;
        
}

float products::sport::SportEquipment::calcPrice() const
{
    float total = price;
    if (weight > 10)
    {
        total += price * ((int)weight - 10) * 5 / 100.0;
    }
    if (age < 12)
    {
        total *= 1.1;
    }
    return total;
}
