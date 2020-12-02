#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float n1, n2, n3, media;
    printf ("Insira o primeiro numero: \n");
    scanf ("%f", &n1);
    printf ("Insira o segundo numero: \n");
    scanf ("%f", &n2);
    printf ("Insira o terceiro numero: \n");
    scanf ("%f", &n3);
    media=(n1+n2+n3)/3;
    printf ("O resultado da media = %.f\n", media);
    system("pause");
    return (0);
}
