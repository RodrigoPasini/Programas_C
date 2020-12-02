#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valor_produto, valor_venda;
    printf ("Informe o valor do produto: r$\n");
    scanf ("%f", &valor_produto);
    if (valor_produto<20) {
        printf ("O produto sera vendido com um lucro de 45 por cento e o valor da venda eh de r$%.2f\n",valor_produto+(valor_produto*0.45));
    } else{
        printf ("O produto sera vendido com um lucro de 30 por cento e o valor da venda eh de r$%.2f\n",valor_produto+(valor_produto*0.30));
    }
    system("pause");
    return (0);
}
