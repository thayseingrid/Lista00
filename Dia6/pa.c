#include <stdio.h>

void pa(int q, int r, int n) {
    int i = 1;
    int an;

    while(i <= n) {
        if (i == 1) {
            an = q;
            printf("%i\n", an);
            ++i;
        }    

        else { 
            an = q + ((i - 1) * r);
            printf("%i\n", an);
            ++i;
        }
    }
    printf("\n");
}

void pg(int q_pg, int r_pg, int n_pg) {
    int i = 1;

    while (i <= n_pg) {
        if (i == 1) {
            q_pg = q_pg;
            printf("%i\n", q_pg);
        }
        else {
            q_pg = q_pg * r_pg;
            printf("%i\n", q_pg);
        }
        ++i;
    }
}

int main() {
    int p, q, r, n;

    printf("Digite o valor inicial de uma PA e uma PG: ");
    scanf("%i", &q);
    printf("Digite a razao de uma PA e uma PG: ");
    scanf("%i", &r);
    printf("Digite a quantidade de termos: ");
    scanf("%i", &n);
    printf("Resultado: ");
    printf("\n");
    pa(q, r, n);
    pg(q, r, n);
   
    return 0; 
}
