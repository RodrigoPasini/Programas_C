#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int esporte, fim;
    setlocale(LC_ALL,"");
    do
    {
    printf ("Informe qual � o seu esporte favorito: \n");
    printf ("1 - FUTEBOL\n");
    printf ("2 - BASQUETE\n");
    printf ("3 - VOLEI\n");
    printf ("4 - T�NIS\n");
    printf ("5 - FUTEBOL AMERICANO\n");
    printf ("6 - ATLETISMO\n");
    printf ("7 - NATA��O\n");
    scanf ("%d", &esporte);
    if (esporte==1)
    {
        printf ("FUTEBOL\n");
    }
    else
        if (esporte==2)
    {
        printf ("BASQUETE\n");
    }
    else
        if (esporte==3)
    {
        printf ("VOLEI\n");
    }
    else
        if (esporte==4)
    {
        printf ("T�NIS\n");
    }
    else
        if (esporte==5)
    {
        printf ("FUTEBOL AMERICANO\n");
    }
    else
        if (esporte==6)
    {
        printf ("ATLETISMO\n");
    }
    else
        if (esporte==7)
    {
        printf ("NATA��O\n");
    }
    else
    {
        printf ("OP��O INV�LIDA\n");
    }
    printf ("Se desejar encerrar o programa, digite '0'.");
    scanf ("%d", &fim);
    system ("cls");
    }while (fim|=0);
system ("pause");
return (0);
}
