#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
setlocale(LC_ALL,"");
char nome[15];
int peso[15], idade[15], i, maior=0, menor=255, posicaomaiorpeso=0, posicaomenoridade=0;
float somapeso, somaidade;
for (i=0;i<15;i++)
{
    printf ("O nome do %d participante �: \n", i+1);
    scanf ("%s", &nome[i]);
    printf ("A idade do %d participante �: \n", i+1);
    scanf ("%d", &idade[i]);
    printf ("O peso do %d participante �: \n", i+1);
    scanf ("%d", &peso[i]);
}
for (i=0;i<15;i++)
{
    somapeso=somapeso+peso[i];
    if (peso[i]>maior)
    {
        maior=peso[i];
        posicaomaiorpeso=i;
    }
}
for (i=0;i<15;i++)
{
    somaidade=somaidade+idade[i];
    if (idade[i]<menor)
    {
        menor=idade[i];
        posicaomenoridade=i;
    }
}

printf ("O participante com maior peso �: %d\n", maior);
printf ("O participante com menor idade �: %d\n", menor);
printf ("A m�dia de idade dos participantes �: %.2f\n", somaidade/15);
printf ("A m�dia de peso dos participantes �: %.2f\n", somapeso/15);

    system ("pause");
    return (0);
}
