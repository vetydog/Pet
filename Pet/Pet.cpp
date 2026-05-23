#include "Pet.h"

Pet::Pet() : name(" ") {};

Pet::Pet(string n) {
    name = n;
}

void Pet::showName() {
    cout << "Name: " << name << endl;
}
