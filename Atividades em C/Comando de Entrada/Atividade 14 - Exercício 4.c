#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a, b, soma, divisao, multiplicacao, subtracao;
    printf ("Digite um numero:");
    scanf ("%d", &a); // determina que o n�mero ser� do tipo inteiro e armazena a vari�vel "a"
    printf ("Digite um segundo numero: ");
    scanf ("%d", &b); // determina que o n�mero � inteiro e armazena a vari�vel "b"
    soma = a + b;
    printf ("A soma dos valores =%d\n", soma); // mostra mensagem com o resultado da soma
    divisao = a / b;
    printf ("A divisao dos valores =%d\n", divisao); // mostra mensagem com o resultado da divis�o
    multiplicacao = a * b;
    printf ("A multiplicacao dos valores =%d\n", multiplicacao); // mostra mensagem com o resultado da multiplica��o
    subtracao = a - b;
    printf ("A subtracao dos valores =%d\n", subtracao); // mostra mensagem com o resultado da subtra��o
    system ("pause");
    return (0);
}
