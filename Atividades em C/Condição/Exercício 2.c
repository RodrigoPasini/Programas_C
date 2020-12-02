#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero1, numero2, soma;
    printf ("Digite o primeiro numero: \n");
    scanf ("%d", &numero1);
    printf ("Digite o segundo numero: \n");
    scanf ("%d", &numero2);
    soma = numero1 + numero2;
    if (soma>20){
        printf ("O resultado da soma eh = %d \n", soma+8);
    } else{
        printf ("O resultado da soma eh = %d \n", soma-5);
    }
    system ("pause");
    return (0);
}
