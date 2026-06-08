#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:

    string nombre;
    string especie;

   
    // Public, Protected, Privated
    public:

    
    // CONSTRUCTOR 
    Animal(string nuevoNombre, string nuevaEspecie) {
       nombre = nuevoNombre;
       especie = nuevaEspecie;
    }


    string getNombre() {
        return nombre;
    }


    string getEspecie() {
        return especie;
    }

};



int main() {

    Animal a1("Pinguino", "ave acuatica");
    Animal a2("cocodrilo", "reptil");

    cout << "El animal es: " << a1.getNombre() << endl;

    cout << "La especie es: " << a1.getEspecie() << endl;


    cout << "\n" << endl;


    cout << "El animal es: " << a2.getNombre() << endl;
    cout << "La especie es: " << a2.getEspecie() << endl;

    return 0;
}



