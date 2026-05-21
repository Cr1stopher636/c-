#include <iostream>
#include <string>

using namespace std;


class Persona {
    public:

    string nombre;
    int edad;



    // Persona() {
    //     nombre = "";
    //     edad = 0;
    // }


    Persona(string nombre, int edad) {
        this-> nombre = nombre;
        this-> edad = edad;
    }


    void saludar() {
        cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }
}; // <---------- Punto y coma en la clase



// uso de la clase en el programa principal
int main() {

   
    Persona usuario1("Carlos", 23);
    Persona usuario2("juan", 20);
    


    // Accedemos a sus metodos usando el operador (.)
    usuario1.saludar();
    usuario2.saludar();

 

    

    return 0;
}




