#pragma once
#include "Pet.h"

class Hamster : public Pet
{
private:
    int wheelSpeed;

public:
    Hamster();
    Hamster(string n, int w);
    Hamster(const Hamster& obj);

    void show() override;
    void sound() override;
    void type() override;
};