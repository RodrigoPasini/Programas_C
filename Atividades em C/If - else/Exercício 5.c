#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int time, fim;
    setlocale(LC_ALL,"");
    do
    {
    printf ("Informe qual � o seu time do cora��o:\n");
    printf ("1 - CORITIBA\n");
    printf ("2 - PARAN� CLUBE\n");
    printf ("3 - ATHL�TICO\n");
    scanf ("%d", &time);
    if (time==1)
    {
        printf ("CORITIBA - O GLORIOSO\n");
    }
    else
        if (time==2)
    {
        printf ("PARAN� CLUBE - O TIME DA VILA\n");
    }
    else
        if (time==3)
        {
            printf ("ATHL�TICO - O FURAC�O\n");
        }
        else
        {
            printf ("Op��o Inv�lida!\n");
        }
        printf ("Para encerrar o programa digite '0'.\n");
        scanf ("%d", &fim);
    }while (fim|=0);
system("pause");
return (0);
}
