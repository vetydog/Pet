#include "Hamster.h"

Hamster::Hamster() : Pet()
{
    wheelSpeed = 0;
}

Hamster::Hamster(string n, int w) : Pet(n)
{
    wheelSpeed = w;
}

Hamster::Hamster(const Hamster& obj) : Pet(obj)
{
    wheelSpeed = obj.wheelSpeed;
}

void Hamster::show()
{
    cout << "HAMSTER" << endl;
    Pet::show();
    cout << "Wheel speed: " << wheelSpeed << endl;
}

void Hamster::sound()
{
    cout << "Sound: Squeak" << endl;
}

void Hamster::type()
{
    cout << "Type: Hamster" << endl;
}