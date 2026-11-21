#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int conteggio = 0;
    for (int i = 0; i < n; i = i + 1) {
        int valore = 0;
        std::cin >> valore;
        if ((valore >= 10) && (valore <= 20)) {
            conteggio = conteggio + 1;
        }
    }
    std::cout << conteggio << '\n';
    return 0;
}
