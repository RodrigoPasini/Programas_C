#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero;
    printf ("Digite um numero: \n");
    scanf ("%d", &numero);
    if (numero>20){
        printf ("Maior do que 20 \n");
    } else {
    if (numero==20){
        printf ("Igual a 20 \n");
    } else{
        printf ("Menor do que 20 \n");
    }
    system ("pause");
    return (0);
}
}
