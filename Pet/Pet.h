#pragma once
#include <iostream>
using namespace std;

class Pet
{
protected:
    string name;

public:
    Pet();
    Pet(string n);
    Pet(const Pet& obj);

    void setName(string n);
    string getName();

    virtual void show();
    virtual void sound() =0;
    virtual void type()=0;

    virtual ~Pet() {}
};