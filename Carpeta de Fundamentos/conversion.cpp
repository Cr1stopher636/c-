#include <iostream>
#include <string>

using namespace std;


int main() {

    int variable = 100;
    bool relationShip = true;

    cout << boolalpha;
    cout << "el valor es: " << variable << endl;
    cout << "en relacion: " << relationShip << endl;
    cout << "el nuevo valor es: " << to_string(relationShip) << endl;

    return 0;
}
