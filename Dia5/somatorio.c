#include <stdio.h>

int somatorio(int n) {
    int i = 0;
    int soma = 0;
    int s;

    while(i < n) {
        scanf("%i", &s);
        soma = soma + s;
        ++i;
    }
    return soma;
}

int main() {
    int num, soma;
    
    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("Digite %i numeros: ", num);
    soma = somatorio(num);
    printf("O somatorio de %i eh %i\n", num, soma);
    return 0;
}
