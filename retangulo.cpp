#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    cout << "Digite a base do retangulo: ";
    double base;
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    double altura;
    cin >> altura;
    double area = base * altura;
    double perimetro = 2 * (base + altura);
    double diagonal = sqrt(base * base + altura * altura);
    cout << fixed << setprecision(4);
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;
    return 0;
}