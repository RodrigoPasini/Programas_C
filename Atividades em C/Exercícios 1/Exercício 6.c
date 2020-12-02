#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valor_geladeira, parcela;
    printf ("Informe o valor pago pela geladeira: r$\n");
    scanf("%f", &valor_geladeira);
    parcela = valor_geladeira / 6;
    printf ("A geladeira podera ser parcelada em até 6 parcelas de: r$ %.2f\n", parcela);
    system ("pause");
    return (0);
}
