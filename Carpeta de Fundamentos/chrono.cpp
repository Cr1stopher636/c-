#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono; // Para no escribir CHRONO

int main() {
    cout << "esperando..." << endl;

    this_thread::sleep_for(seconds(3));

    cout << "ya pasaron 3 segundos " << endl;

    getchar();

    return 0;
}