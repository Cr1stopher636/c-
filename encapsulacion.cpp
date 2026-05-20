#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:

    string nombre;
    int edad;



    public:

    void setNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    string getNombre() {
        return nombre;
    }
};

int main() {

    Persona p1;

    p1.setNombre("Ricardo");

    cout << p1.getNombre() << endl;

    return 0;
}



