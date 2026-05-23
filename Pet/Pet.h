#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pet {
protected:
    string name;

public:
    Pet();
    Pet(string n);

    void showName();
};

