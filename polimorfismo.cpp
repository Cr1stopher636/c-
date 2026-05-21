#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:

    void animalSound() {
        cout << "the animal make a sound \n" << endl;
    }
};


class Cerdo : public Animal {
    public:

    void animalSound() {
        cout << "pig pig el cerdo \n" << endl;
    }
};


class Perro : public Animal {
    public:

    void animalSound() {
        cout << "guau guau el perro \n" << endl;
    }
};


int main() {
    Animal a1;
    Cerdo miCerdo;
    Perro miPerro;

    a1.animalSound();
    miCerdo.animalSound();
    miPerro.animalSound();

    return 0;
}