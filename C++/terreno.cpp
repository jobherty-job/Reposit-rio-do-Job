#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(1);
    cout << "Qual o valor da largura do retangulo? ";
    double largura;
    cin >> largura;
    cout << "Qual o valor da altura do retangulo? ";
    double altura;
    cin >> altura;
    double area = largura * altura;
    cout <<"Digite o valor do metro quadrado: ";
    cout << fixed << setprecision(2);
    double valorMetroQuadrado;
    cin >> valorMetroQuadrado;
    double valorTerreno = area * valorMetroQuadrado;
    cout << "A area do terreno é: " << area << endl;
    cout << "O valor do terreno é: " << valorTerreno << endl;
    return 0;
}