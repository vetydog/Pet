#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Pet.h"

int main() {
    Dog d("Rex", "Husky", 5);
    Cat c("Murka", "Black", 3);
    Parrot p("Kesha", true);

    d.showInfo();
    c.showInfo();
    p.showInfo();
}