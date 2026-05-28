#include <iostream>
#include <string>

using namespace std;


class Clase {
    private:

    string primeraClase;
    int segundaClase;


    public:

    Clase() {
        primeraClase = "Jose";
        segundaClase = 30;
    }

    void metodoPublico() {
        cout << "El primer valor: " << primeraClase << endl;
        cout << "El segundo valor: " << segundaClase << endl;
    }
};

int main() {
    Clase c1;
    c1.metodoPublico();
   
    return 0;
}