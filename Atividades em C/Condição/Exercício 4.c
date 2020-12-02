#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero;
    printf ("Digite um numero: \n");
    scanf ("%d", &numero);
    if (numero%5==0) {
        printf ("Eh divisivel por 5.\n");
    } else {
        printf ("Nao eh divisivel por 5.\n");
    }
    system ("pause");
    return (0);
}
