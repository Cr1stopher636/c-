#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    cout << "esperando... " << endl;

    this_thread::sleep_for(chrono::microseconds(100));

    cout << "Ya pasaron 100 microsegundos" << endl;

    return 0;
}