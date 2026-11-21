#include <iostream>

int main() {
    int eta = 0;
    std::cin >> eta;
    if (eta <= 12) {
        std::cout << "Ingresso gratuito\n";
    } else {
        std::cout << "Biglietto ordinario\n";
    }
    return 0;
}
