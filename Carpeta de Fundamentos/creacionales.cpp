#include <iostream>
#include <string>
#include <memory> // Usaremos smart pointers para un código más moderno y limpio

using namespace std;


class Persona {
    public:

    virtual void conectar() = 0;
    virtual ~Persona() = default;

};


class Hombre : public Persona {
    public:
    
    void conectar() override {
        cout << "Esta persona es un Hombre" << endl;
    }
};


class Mujer : public Persona {
    public:
    
    void conectar() override {
        cout << "Esta persona es una Mujer" << endl;
    }
};


class PersonaFactory {
public:
    // Este método centraliza la creación. El cliente no usa "new" directamente.
    static unique_ptr<Persona> crearPersona(const string& tipo) {
        if (tipo == "hombre") {
            return make_unique<Hombre>();
        } else if (tipo == "mujer") {
            return make_unique<Mujer>();
        }
        return nullptr;
    }
};


int main() {
    // El cliente NO sabe que existen las clases 'Hombre' o 'Mujer'.
    // Solo pide una "Persona" a través de la factoría.
    auto p1 = PersonaFactory::crearPersona("hombre");
    auto p2 = PersonaFactory::crearPersona("mujer");

    if (p1) p1->conectar();
    if (p2) p2->conectar();
    


    // Ya no hace falta "delete", unique_ptr lo maneja automáticamente.
    return 0;
   
}

