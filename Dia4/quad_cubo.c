#include <stdio.h>

void quadrado_cubo(int* p1) {
    int p2 = 0;
    int p3 = 0;
    int* q = &p2;
    int* c = &p3;

    *q = *p1 * *p1;
    *c = *q * *p1;
    printf("O quadrado desse numero eh: %i\n", p2);
    printf("O cubo desse numero eh: %i\n", p3);
}

int main() {
    int num;

    printf("Digite um numero: \n");
    scanf("%i", &num);
    quadrado_cubo(&num);

    return 0;
}
