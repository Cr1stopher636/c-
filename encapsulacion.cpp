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

    Animal a1;

    a1.setNombre("Dragon de komodo");
    a1.setEspecie("Reptil");

    cout << "El nombre del animal es: " << a1.getNombre() << endl;
    cout << "La especie es: " << a1.getEspecie() << endl;

    return 0;
}



