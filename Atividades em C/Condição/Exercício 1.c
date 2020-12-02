#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero1, numero2, soma;
    printf ("Digite o primeiro numero: \n");
    scanf ("%d", &numero1);
    printf ("Digite o segundo numero: \n");
    scanf ("%d", &numero2);
    soma= numero1 + numero2;
    if(soma>10){
        printf ("O resultado da soma dos dois numeros = %d\n", soma);
    }
    system ("pause");
    return (0);
}
