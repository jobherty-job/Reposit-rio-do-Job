#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int codigo, quantidade;
    cout << "Digite o codigo: ";
    cin >> codigo;
    cout << "Digite a quantidade: ";
    cin >> quantidade;
    switch (codigo) {
        case 1:
            cin >> quantidade*5.00;
            break;
        case 2:
            cin >> quantidade*3.50;
            break;
        case 3:
            cin >> quantidade*4.80;
            break;
        case 4:
            cin >> quantidade*8.90;
            break;
        case 5:
            cin >> quantidade*7.32;
            break;
        default:
            cout << "Codigo invalido" << endl;
    }
    cout << "O valor total é de: R$ " << fixed << setprecision(2) << quantidade << endl;
    return 0;
}