#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double A, B, C;
    cout << "Digite os valores de A, B e C: ";
    cin >> A >> B >> C;
    cout << fixed << setprecision(4);
    cout << "Area do quadrado: " << A * A << endl;
    cout << "Area do triangulo retangulo: " << (A * B) / 2.0 << endl;
    cout << "Area do trapezio: " << ((A + B) * C) / 2.0 << endl;
    return 0;
}