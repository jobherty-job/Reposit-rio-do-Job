#include <iostream>
int main() {
    double glicose;
    std::cout << "Digite a quantidade de glicose no sangue: ";
    std::cin >> glicose;
    if (glicose <= 100.0) {
        std::cout << "Normal" << std::endl;
    } else if (glicose <= 140.0) {
        std::cout << "Elevado" << std::endl;
    } else {
        std::cout << "Diabetes" << std::endl;
    }
    return 0;
}