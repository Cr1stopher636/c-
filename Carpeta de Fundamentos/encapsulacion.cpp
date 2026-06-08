#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:

    string nombre;
    string especie;



    public:

    // set() guarda el valor 
    // get() devuelve el valor guardado dento del objeto nombre

    void setNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    string getNombre() {
        return nombre;
    }


    void setEspecie(string nuevaEspecie) {
        especie = nuevaEspecie;
    }

    string getEspecie() {
        return especie;
    }
};



int main() {

    Animal a1; // <-- objeto a1
    Animal a2; // <-- objeto a2

    a1.setNombre("Dragon de komodo");
    a1.setEspecie("Reptil");

    a2.setNombre("Pinguino");
    a2.setEspecie("Ave acuatica");

    cout << "El nombre del animal del primer objeto es: " << a1.getNombre() << endl;
    cout << "La especie del primer objeto es: " << a1.getEspecie() << endl;

    cout << "\n" << endl;

    cout << "El nombre del animal del segundo objeto es: " << a2.getNombre() << endl;
    cout << "La especie del segundo objeto es: " << a2.getEspecie() << endl;

    return 0;
}



