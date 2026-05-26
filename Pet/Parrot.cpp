#include "Parrot.h"

Parrot::Parrot() : Pet()
{
    canTalk = false;
}

Parrot::Parrot(string n, bool talk) : Pet(n)
{
    canTalk = talk;
}

Parrot::Parrot(const Parrot& obj) : Pet(obj)
{
    canTalk = obj.canTalk;
}

void Parrot::show()
{
    cout << "PARROT" << endl;
    Pet::show();
    cout << "Can talk: " << (canTalk ? "Yes" : "No") << endl;
}

void Parrot::sound()
{
    cout << "Sound: Squawk" << endl;
}

void Parrot::type()
{
    cout << "Type: Parrot" << endl;
}