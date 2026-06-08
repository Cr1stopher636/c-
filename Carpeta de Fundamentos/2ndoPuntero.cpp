#include <iostream>
#include <string>

using namespace std;



int main() {
    string nombre = "Pedro";
    string *miPuntero;

    miPuntero = &nombre;

   
   
    // cout <<  "Esta es la direccion en memoria: " << miPunteroNombre << endl;
    cout << "Este es el valor almacenado: " << *miPuntero << endl;
    

    return 0;

}





