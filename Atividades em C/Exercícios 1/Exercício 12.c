#include<stdio.h>
#include<stdlib.h>

int main()
{
    float custo_produto, valor_venda, percentual;
    printf ("Informe o valor do produto: r$ \n");
    scanf ("%f", &custo_produto);
    printf ("Informe o percentual de acrescimo do valor do produto: \n");
    scanf ("%f", &percentual);
    valor_venda = custo_produto + (custo_produto*(percentual/100));
    printf ("O valor total da venda eh de: r$ %.2f\n", valor_venda);
    system ("pause");
    return (0);
}
