#include<stdio.h>
#include<stdlib.h>

int main()
{
    float dolar, cotacao, real;
    printf ("Informe a quantidade de dolar a ser convertido: us$ \n");
    scanf ("%f", &dolar);
    printf ("Informe qual eh a cotacao do dolar para conversao em reais: \n");
    scanf ("%f", &cotacao);
    real = dolar * cotacao;
    printf ("O total de reais convertidos eh de: r$ %.2f \n", real);
    system ("pause");
    return (0);
}
