#include <iostream>
#include <string>

using namespace std;


class Clase {
    private:

    string primerAtributo;
    int segundoAtributo;


    public:

    void primeraFunction() {
        cout << "Mercedes " << endl;

    }

    void segundaFunction() {
        cout << "Benz " << endl;

    }


    Clase(string primerAtributo, string segundoAtributo) {

    }
};

int main() {
    Clase c1;
    c1.primeraFunction();
    c1.segundaFunction();

    return 0;
}