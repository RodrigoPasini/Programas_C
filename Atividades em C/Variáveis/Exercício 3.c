#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int n1, n2, n3;
    float media;
    printf ("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf ("Digite o segundo numero: \n");
    scanf("%d", &n2);
    printf ("Digite o terceiro numero: \n");
    scanf("%d", &n3);
    media = (n1+n2+n3) / 3.0;
    printf("A media aritmetica entre os numeros 5, 8 e 12 eh = %f\n", media);
    system("pause");
    return(0);
}
