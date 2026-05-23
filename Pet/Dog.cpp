#include "Dog.h"

Dog::Dog() : Pet(" "), breed(" "),age (0) {}
Dog::Dog(string n, string b, int a) : Pet(n) {
    breed = b;
    age = a;
}

void Dog::showInfo() {
    cout << "DOG\n";
    showName();
    cout << "Breed: " << breed << endl;
    cout << "Age: " << age << endl;
    cout << "Sound: Bark Bark\n\n";
}