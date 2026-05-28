#include <iostream>

using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "ingresa el primer numero: ";
    cin >> num1;

    cout << "ingresa el segundo numero: ";
    cin >> num2;

    int resultado = num1 + num2;

    cout << "El resultado es: " << resultado << endl;

    return 0;

}



