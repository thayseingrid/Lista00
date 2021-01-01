#include <stdio.h>

void n_potencia(int x, int n) {
        int i = 0;
        int p = 1;
        
    if (n == 0 && x == 0) {
        printf("ERRO!\n");
    }
    
    else {
        while(i <= n) {
            if (i == 0 || i == 1 ) {
                p = p * 1;
                printf("%i ", p);
                p = p * x;
            }

            else {
                printf("%i ", p);
                p = p * x;
            }
            ++i;
        }
        printf("\n");
    }
}

int main() {
    int b, p;

    printf("Digite um numero inteiro e outro natural:\n");
    scanf("%i %i", &b, &p);
    n_potencia(b, p);

    return 0;
}





