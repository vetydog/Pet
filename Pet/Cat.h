#pragma once
#include "Pet.h"
#include <string>
#include <iostream>
using namespace std;

class Cat : public Pet {
private:
    string color;
    int lives;

public:
    Cat();
    Cat(string n, string c, int l);

    void showInfo();
};

