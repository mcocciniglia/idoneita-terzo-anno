#include <iostream>

int main() {
    int limite = 0;
    std::cin >> limite;
    int multiplo = 3;
    while (multiplo <= limite) {
        std::cout << multiplo << '\n';
        multiplo = multiplo + 3;
    }
    return 0;
}
