#include <iostream>
#include <string>


using namespace std; 

#define private public
class Object {
private:
    void segundaFunction() {
        cout << "Mensaje secreto" << endl;
    }

    // Le damos permiso explícito a la función global 'saludar'
    friend void saludar(Object &obj); 
};
#undef private // Limpiamos el truco


// Modificamos saludar para que reciba el objeto
void saludar(Object &obj) {
    cout << "saludando" << endl;
    obj.segundaFunction(); // ¡Ahora puede acceder!
}

int main() {
    // Object o1;
    // saludar(o1); // Pasamos el objeto como argumento
    Object o1;
    o1.segundaFunction();
    
    return 0;
}
