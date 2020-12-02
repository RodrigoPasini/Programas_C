#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float n1, quadrado;
    printf ("Digite um numero: \n");
    scanf ("%f", &n1);
    quadrado= n1*n1;
    printf ("O resultado do quadrado do numero eh = %.f\n", quadrado);
    system ("pause");
    return (0);
}
