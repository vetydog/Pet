#include "Cat.h"

Cat::Cat() : Pet()
{
    color = "Unknown";
    lives = 9;
}

Cat::Cat(string n, string c, int l) : Pet(n)
{
    color = c;
    lives = l;
}

Cat::Cat(const Cat& obj) : Pet(obj)
{
    color = obj.color;
    lives = obj.lives;
}

void Cat::show()
{
    cout << "CAT" << endl;
    Pet::show();
    cout << "Color: " << color << endl;
    cout << "Lives: " << lives << endl;
}

void Cat::sound()
{
    cout << "Sound: Meow" << endl;
}

void Cat::type()
{
    cout << "Type: Cat" << endl;
}