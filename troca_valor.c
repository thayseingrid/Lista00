#include <stdio.h>

int main() {
    int v = 0;
    int *p1;

    p1 = &v;

    printf("valor de v = %i\n", v);
    printf("endereco de v em p1 = %p\n", p1);
    printf("endereco de v = %p\n", &v);
    printf("endereco de p1 = %p\n", &p1);
    return 0;
}
