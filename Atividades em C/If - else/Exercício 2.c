#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int idade, fim;
    setlocale(LC_ALL,"");
    do
    {
    printf ("**********ELEI��ES 2020 - SEU VOTO IMPORTA**********\n");
    printf ("Informe sua idade para saber sua condi��o de voto como eleitor: ");
    scanf ("%d", &idade);
    if (idade>=0 && idade<16)
    {
        printf("N�O � PERMITIDO VOTO.\n");
    }
    else
        if (idade>=16 && idade<18)
    {
        printf("VOTO FACULTATIVO.\n");
    }
    else
        if (idade>=18 && idade<65)
    {
        printf("VOTO OBRIGAT�RIO.\n");
    }
    else
        if (idade>=65)
    {
        printf("VAI PARA CASA SE PROTEGER DO CORNOVA V�RUS.\n");
    }
    else
    {
        printf ("OP��O INV�LIDA.\n");
    }
    printf ("Caso queira encerrar o programa, digite '0'.\n");
    scanf ("%d", &fim);
    }while (fim|=0);
system ("pause");
return (0);
}
