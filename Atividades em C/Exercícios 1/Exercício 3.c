#include<stdio.h>
#include<stdlib.h>

int main()
{
    float produto1, imposto1, produto2, imposto2, produto3, imposto3, valor_liquidoi, valor_total;
    printf ("Digite o valor do primeiro produto: r$\n");
    scanf ("%f", &produto1);
    imposto1 = produto1 * 0.15;
    printf ("O valor do imposto para o produto1 eh = r$ %.2f\n", imposto1);
    printf ("Digite o valor do segundo produto: r$ \n");
    scanf ("%f", &produto2);
    imposto2 = produto2 * 0.15;
    printf ("O valor do imposto para o produto2 eh = r$ %.2f\n", imposto2);
    printf ("Digite o valor do terceiro produto: r$ \n");
    scanf ("%f", &produto3);
    imposto3 = produto3 * 0.15;
    printf ("O valor do imposto para o produto3 eh = r$ %.2f\n", imposto3);
    valor_liquidoi = imposto1 + imposto2 + imposto3;
    printf("O valor liquido de imposto pago eh = r$ %.2f\n", valor_liquidoi);
    valor_total = (produto1+ imposto1) + (produto2+ imposto2) +(produto3+imposto3);
    printf ("O valor total pago eh = r$ %.2f\n", valor_total);
    system ("pause");
    return (0);
    }
