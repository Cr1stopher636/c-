#include <iostream>
#include <string>
#include <memory> // Usaremos smart pointers que es mejor práctica en C++ moderno

using namespace std;

// 1. PRODUCTO (Tu clase base)
class Vehiculo {
public:
    virtual void avanzar() = 0; 
    virtual ~Vehiculo() = default;
};

// 2. PRODUCTOS CONCRETOS
class Automovil : public Vehiculo {
public:
    void avanzar() override {
        cout << "El auto avanzando por la carretera." << endl;
    }
};

class Avion : public Vehiculo {
public:
    void avanzar() override {
        cout << "El avion avanzando por los cielos." << endl;
    }
};

// --- AQUÍ EMPIEZA EL FACTORY METHOD ---

// 3. CREADOR (La fábrica abstracta)
class CreadorVehiculos {
public:
    // Este es el "Factory Method" virtual puro
    virtual unique_ptr<Vehiculo> crearVehiculo() = 0;
    virtual ~CreadorVehiculos() = default;

    // Opcional: Un método que usa el producto sin saber cuál es
    void iniciarViaje() {
        unique_ptr<Vehiculo> v = crearVehiculo();
        v->avanzar();
    }
};

// 4. CREADORES CONCRETOS (Fábricas específicas)
class FabricaAutomoviles : public CreadorVehiculos {
public:
    unique_ptr<Vehiculo> crearVehiculo() override {
        return make_unique<Automovil>(); // Aquí se decide crear un Automovil
    }
};

class FabricaAviones : public CreadorVehiculos {
public:
    unique_ptr<Vehiculo> crearVehiculo() override {
        return make_unique<Avion>(); // Aquí se decide crear un Avion
    }
};

// --- USO EN EL MAIN ---
int main() {
    // El cliente trabaja con las abstracciones (CreadorVehiculos y Vehiculo)
    CreadorVehiculos* fabrica;

    // Quiero un auto, así que uso la fábrica de autos
    fabrica = new FabricaAutomoviles();

    unique_ptr<Vehiculo> miAuto = fabrica->crearVehiculo();
    miAuto->avanzar(); 
    
    delete fabrica;

    cout << "-----------------------" << endl;

    // Quiero un avión, cambio de fábrica sin cambiar cómo se usa el vehículo
    fabrica = new FabricaAviones();

    unique_ptr<Vehiculo> miAvion = fabrica->crearVehiculo();
    miAvion->avanzar();


    delete fabrica;

    return 0;
}