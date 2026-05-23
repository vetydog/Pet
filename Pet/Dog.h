#pragma once
#include "Pet.h"
#include <string>
#include <iostream>
using namespace std;
class Dog : public Pet {
private:
    string breed;
    int age;

public:
    Dog();
    Dog(string n, string b, int a);

    void showInfo();
};

