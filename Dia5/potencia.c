#include <stdio.h>

int potencia(int n) {
    int p = 1, i = 1;

    while(i <= n) {
        if (i <= 1) {
            p = p * i;
            p = 2;
        }

        else {
            p = p * 2;
        }
        ++i;
    }
    return p;
}

int main() {
    int num, p; 

    printf("Digite um numero para calcular as n primeiras potencias: \n");
    scanf("%i", &num);
    p = potencia(num);
    printf("2 elevado a %i eh: %i\n", num, p);

    return 0;
}
