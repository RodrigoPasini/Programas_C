#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float salario, percentual_reajuste, total;
    printf ("Informe o salario do empregado: r$ \n");
    scanf ("%f", &salario); // sal�rio atual do empregado
    printf ("O percentual de reajuste eh de: \n");
    scanf ("%f", &percentual_reajuste); // percentual de reajuste do sal�rio
    total = salario + (salario*(percentual_reajuste/100));
    printf ("O valor do novo salario eh de: r$ %.2f\n", total); // valor do novo sal�rio
    system ("pause");
    return (0);
}
