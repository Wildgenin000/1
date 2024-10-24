#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, i = 0, j;
    char binar[32];

    printf("Introduceti numarul in baza 10: ");
    scanf("%d", &n);

    if(n==0)
    {
        binar[i++] = '0';
    }

    while(n> 0)
    {
        c = n % 2;
        binar[i++] = c + '0';
        n /= 2;
    }

    binar[i] = '\0';

    for (j=0;j<i/2;j++)
    {
        char aux = binar[j];
        binar[j] = binar[i-j-1];
        binar[i -j-1] = aux;
    }

    printf("Numarul in baza 2 este: %s\n", binar);
    return 0;
}
