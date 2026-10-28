#include <stdio.h>

int main(void) {
    int quantita = 0;
    double prezzo = 0.0;
    if (scanf("%d %lf", &quantita, &prezzo) != 2) {
        return 1;
    }
    double totale = quantita * prezzo;
    printf("%.2f\n", totale);
    return 0;
}
