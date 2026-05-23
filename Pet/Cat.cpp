#include "Cat.h"

Cat::Cat() : Pet(" "), color(" "), lives(0) {}
Cat::Cat(string n, string c, int l) : Pet(n) {
    color = c;
    lives = l;
}

void Cat::showInfo() {
    cout << "CAT\n";
    showName();
    cout << "Color: " << color << endl;
    cout << "Lives: " << lives << endl;
    cout << "Sound: Meow\n\n";
}