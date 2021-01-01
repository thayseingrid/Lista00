#include <stdio.h>

int main() {
    int n, m;
    int maior, menor;
    
    printf("Digite dois valores n e m: ");
    scanf("%d %d", &n, &m);

    if (n <= m) {
        menor = n;
        maior = m;
    }

    else {
        maior = n;
        menor = m;
    }
    printf("menor: %i maior: %i\n", menor, maior);
    return 0;
}
