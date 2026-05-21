#include <iostream>
#include <string>

using namespace std;


class ClassA {
    public:
    void metodoA() {
        cout << "Mensaje de la clase A" << endl;
    }
};




class ClassB : public ClassA {
    public:
    void metodoB() {
        cout << "Mensaje de la clase B" << endl;
    }
};



class ClassC : public ClassB {

   

};



int main() {
    ClassC c1;

    cout << "\n";

    cout << "Prueba de herencia de clase c " << endl;
    cout << "\n";


    c1.metodoA();

    c1.metodoB();

    return 0;
}


