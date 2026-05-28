#include <iostream>

using namespace std;

int main() {
    int numero = 10;
    int *miPuntero;

    miPuntero = &numero;



    cout << "Esta es la direccion en memoria: " << miPuntero << endl;
    cout << "Este es el valor en memoria: " << *miPuntero << endl;

    // getchar();

    return 0;
}