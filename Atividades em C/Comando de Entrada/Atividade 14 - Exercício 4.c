#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a, b, soma, divisao, multiplicacao, subtracao;
    printf ("Digite um numero:");
    scanf ("%d", &a); // determina que o número será do tipo inteiro e armazena a variável "a"
    printf ("Digite um segundo numero: ");
    scanf ("%d", &b); // determina que o número é inteiro e armazena a variável "b"
    soma = a + b;
    printf ("A soma dos valores =%d\n", soma); // mostra mensagem com o resultado da soma
    divisao = a / b;
    printf ("A divisao dos valores =%d\n", divisao); // mostra mensagem com o resultado da divisão
    multiplicacao = a * b;
    printf ("A multiplicacao dos valores =%d\n", multiplicacao); // mostra mensagem com o resultado da multiplicação
    subtracao = a - b;
    printf ("A subtracao dos valores =%d\n", subtracao); // mostra mensagem com o resultado da subtração
    system ("pause");
    return (0);
}
