#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:

    string nombre;
    int edad;
    

    public:

    Persona() { // Constructor
        nombre = "Bentley Bentayga";
        edad = 0;
    }

    void MetodoPublico() {
        cout << "Primer valor: " << nombre << endl;
    }
};



int main() {
    Persona p1;
    p1.MetodoPublico();

    return 0;

}