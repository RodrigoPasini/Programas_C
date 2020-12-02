#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale (LC_ALL, "");
    int contador, numero;
    for(contador=1;contador<=100;contador++)
    {
    numero=contador%2;
    if (numero%2==1)
    {
        printf ("\n%d", contador);
    }
    else
    {
        printf ("\t%d \n", contador);
    }
    }
return (0);
}
