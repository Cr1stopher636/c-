#include <iostream>
#include <string>

using namespace std;

class Vehiculos {
    private:

    string sedan;
    string suv;

    public:

    Vehiculos() {
        sedan = "Mercedes AMG CLS V8";
        suv = "Mercedes AMG GLE 63s ";
    }

    // Un método público para poder ver que todo funcionó
    void publicmetodVehiculo() {
        cout << "Este es el Sedan: " << sedan << endl;
        cout << "Este es el SUV: " << suv << endl;
    }
};

int main() {
    //forma correcta usando punteros memoria dinamica
    Vehiculos *miv1 = new Vehiculos();


   miv1->publicmetodVehiculo();
//    cout << "esta es la direccion en memoria: " << miv1 << endl;
   
    //probamos el objeto siempre que uses new, libera la memoria con delete
    delete miv1;
    return 0;
}