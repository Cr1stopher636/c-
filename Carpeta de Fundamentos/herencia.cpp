#include <iostream>
#include <string>

using namespace std;


class Vehiculo {
    private:
    void metodoA() {
        cout << "Vehiculo Padre" << endl;
    }

    public:
    void publicMethod() {
    metodoA();
    }
};


class Mercedes : public Vehiculo {
    public:
    void metodoB() {
        cout << "Mercedes - Benz" << endl;
    }
};



class Chrysler : public Mercedes {
    void metodoC() {
        cout << "Chrysler" << endl;
    }
};



int main() {
    Vehiculo v1;
    v1.publicMethod();


    Mercedes m1;
    m1.metodoB();

    
    // cout << "\n";
    // cout << "Prueba de herencia de clase c " << endl;
    // cout << "\n";

    return 0;
}


