#include <iostream>
using namespace std;
int main() {
    double x, y, z, menor;
    cout << "Digite tres numeros: ";
    cin >> x >> y >> z;
    menor = x;
    if (y < menor) {
        menor = y;
    }
    if (z < menor) {
        menor = z;
    }
    cout << "MENOR = " << menor << endl;
    return 0;
}