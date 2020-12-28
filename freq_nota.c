#include <stdio.h>

int main() {
    int ch, nf;
    int f;
    int p1, p2, p3, p4;
    int mp, mf;
    
    printf("Digite a CH: ");
    scanf("%i", &ch);
    printf("Digite o NF: ");
    scanf("%i", &nf);
    f = 100 * nf / ch;

    if (f <= 25) {
        printf("Digite 3 numeros entre 0 e 100: \n");
        scanf("%i %i %i", &p1, &p2, &p3);

        mp = (4 * p1 + 5 * p2 + 6 * p3) / 15;

        if (mp >= 30 && mp < 70) {
            printf("Digite um numero entre 0 e 100: \n");
            scanf("%i", &p4);

            mf = (mp + p4) / 2;
        }
        
        else if (mp > 70 || mp < 30) {
            mf = mp;
        }
    }

    if (f > 25) {
        printf("RF\n");
    }

    if (f <= 25 && mf < 50) {
        printf("RN\n");
    }

    else if (f <= 25 && mf >= 50) {
        printf("AP\n");
        printf("%i", mf);
    } 

    return 0;

}
