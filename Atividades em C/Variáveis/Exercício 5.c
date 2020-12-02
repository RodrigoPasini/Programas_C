#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float n1, n2;
    printf ("Digite o primeiro numero: \n");
    scanf ("%f", &n1);
    printf ("Digite o segundo numero: \n");
    scanf ("%f", &n2);
    printf ("Os numeros escolhidos foram: %.f e %.f\n", n1, n2);
    system("pause");
    return(0);
}
