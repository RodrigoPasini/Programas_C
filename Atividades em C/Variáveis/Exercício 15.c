#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float produto, percentual, desconto, total;
    printf ("Quanto custa o produto? \n");
    scanf ("%f", &produto);
    printf ("Qual eh o percentual de desconto?\n");
    scanf ("%f", &percentual);
    desconto = produto * (percentual/100);
    printf ("O valor de desconto do produto serah de r$: %.2f\n", desconto);
    total = produto - desconto;
    printf ("O valor do produto com o desconto serah de r$: %.2f\n", total);
    system ("pause");
    return (0);
}
