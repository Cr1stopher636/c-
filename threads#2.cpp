#include <iostream>
#include <thread>
#include <string>

using namespace std;

void primerafunction() {
    cout << "primer mensaje" << endl;
}


void segundafunction(string nombre, thread primerhilo) {
    cout << "el nombre es: " << nombre << endl;

    if (primerhilo.joinable()) {
        primerhilo.join();
    }
    
}


int main() {

    thread t1(primerafunction);
    string minnombre = "ricardo";

    thread t2(segundafunction, minnombre, std::move(t1));
    t2.join();

    return 0;
}