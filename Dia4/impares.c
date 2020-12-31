#include <stdio.h>

void impares(int n) {
    int i = 0;

    while(i <= n) {
        if (i % 2 != 0) {
            printf("%i \n", i);
        }
        ++i;
    }
}

int main() {
    int n;

    scanf("%i", &n);
    impares(n);
    return 0;
}
