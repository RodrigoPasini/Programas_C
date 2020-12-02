#include<stdio.h>
#include<stdlib.h>

int main()
{
    float veiculo, financiado, parcela;
    printf ("Informe o valor do veiculo: r$\n");
    scanf ("%f", &veiculo);
    financiado = (0.15*veiculo) + veiculo;
    printf ("O valor do veiculo financiado ficara em: r$ %.2f\n", financiado);
    parcela = financiado / 6;
    printf ("O valor da parcela para o veiculo financiado sera de: r$ %.2f\n", parcela);
    system("pause");
    return (0);
}
