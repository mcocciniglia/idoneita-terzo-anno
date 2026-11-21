#include <stdio.h>

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    int somma = 0;
    int numero = 1;
    while (numero <= n) {
        somma = somma + numero;
        numero = numero + 1;
    }
    printf("%d\n", somma);
    return 0;
}
