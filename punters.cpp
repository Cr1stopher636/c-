// punteros
#include <iostream>
#include <cstdlib>
#include <stdio.h> // para imprimir con printf("%d")
using namespace std;


// int main(int argc, char *argv[0]) {

//     int numero = 10;
//     int *mipuntero; // un puntero guarda direcciones de memoria

//     mipuntero = &numero; // & indica la direccion en memoria de la variable
//     cout << *mipuntero << endl; // imprime el valor usando el puntero
//     cout << mipuntero << endl; // imprime la direccion en memoria de la variable 

// }


int main() {
    
    int numero = 10;
    int *puntero;

    puntero = &numero;

    cout << puntero << endl;
    cout << *puntero << endl;
}


