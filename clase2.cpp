#include <iostream>
#include <string>

using namespace std;


class Persona {
    public:

    string nombre;
    int edad;

    Persona() {
        nombre = "ricardo";
        edad = 23;
    }


};


int main() {
    Persona persona1;

    cout << persona1.nombre << endl;
    cout << persona1.edad << endl;

    return 0;
}
