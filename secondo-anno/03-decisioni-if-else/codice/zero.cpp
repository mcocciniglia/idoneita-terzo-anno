#include <iostream>

int main() {
    int numero = 0;
    std::cin >> numero;
    if (numero == 0) {
        std::cout << "Zero\n";
    } else {
        std::cout << "Diverso da zero\n";
    }
    return 0;
}
