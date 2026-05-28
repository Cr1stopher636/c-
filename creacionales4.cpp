#include <iostream>
#include <string>
// #include <iomanip> // < - - - Esta libreria ya se encuentra en iostream

using namespace std;

class Casa {
    private: 

    bool llaves;
    int passwordHouse;

    public:

    Casa() {
        llaves = true;
        passwordHouse = 1234;
    }

    void metodoPublico() {
        cout << boolalpha;
        cout << "Las llaves estan: " << llaves << endl;
        cout << "La password es: " << passwordHouse << endl;
    }
};

int main() {


    Casa c1;
    c1.metodoPublico();



}