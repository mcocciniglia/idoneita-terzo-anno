#include <stdio.h>

int main(void) {
    double base = 0.0;
    double altezza = 0.0;
    if (scanf("%lf %lf", &base, &altezza) != 2) {
        return 1;
    }
    double area = base * altezza;
    double perimetro = 2 * (base + altezza);
    printf("%.2f\n", area);
    printf("%.2f\n", perimetro);
    return 0;
}
