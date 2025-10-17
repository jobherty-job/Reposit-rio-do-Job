#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double raio, area, pi = 3.14159;
    cout << "Digite o valor do raio: ";
    cin >> raio;
    area = pi * raio * raio;
    cout << fixed << setprecision(3);
    cout << "A=" << area << endl;
    return 0;
}