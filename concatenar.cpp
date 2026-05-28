#include <iostream>
#include <string>

using namespace std;


string nombre() {
    return "ricardo";
}

int edad() {
    return 23;  
}



int main() {
    // Usamos to_string() para convertir el número entero de la edad a texto
    // Y llamamos a las funciones usando paréntesis ()

    string result = "(" + nombre() + ", " + to_string(edad()) + ")";
    cout << "La concatenacion es: " << result << endl;
   

   return 0;
}