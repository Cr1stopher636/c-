#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {

    vector<string> original = {"1,2,3,4,5", "ricardo"};
    vector<string> nuevoVector = std::move(original);

    cout << "el tamaño del original es: " << original.size() << endl;
    cout << "el tamaño del nuevo es: " << nuevoVector.size() << endl;

    return 0;
}

// int main() {
//     vector<string> nombres(5);

//     nombres[0] = "ricardo";
//     nombres[1] = "mercedes";
//     nombres[2] = "iphone";
//     nombres[3] = "bmw";
//     nombres[4] = "cadillac";

//     cout << nombres[0] << endl;
//     cout << nombres[1] << endl;
//     cout << nombres[2] << endl;
//     cout << nombres[3] << endl;
//     cout << nombres[4] << endl;

//     return 0;
// }





