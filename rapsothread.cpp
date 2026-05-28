#include <iostream>
#include <thread>

using namespace std;


void primerhilo(int n) {
    cout << "primer hilo: " << n << endl;
}

int main() {
    thread hilo(primerhilo, 15);
    hilo.join();

    return 0;
  
}