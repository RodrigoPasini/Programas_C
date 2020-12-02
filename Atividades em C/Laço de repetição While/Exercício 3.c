#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int contador=1;
    while (contador<=100)
    {
        if (contador%2==1)
            printf (" %d\t", contador);
            else
                printf ("\t %d\n", contador);
        contador++;
    }
system ("pause");
return (0);
}

