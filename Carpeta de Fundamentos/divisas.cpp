#include <iostream>
#include <string>


using namespace std;




class divisas {

    private:

    int cantidad;
    double euro;
    double dolar;


    public:

    divisas() {
        euro = 20.24;
        dolar = 17.35;
        cantidad = 0;
    }

    void primeracantidad() {
        cout << "1 euro es igual a: " << euro << " pesomexicano" << endl;
    }

    void segundacantidad() {
        cout << "1 dolar es igual a: " << dolar << " pesomexicano" << endl;
    }


    void pedirDatos() {
        cout << "Introduce la cantidad a cambiar: ";
        cin >> cantidad;  
    }

    void operacion() {
        cout << "Resultados" << endl;
        cout << cantidad << " euros serian: " << (cantidad * euro) << " pesomexicano" << endl;
        cout << cantidad << " dolares serian: " << (cantidad * dolar) << " pesomexicano" << endl;
    }

};




int main() {
    divisas d1;
    d1.primeracantidad();
    d1.segundacantidad();


    cout << "-------------------------------------------" << endl;

    d1.pedirDatos();
    d1.operacion();


    return 0;
}