#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Hamster.h"

int main()
{
    Dog d("Rex", "Labrador", 5);
    Cat c("Murka", "Black", 9);
    Parrot p("Kesha", true);
    Hamster h("Bob", 10);

    d.show();
    d.sound();
    d.type();
    cout << endl;

    c.show();
    c.sound();
    c.type();
    cout << endl;

    p.show();
    p.sound();
    p.type();
    cout << endl;

    h.show();
    h.sound();
    h.type();
    cout << endl;
}