#include <iostream>

int main() {
    int positivi = 0;
    for (int i = 0; i < 5; i = i + 1) {
        int numero = 0;
        std::cin >> numero;
        if (numero > 0) {
            positivi = positivi + 1;
        }
    }
    std::cout << positivi << '\n';
    return 0;
}
