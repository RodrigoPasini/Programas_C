#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int peso, fim;
    setlocale(LC_ALL,"");
    do
    {
    printf ("Digite o peso do ve�culo para saber sua classifica��o:");
    scanf ("%i", &peso);
    if (peso>0 && peso<=500)
    {
        printf ("Classifica��o do ve�culo: VE�CULO LEVE.\n");
    }
    else
        if (peso>500 && peso<=900)
        {
            printf ("Classifica��o do ve�culo: VE�CULO M�DIO.\n");
        }
        else
            if (peso>900 && peso<=1200)
            {
                printf ("Classifica��o do ve�culo: VE�CULO GRANDE.\n");
            }
            else
                if (peso>1200 && peso<=2000)
            {
                printf ("Classifica��o do ve�culo: VE�CULO CAMINHONETE.\n");
            }
            else
                if (peso>2000 && peso<=4000)
            {
                printf ("Classifica��o do ve�culo: VE�CULO CAMINH�O.\n");
            }
            else
                if (peso>4000)
            {
                printf ("Classifica��o do ve�culo: VE�CULO CARRETA.\n");
            }
            else
            {
                printf ("OP��O INV�LIDA.\n");
            }
            printf("Se quiser encerrar o programa, digite '0'.");
            scanf ("%d", &fim);
     }
     while (fim|=0);
system ("pause");
return (0);
}

