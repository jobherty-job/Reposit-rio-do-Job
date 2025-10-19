#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int minutos;
    double valorPlano = 50.0;
    cout << "Digite a quantidade de minutos consumidos: ";
    cin >> minutos;
    if (minutos > 100) {
        int minutosExcedentes = minutos - 100;
        valorPlano += minutosExcedentes * 2.0;
    }
    cout << "Valor a ser pago: R$ " << fixed << setprecision(2) << valorPlano << endl;
    return 0;
}