#include <iostream>
#include <string>

using namespace std;


class Persona {
    public:

    string nombre;
    int edad;



    Persona(string nombre, int edad) {
        nombre = nombre;
        edad = edad;
    }


    void saludar() {
        cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << "años." << endl;
    }
}; // <---------- Punto y coma en la clase



// uso de la clase en el programa principal
int main() {
    Persona usuario1("Carlos", 23);


    // Accedemos a sus metodos usando el operador (.)
    usuario1.saludar();

    return 0;
}




