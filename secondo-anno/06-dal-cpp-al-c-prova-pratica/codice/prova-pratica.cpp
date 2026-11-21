#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int positivi = 0;
    int somma = 0;
    for (int i = 0; i < n; i = i + 1) {
        int numero = 0;
        std::cin >> numero;
        if (numero > 0) {
            positivi = positivi + 1;
            somma = somma + numero;
        }
    }
    std::cout << positivi << '\n';
    std::cout << somma << '\n';
    return 0;
}
