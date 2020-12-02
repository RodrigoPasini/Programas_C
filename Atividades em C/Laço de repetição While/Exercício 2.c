#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int contador=1;
    while (contador<=100)
    {
        if (contador%2==0)
            printf ("%d, ", contador);
        contador++;
    }
system ("pause");
return (0);
}
