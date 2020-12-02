#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //declaração das variáveis
    int a, b, soma;
    printf ("Digite um numero inteiro: ");
    scanf ("%i", &a); // recebe um inteiro e armazena a variável a
    printf ("Digite outro numero inteiro: ");
    scanf ("%i", &b); // recebe um inteiro e armazena a variável b
    soma = a + b; // realiza a soma das variáveis a + b
    printf("O valor da soma = %d\n", soma); // mostra mensagem com o resultado
    system ("pause");
    return 0;
}
