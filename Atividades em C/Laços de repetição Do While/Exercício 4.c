#include<stdio.h>
#include<locale.h>

int main()
{
    float soma, notas, media;
    int contador;
    soma=0;
    contador=1;
    setlocale(LC_ALL, "portuguese");
    printf ("\nEntre com as três notas:\n");
    while (contador<=3)
    {
    scanf ("%f", &notas);
    soma=soma+notas;
    contador++;
    }
    media=soma/3;
    printf("Média=%.1f", media);
    if (media>=70)
    {
        printf ("\nAPROVADO");
    }
    else
    {
        printf("\nREPROVADO");
    }
    return 0;
}
