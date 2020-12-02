#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n1, n2, soma; //n1 e n2 são os números inteiros informados
    printf ("Informe o valor do primeiro numero: \n");
    scanf ("%d", &n1);
    printf ("Informe o valor do segundo numero: \n");
    scanf ("%d", &n2);
    soma = n1 + n2;
    printf ("O valor da soma = %d\n", soma);
    if (soma > 10)
    {
        printf ("O valor da soma eh maior que 10.\n");
    }
    system("pause");
    return (0);

}
