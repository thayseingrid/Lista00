#include <stdio.h>

int maior(int x, int y, int z) {
    int maior;

    if (x > y && x > z) {
        maior = x;
    }

    else if (y > x && y > z) {
        maior = y;
    }

    else {
        maior = z;
    }

    return maior;
}

int main() {
    int n1, n2, n3;
    int maior_num;
    scanf("%i %i %i", &n1, &n2, &n3);
    maior_num = maior(n1, n2, n3);
    printf("O maior numero eh: %i \n", maior_num);
    return 0;
}
