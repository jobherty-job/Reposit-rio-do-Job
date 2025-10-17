#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string nome;
    double valorHora, horasTrabalhadas, pagamento;
    cout << "Digite o nome do(a) funcionario(a): ";
    getline(cin, nome);
    cout << "Digite o valor que ele(a) recebe por hora: ";
    cin >> valorHora;
    cout << "Digite a quantidade de horas trabalhadas por ele(a): ";
    cin >> horasTrabalhadas;
    pagamento = valorHora * horasTrabalhadas;
    cout << "O pagamento para " << nome << " deve ser: R$ " << fixed << setprecision(2) << pagamento << endl;
    return 0;
}