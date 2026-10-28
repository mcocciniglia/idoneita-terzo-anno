#include <iostream>

int main() {
    double base = 0.0;
    double altezza = 0.0;
    std::cin >> base >> altezza;
    double area = base * altezza;
    double perimetro = 2 * (base + altezza);
    std::cout << area << '\n';
    std::cout << perimetro << '\n';
    return 0;
}
