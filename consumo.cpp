#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double d, c, g;
    cout << "Digite a distancia total (em km) percorrida pelo carro: ";
    cin >> d;
    cout << "Digite o total de combustivel gasto (em litros): ";
    cin >> c;
    g = d / c;
    cout << fixed << setprecision(3);
    cout << "Consumo medio: " << g << " km/l" << endl;
    return 0;
}
