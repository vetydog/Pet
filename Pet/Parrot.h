#pragma once
#include "Pet.h"

class Parrot : public Pet
{
private:
    bool canTalk;

public:
    Parrot();
    Parrot(string n, bool talk);
    Parrot(const Parrot& obj);

    void show() override;
    void sound() override;
    void type() override;
};