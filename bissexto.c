#include <stdio.h>

int main () {
    int ano;
    int dias;

    printf("Digite um ano maior que 1900: ");
    scanf("%i", &ano);
    
    if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0) {
        dias = 366;
        printf("Ano Bissexto! com %i dias.\n", dias);
    }

    else if (ano % 4 == 0 && ano % 400 != 0 && ano % 100 != 0) {
        dias = 366;
        printf("Ano Bissexto! com %i dias.\n", dias);
    }
    
    else if (ano % 4 == 0 && ano % 400 != 0 && ano % 100 == 0) {
        dias = 365;
        printf("Não é um ano bissexto. Possui %i dias\n", dias);
    }

    else {
        dias = 365;
        printf("Não é um ano bissexto. Possui %i dias\n", dias);
    }

    return 0;
}
