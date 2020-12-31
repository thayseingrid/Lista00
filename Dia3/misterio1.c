#include <stdio.h>

void misterio3 (int* p1, int* p2) {
    int r = *p1;
    *p1 = *p2;
    *p2 = r;
}

void misterio1 (int *p){
    printf("%i", *p);
}

void misterio2 (int *p){
    *p = 0;
}

int main () {
    int i = 1;
    int j = 2;
    misterio3(&i, &j);
    printf("%i %i", i, j);
    return 0;
}
