#include <iostream>
#include <string>

using namespace std;


class Animal {
    private:

    string nombre;
    int edad;

    
    void caminar() {
        cout << "el animal esta caminando \n" << endl;
    }

    public:

    void getanimal() {
        caminar();
    }

    void mostrarInfo() {
        getanimal();
    }
};



// class Cerdo : public Animal {
//     public:

//     void comer() {
//         cout << "el animal esta comiendo \n" << endl;
//     }
// };


// class Perro : public Animal {
//     public:

//     void saludar() {
//         cout << "el animal esta saludando \n" << endl;
//     }

//     friend int main();
// };




int main() {
    Animal a1;
    a1.getanimal();


    return 0;
}