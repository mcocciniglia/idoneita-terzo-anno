#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int numero = 1;
    int somma = 0;
    while (numero <= n) {
        somma = somma + numero;
        numero = numero + 1;
    }
    std::cout << somma << '\n';
    return 0;
}
