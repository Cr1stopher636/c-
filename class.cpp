#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:

    string nombre;
    int edad;
    

    public:

    Persona(string nombre, int edad) : nombre(nombre), edad(edad) { // Constructor
        // el cuerpo del constructor pued quedar vacio
    }

    void function() {
        cout << "hola" << endl;
    }

    string namefunction() {
        cout << "te llamas: " << nombre << " y tienes: " << edad << " de edad" << endl;
    }




};



int main() {
    Persona p1("jose", 23);
    p1.namefunction();

   
    

    return 0;

}