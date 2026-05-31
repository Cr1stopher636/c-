#include <iostream>
#include <string>

using namespace std;

// Clase abstracta con una metodo global


// saludar es una funcion global

void saludar() {
    cout << "saludando" << endl;
}


class Object {
    private:

    void segundaFunction() {
        cout << "segundo mensaje" << endl;
    }

    public:

    void publicMethod() {
        segundaFunction();
    }
};




int main() {
    saludar();
    Object o1;
    o1.publicMethod();
    

    return 0;
}