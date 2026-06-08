#include <iostream>
// #include <cstdlib>
// #include <stdio.h>

using namespace std;

int main() {
    string nombre = "Pedro";
    string *miPunteroNombre;

    miPunteroNombre = &nombre;

    // *miPunteroNombre = "Mercedes benz GLE63s";
    // cout << "El nuevo valor es: " << *miPunteroNombre << endl;

    // cout <<  "Esta es la direccion en memoria: " << miPunteroNombre << endl;
    cout << "Este es el valor almacenado: " << *miPunteroNombre << endl;
    // getchar();

    return 0;

}


