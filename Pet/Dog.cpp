#include "Dog.h"

Dog::Dog() : Pet()
{
    breed = "Unknown";
    age = 0;
}

Dog::Dog(string n, string b, int a) : Pet(n)
{
    breed = b;
    age = a;
}

Dog::Dog(const Dog& obj) : Pet(obj)
{
    breed = obj.breed;
    age = obj.age;
}

void Dog::show()
{
    cout << "DOG" << endl;
    Pet::show();
    cout << "Breed: " << breed << endl;
    cout << "Age: " << age << endl;
}

void Dog::sound()
{
    cout << "Sound: Bark Bark" << endl;
}

void Dog::type()
{
    cout << "Type: Dog" << endl;
}