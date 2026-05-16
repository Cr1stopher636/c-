#include <iostream>
#include <thread>
#include <string>

using namespace std;

void primerfunction() {
    cout << "prmer mensaje" << endl;
}


void segundafunction(string nombre, thread primerhilo) {
    if (primerhilo.joinable()) {
        primerhilo.join();
    }
}

int main() {
    thread t1(primerfunction);
    string nombre = "ricardo";

    thread t2(segundafunction, nombre, std::move(t1));
    t2.join();

    return 0;
}