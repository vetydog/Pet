#include "Parrot.h"

Parrot::Parrot() : Pet(" "), canTalk{false} {};
Parrot::Parrot(string n, bool talk) : Pet(n) {
    canTalk = talk;
}

void Parrot::showInfo() {
    cout << "PARROT\n";
    showName();
    cout << "Can talk: " << (canTalk ? "Yes" : "No") << endl;
    cout << "Sound: Squawk\n\n";
}