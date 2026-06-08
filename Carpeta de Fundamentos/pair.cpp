// Para agrupar 2 valores relacionados
#include <iostream>
#include <utility>

using namespace std;

int main() {
    pair <string, int> persona("ricardo", 23);

    cout << "nombre: " << persona.first << endl;
    cout << "edad: " << persona.second << endl;

    return 0;
}