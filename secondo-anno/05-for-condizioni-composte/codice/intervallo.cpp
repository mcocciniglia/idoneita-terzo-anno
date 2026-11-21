#include <iostream>

int main() {
    int valore = 0;
    std::cin >> valore;
    bool dentro = (valore >= 10) && (valore <= 20);
    if (dentro) {
        std::cout << "Dentro\n";
    } else {
        std::cout << "Fuori\n";
    }
    return 0;
}
