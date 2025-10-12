#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double preco_unitario, valor_pago, troco;
    int quantidade;

    cout << "Digite o preco unitario do produto: ";
    cin >> preco_unitario;

    cout << "Digite a quantidade de unidades compradas: ";
    cin >> quantidade;

    cout << "Digite o valor em dinheiro dado pelo cliente: ";
    cin >> valor_pago;

    double total_compra = preco_unitario * quantidade;
    troco = valor_pago - total_compra;

    cout << fixed << setprecision(2);
    cout << "O valor do troco a ser devolvido ao cliente e: R$ " << troco << endl;

    return 0;
}