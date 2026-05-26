#pragma once
#include "Pet.h"

class Dog : public Pet
{
private:
    string breed;
    int age;

public:
    Dog();
    Dog(string n, string b, int a);
    Dog(const Dog& obj);

    void show() override;
    void sound() override;
    void type() override;
};