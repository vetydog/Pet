#pragma once
#include "Pet.h"
#include <iostream>
using namespace std;
class Parrot : 
    public Pet {
private:
    bool canTalk;

public:
    Parrot();
    Parrot(string n, bool talk);

    void showInfo();
};

