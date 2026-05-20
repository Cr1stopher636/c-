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


    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    int getEdad() {
        return edad;
    }
};



int main() {

    Persona p1;

    p1.setNombre("Ricardo");
    p1.setEdad(23);

    cout << "El nombre es: " << p1.getNombre() << endl;
    cout << "La edad es: " << p1.getEdad() << endl;

    return 0;
}



