#include <stdio.h>

int ord2(int* p1, int* p2) {
    int* aux;
    int v = 0;
    aux = &v;
    
    if (*p2 >= *p1) {
        *aux = *p1;
        *p1 = *p2;
        *p2 = *aux;
    }
}

int main() {
    int i = 0;
    int j = 1;
    ord2(&j, &i);

    printf("%i %i", i, j);
    return 0;
}

