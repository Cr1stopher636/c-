#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:

    string nombre;
    int edad;

  
    //Metodos ------ Cuando una funcion esta dentro de una clase (Animal) <-- es la clase
    void caminar() {
        cout << "El animal " << nombre << "esta caminando" << endl;
    }

    void comer() {
        cout << "El animal " << nombre << "esta comiendo" << endl;
    }


    Animal () {
        nombre = "";
        edad = 0;
    }


    Animal(string nombre, int edad) {
        cout << "El animal es un " << nombre << " y tiene " << edad << " años de edad" << endl;
    }
};


int main() {
    Animal a1("cocodrilo", 5);
    a1.comer();
    a1.caminar();
}

