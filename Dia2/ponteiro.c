#include <stdio.h>

int main (void) { /* um programa bem confuso... */
int i = 2;
int j = i * i;
int*k = &i;
int m = *k * *k;
*k = j**k*m;

printf("%i %i\n", i, j);
printf("%i %i\n", m, *k);
return 0;
}
