#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int a, b, c, soma; //declara��o das vari�veis
    printf ("Digite o primeiro numero: ");
    scanf ("%d", &a); // recebe um inteiro e armazena a vari�vel a
    printf ("Digite o segundo numero: ");
    scanf ("%d", &b); // recebe um inteiro e armazen a variavel b
    printf ("Digite o terceiro numero: ");
    scanf ("%d", &c);
    soma = a + b + c;
    printf ("O valor da soma = %d\n", soma); // efetua a soma das vari�veis a, b, c e armazena a vari�vel soma
    system ("pause");
    return (0);
}
