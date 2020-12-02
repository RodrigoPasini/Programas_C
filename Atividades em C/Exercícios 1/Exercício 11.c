#include<stdio.h>
#include<stdlib.h>

int main()
{
    float produto, prestacao;
    printf ("Informe o valor do produto: r$\n");
    scanf ("%f", &produto);
    prestacao = produto / 12;
    printf ("O valor do produto eh de: r$ %.2f\n", produto);
    printf ("O valor da prestacao para 12 meses eh de: r$ %.2f\n", prestacao);
    system ("pause");
    return (0);
}
