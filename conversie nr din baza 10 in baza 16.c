#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, c, i = 0,j;
    char hex[32];

    printf("Introduceti numarul in baza 10: ");
    scanf("%d", &n);

    if(n==0)
    {
        hex[i++] = '0';
    }

    while (n>0)
    {
        c = n % 16;

        if (c<10)
            hex[i++] = c + '0';
         else
            hex[i++] = c - 10 + 'A';

        n /= 16;
    }

    hex[i] = '\0';

    for (j=0;j<i/2;j++)
    {
        char aux = hex[j];
        hex[j] = hex[i-j-1];
        hex[i-j-1] = aux;
    }

    printf("Numarul in baza 16 este: %s\n", hex);

    return 0;
}
