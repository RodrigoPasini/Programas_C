#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int idade, fim;
    setlocale(LC_ALL,"");
    do
    {
    printf ("**********ELEIÇÕES 2020 - SEU VOTO IMPORTA**********\n");
    printf ("Informe sua idade para saber sua condição de voto como eleitor: ");
    scanf ("%d", &idade);
    if (idade>=0 && idade<16)
    {
        printf("NÃO É PERMITIDO VOTO.\n");
    }
    else
        if (idade>=16 && idade<18)
    {
        printf("VOTO FACULTATIVO.\n");
    }
    else
        if (idade>=18 && idade<65)
    {
        printf("VOTO OBRIGATÓRIO.\n");
    }
    else
        if (idade>=65)
    {
        printf("VAI PARA CASA SE PROTEGER DO CORNOVA VÍRUS.\n");
    }
    else
    {
        printf ("OPÇÃO INVÁLIDA.\n");
    }
    printf ("Caso queira encerrar o programa, digite '0'.\n");
    scanf ("%d", &fim);
    }while (fim|=0);
system ("pause");
return (0);
}
