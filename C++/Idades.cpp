#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string nome1, nome2;
    int idade1, idade2;
    double media;
    cout << "Digite o nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Digite a idade da primeira pessoa: ";
    cin >> idade1;
    cin.ignore();
    cout << "Digite o nome da segunda pessoa: ";
    getline(cin, nome2);
    cout << "Digite a idade da segunda pessoa: ";
    cin >> idade2;
    media = (idade1 + idade2) / 2;
    cout << fixed << setprecision(1);
    cout << "A idade media entre " << nome1 << " e " << nome2 << " eh de " << media << " anos." << endl;
    return 0;
}