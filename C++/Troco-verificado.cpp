#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double precoUnitario, quantidade, valorPago, troco;
    cout << "Preço unitário do produto: ";
    cin >> precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Valor pago pelo cliente: ";
    cin >> valorPago;
    double totalCompra = precoUnitario * quantidade;
    troco = valorPago - totalCompra;
    if (troco < 0) {
        cout << "Dinheiro insuficiente. Faltam R$ " << fixed << setprecision(2) << -troco << endl;
    } else {
        cout << "Troco a ser devolvido: R$ " << fixed << setprecision(2) << troco << endl;
    }
    return 0;
}