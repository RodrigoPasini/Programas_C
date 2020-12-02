#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int peso, fim;
    setlocale(LC_ALL,"");
    do
    {
    printf ("Digite o peso do veículo para saber sua classificação:");
    scanf ("%i", &peso);
    if (peso>0 && peso<=500)
    {
        printf ("Classificação do veículo: VEÍCULO LEVE.\n");
    }
    else
        if (peso>500 && peso<=900)
        {
            printf ("Classificação do veículo: VEÍCULO MÉDIO.\n");
        }
        else
            if (peso>900 && peso<=1200)
            {
                printf ("Classificação do veículo: VEÍCULO GRANDE.\n");
            }
            else
                if (peso>1200 && peso<=2000)
            {
                printf ("Classificação do veículo: VEÍCULO CAMINHONETE.\n");
            }
            else
                if (peso>2000 && peso<=4000)
            {
                printf ("Classificação do veículo: VEÍCULO CAMINHÃO.\n");
            }
            else
                if (peso>4000)
            {
                printf ("Classificação do veículo: VEÍCULO CARRETA.\n");
            }
            else
            {
                printf ("OPÇÃO INVÁLIDA.\n");
            }
            printf("Se quiser encerrar o programa, digite '0'.");
            scanf ("%d", &fim);
     }
     while (fim|=0);
system ("pause");
return (0);
}

