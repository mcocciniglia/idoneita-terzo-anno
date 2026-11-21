#include <iostream>

int main() {
    double totale = 0.0;
    double budget = 0.0;
    std::cin >> totale >> budget;
    if (budget >= totale) {
        std::cout << "Budget sufficiente\n";
    } else {
        std::cout << "Budget insufficiente\n";
    }
    return 0;
}
