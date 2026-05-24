#include <iostream>
#include <string>

using namespace std;

class Vehiculo{
    public:

    // Método virtual puro: obliga a las hijas a implementarlo
    virtual void avanzar() = 0; 

    // Destructor virtual (buena práctica indispensable en herencia)
    virtual ~Vehiculo() {} 
    
};


class Automovil : public Vehiculo {
    public:


    // "override" asegura que estás cumpliendo con el contrato de la clase abstracta
    void avanzar() override {
        cout << "El auto Avanzando por la carretera" << endl;

    }

};


class Avion : public Vehiculo {
    public:


    void avanzar() override {
        cout << "El avion Avanzando por los cielos" << endl;

    }

};


int main() {
    // Las clases abstractas no se pueden instanciar 
    // Vehiculo v1;
    // v1.~Vehiculo();

    // Automovil a1;
    // a1.avanzar();

    // Avion a2;
    // a2.avanzar();


    // Correcto: Un puntero de tipo Vehiculo apuntando a un Automovil real
    Vehiculo *miPuntero = new Automovil();


    miPuntero->avanzar(); //Imprime el auto avanzando por la carretera


    delete miPuntero; // Libera la memoeria (Se llama auto, al destructor)
    return 0;

}