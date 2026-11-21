#include <iostream>

int main() {
    int quantita = 0;
    double prezzo = 0.0;
    std::cin >> quantita;
    std::cin >> prezzo;
    double totale = quantita * prezzo;
    std::cout << totale << '\n';
    return 0;
}
