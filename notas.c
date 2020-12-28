#include <stdio.h>

int main() {
    int f, mf;
    
    printf("Digite o percentual de faltas e a media final\n");
    scanf("%d %d", &f, &mf);
    
    if (f > 25) {
        printf("RF");
    }

    if (f <= 25) {
        if (mf < 50) {
            printf("RN");
        }
        if (mf >= 50) {
            printf("AP");
        }
    }
    return 0;
}
