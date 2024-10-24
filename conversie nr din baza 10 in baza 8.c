#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, i = 0,j;
    char octal[32];

    printf("Introduceti numarul in baza 10: ");
    scanf("%d", &n);


    if(n==0)
    {
        octal[i++] = '0';
    }


    while(n>0)
    {
        c = n % 8;
        octal[i++] = c + '0';
        n /= 8;
    }

    octal[i] = '\0';

    for (j=0;j<i/2;j++)
    {
        char aux = octal[j];
        octal[j] = octal[i-j-1];
        octal[i-j-1] = aux;
    }

    printf("Numarul in baza 8 este: %s\n", octal);
    return 0;
}
