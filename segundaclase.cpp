#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:

    string nombre;
    int edad;

    public:

    void getfunction() {
        cout << "fumando weed" << endl;
    }

  
};

int main() {
    Persona p1;
    p1.getfunction();



    return 0;
}