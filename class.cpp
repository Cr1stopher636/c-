#include <iostream>
#include <string>

using namespace std;

class Persona {
    public:

    string nombre;
    int edad;


    Persona(string nombre, int edad) { // Constructor
        cout << "Te llamas: " << nombre << " y tienes " << edad << " años." << endl;
       
        
    }
};


int main() {
    Persona objeto1("Ricardo", 23);

    return 0;

}