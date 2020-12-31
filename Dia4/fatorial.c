#include <stdio.h>

int fatorial(int n) { 
    int aux = n - 1;

    while (aux > 1) {
        n = n * aux;
        --aux;
    }
    return n;
}

int main() {
    int num;
    int ft;

    scanf("%i", &num);
    ft = fatorial(num);
    printf("O fatorial de %i eh: %i\n", num, ft);
    return 0;
}
