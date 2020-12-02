#include<stdio.h>
#include<stdlib.h>

int main()
{
    float deposito, rendimento, total;
    printf ("Informe o valor depositado: r$ \n");
    scanf ("%f", &deposito);
    rendimento = deposito*0.70;
    printf ("O valor do rendimento eh de: r$ %.2f\n", rendimento);
    total = deposito + rendimento;
    printf ("O valor total do deposito com rendimento eh de: r$ %.2f\n", total);
    system ("pause");
    return (0);
}
