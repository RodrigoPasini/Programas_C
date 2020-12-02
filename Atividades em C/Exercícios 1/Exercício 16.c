#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valor_aplicado, valor_rendimento, valor_total;
    printf ("Informe o valor que serah aplicado: r$ \n");
    scanf ("%f", &valor_aplicado);
    valor_rendimento = valor_aplicado * 0.05;
    printf ("O valor do rendimento foi de: r$ %.2f\n", valor_rendimento);
    valor_total = valor_aplicado + valor_rendimento;
    printf ("O valor total com a aplicacao eh de: r$ %.2f\n", valor_total);
    system ("pause");
    return (0);
}
