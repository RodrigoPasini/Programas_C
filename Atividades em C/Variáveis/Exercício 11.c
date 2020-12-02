#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float n1, n2, soma, sub, mult, div;
    printf ("Digite o primeiro numero: \n");
    scanf ("%f", &n1);
    printf ("Digite o segundo numero: \n");
    scanf ("%f", &n2);
    soma=n1+n2;
    printf ("O resultado da soma eh = %.f\n", soma);
    sub=n1-n2;
    printf ("O resultado da subtracao eh = %.f\n", sub);
    mult=n1*n2;
    printf ("O resultado da multiplicacao eh = %.f\n", mult);
    div=n1/n2;
    printf ("O resultado da divisao eh = %.f\n", div);
    system ("pause");
    return (0);

}

