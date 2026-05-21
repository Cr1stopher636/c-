#include <iostream>
#include <string>

using namespace std;


class Persona {
    public:

    string nombre;
    int edad;

    double salario;
    bool enRelacion;


    Persona(double salario, bool enRelacion) {
        this-> salario = salario;
        this-> enRelacion = enRelacion;
    }



    Persona() {
        nombre = "";
        edad = 0;
    }


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
    Persona objeto;
    Persona objeto2(250.30, false);
    Persona usuario1("Carlos", 23);
    Persona usuario2("juan", 20);
    


    // Accedemos a sus metodos usando el operador (.)
    // usuario1.saludar();
    // usuario2.saludar();
    // objeto.saludar();
    cout << boolalpha; // Para imprimir True y False
    cout << objeto2.enRelacion << endl;
   

    return 0;
}




