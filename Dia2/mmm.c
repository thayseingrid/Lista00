#include <stdio.h>

int main() {
    int x, y, z;
    int maior, medio, menor;
    
    printf("Digite 3 numeros: \n");
    scanf("%i %i %i", &x, &y, &z);

    if (x > y) {
        maior = x;
        x = y;
        y = maior;
    }
    if (x > z) {
        maior = x;
        x = z; 
        z = maior;
    }
    if (y > z) {
        maior = y;
        y = z;
        z = maior;
    }
    menor = x;
    medio = y;
    maior = z;
    printf("%i %i %i \n", x, y, z);
}
