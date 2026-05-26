#include "Pet.h"

Pet::Pet()
{
    name = "Unknown";
}

Pet::Pet(string n)
{
    name = n;
}

Pet::Pet(const Pet& obj)
{
    name = obj.name;
}

void Pet::setName(string n)
{
    name = n;
}

string Pet::getName()
{
    return name;
}

void Pet::show()
{
    cout << "Name: " << name << endl;
}