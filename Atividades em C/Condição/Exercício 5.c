#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero;
    printf ("Digite um numero: \n");
    scanf ("%d", &numero);
    if (numero%3==0 && numero%7==0) {
        printf ("O numero eh divisivel por 3 e 7.\n");
    } else{
        printf ("O numero nao eh divisivel por 3 e 7. \n");
    }
    system ("pause");
    return (0);
}
