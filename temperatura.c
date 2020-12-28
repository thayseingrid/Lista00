#include <stdio.h>

int main () {
    int temp;

    printf("Digite a temperatura ambiente: ");
    scanf("%d", &temp);

    if (temp > 32) {
        printf("Esta muito quente!\n");
    }

    return 0;
}
