#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:
    string nombre;
    int edad;


    public:
    void primerafunction() {
        cout << "Su nombre es: " << nombre << " y tiene " << edad << " años" << endl;
    }

    void segundafunction() {
        cout << "Esta es la Segunda function" << endl;
    }


    // Persona(string nombre, int edad) {
    //     this-> nombre = nombre;
    //     this-> edad = edad;
    // }
    
    Persona() {
      
    }
};



int main() {
    Persona p2;
    // Persona p1("ricardo", 23);
    // p1.primerafunction();
    p2.segundafunction();

    return 0;
   
}

