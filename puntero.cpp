#include <iostream>
// #include <cstdlib>
// #include <stdio.h>

using namespace std;

int main() {
    int numero = 10;
    int *miPunteronumero;

    miPunteronumero = &numero;

    *miPunteronumero = 100;
    cout << "El nuevo valor es: " << *miPunteronumero << endl;

    // cout <<  "Esta es la direccion en memoria: " << miPunteronumero << endl;
    // cout << "Este es el valor almacenado en la direccion en memoria: " << *miPunteronumero << endl;
    getchar();

    return 0;

}


