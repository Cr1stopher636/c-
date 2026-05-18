#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    vector<int> original = {1,2,3,4,5};

    vector<int> nuevoVector = std::move(original);

    cout << "el tamaño del original es: " << original.size() << endl;
    cout << "el tamaño del nuevo es: " << nuevoVector.size() << endl;

    return 0;
}





