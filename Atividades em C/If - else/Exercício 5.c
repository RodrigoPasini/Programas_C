#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int time, fim;
    setlocale(LC_ALL,"");
    do
    {
    printf ("Informe qual é o seu time do coração:\n");
    printf ("1 - CORITIBA\n");
    printf ("2 - PARANÁ CLUBE\n");
    printf ("3 - ATHLÉTICO\n");
    scanf ("%d", &time);
    if (time==1)
    {
        printf ("CORITIBA - O GLORIOSO\n");
    }
    else
        if (time==2)
    {
        printf ("PARANÁ CLUBE - O TIME DA VILA\n");
    }
    else
        if (time==3)
        {
            printf ("ATHLÉTICO - O FURACÃO\n");
        }
        else
        {
            printf ("Opção Inválida!\n");
        }
        printf ("Para encerrar o programa digite '0'.\n");
        scanf ("%d", &fim);
    }while (fim|=0);
system("pause");
return (0);
}
