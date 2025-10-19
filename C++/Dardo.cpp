#include <iostream>
using namespace std;
int main() {
    double d1, d2, d3;
    cout << "Digite as ditancias: ";
    cin >> d1 >> d2 >> d3;
    int maior = d1;
    if (d2 > maior) {
        maior = d2;
    }else if (d3 > maior) {
        maior = d3;
    }
    cout << "Maior distancia: " << maior << endl;
    return 0;
}