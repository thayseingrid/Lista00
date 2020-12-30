#include <stdio.h>

int quadrado(int n) {
    int q;

    q = n * n;
    return q;
}

int pot_4(int n) {
    return quadrado(quadrado(n));
}

int main() {
    int num, x;
    
    printf("Digite um numero: ");
    scanf("%i", &num);
    x = quadrado(num);
    printf("O quadrado do numero eh: %i\n", x);
    x = pot_4(num);
    printf("A quarta potencia do numero eh: %i\n", x);

    return 0;
}
