#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char f, c;
    int resultado;
    cout << "Digite qual medida deseja converter (F para Fahrenheit ou C para Celsius): ";
    cin >> c;
    if (c == 'F' || c == 'f') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> f;
        resultado = (f - 32) * 5 / 9;
        cout << "Temperatura em Celsius: " << resultado << " C" << endl;
    } else if (c == 'C' || c == 'c') {
        cout << "Digite a temperatura em Celsius: ";
        cin >> c;
        resultado = (c * 9 / 5) + 32;
        cout << "Temperatura em Fahrenheit: " << resultado << " F" << endl;
    } else {
        cout << "Unidade de medida invalida." << endl;
    }
    return 0;
}