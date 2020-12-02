#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float reais, cotacao_dolar, dolar;
    printf ("Informe quantos reais voce quer que seja convertido em dolar: r$ \n");
    scanf ("%f", &reais);
    printf ("Informe a cotacao do dia da conversao de reais para dolar: us$ \n");
    scanf ("%f", &cotacao_dolar);
    dolar = reais / cotacao_dolar;
    printf ("Você terá em dolares um total de: us$ %.2f\n", dolar);
    system("pause");
    return (0);
}
