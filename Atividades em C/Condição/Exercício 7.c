#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero;
    printf ("Digite um numero: \n");
    scanf ("%d", &numero);
    if (numero>=20 && numero<=50) {
        printf ("O numero estah compreendido entre 20 e 50. \n");
    } else {
        printf ("O numero nao estah compreendido entre 20 e 50. \n");
    }
    system ("pause");
    return (0);
}
