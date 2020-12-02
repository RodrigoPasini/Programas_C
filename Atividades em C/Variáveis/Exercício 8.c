#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int n1,n2,subtracao;
    printf ("Digite o primeiro numero: \n");
    scanf ("%d", &n1);
    printf ("Digite o segundo numero: \n");
    scanf ("%d", &n2);
    subtracao = n1 - n2;
    printf ("O resultado da subtracao eh = %d\n", subtracao);
    system("pause");
    return(0);

}
