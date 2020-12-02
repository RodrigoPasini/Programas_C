#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero;
    printf ("Digite um numero: \n");
    scanf ("%d", &numero);
    if (numero%3==0){
        printf ("Eh multiplo de 3. \n");
    } else{
        printf ("Nao eh multiplo de 3. \n");
    }
    system ("pause");
    return (0);
}
