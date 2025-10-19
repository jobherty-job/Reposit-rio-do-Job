#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, delta, x1, x2;
    cout << "Digite os coeficientes a, b e c: ";
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "A equação não possui raízes reais." << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout.precision(4);
        cout << fixed;
        cout << "Raiz x1: " << x1 << endl;
        cout << "Raiz x2: " << x2 << endl;
    }
    return 0;
}