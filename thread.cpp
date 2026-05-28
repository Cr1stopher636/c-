#include <iostream>
#include <thread>
#include <string>
using namespace std;

using std::move;



// Funcion del primer hilo
void primerafunction() {
    cout << "Mensaje del primer hilo" << endl;
}

// Funcion que recibe el entero y el hilo
void segundafunction(int edad, thread primerhilo) {
    cout << "la edad es: " << edad << endl;

    // Como la función ahora es dueña del hilo, debe cerrarlo con join
    if (primerhilo.joinable()) {
        primerhilo.join();

    }

}

int main() {

    thread t1(primerafunction);
    int edADUser = 23;

    //forma correcta de usar move() para transferir el hilo a la funcion
    thread t2(segundafunction, edADUser, move(t1));

    // esperamos que el segundo hilo temrine
    t2.join();

    return 0;
    
}

// void hilo() { //Funcion hilo que no retorna nada 
//     cout << "Mensaje del hilo principal" << endl;
 
// }

// int main() {
//     thread variableHilo(hilo);
//     cout << "Mensaje del hilo secundario" << endl;
//     variableHilo.join();
    

//     return 0;
    
// }


