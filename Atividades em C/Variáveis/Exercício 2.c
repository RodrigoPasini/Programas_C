#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int n1, n2, soma; // n1 2 n2 s�o os n�meros digitados
    printf("Digite o numero 30: ");
    scanf("%d", &n1);
    printf("Digite o numero 27: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("A soma dos valores = %d\n", soma);
    system ("pause");
    return (0);
}
