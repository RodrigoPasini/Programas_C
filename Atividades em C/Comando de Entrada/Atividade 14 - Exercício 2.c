#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int a, b, c, soma; //declaração das variáveis
    printf ("Digite o primeiro numero: ");
    scanf ("%d", &a); // recebe um inteiro e armazena a variável a
    printf ("Digite o segundo numero: ");
    scanf ("%d", &b); // recebe um inteiro e armazen a variavel b
    printf ("Digite o terceiro numero: ");
    scanf ("%d", &c);
    soma = a + b + c;
    printf ("O valor da soma = %d\n", soma); // efetua a soma das variáveis a, b, c e armazena a variável soma
    system ("pause");
    return (0);
}
