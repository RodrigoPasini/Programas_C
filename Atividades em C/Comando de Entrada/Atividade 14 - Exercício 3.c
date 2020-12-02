#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int a, b, c, d, soma, media; // declaração das variáveis das notas (a, b, c, d = NOTA)
    printf ("Digite a primeira nota: ");
    scanf ("%d", &a); // recebe um inteiro e armazena a variável "a"
    printf ("Digite a segunda nota: ");
    scanf ("%d", &b); // recebe um inteiro e armazena a variável "b"
    printf ("Digite a terceira nota: ");
    scanf ("%d", &c); // recebe um inteiro e armazena a variável "c"
    printf ("Digite a quarta nota: ");
    scanf ("%d", &d); // recebe um inteiro e armazena a variável "d"
    soma = a + b + c + d;
    printf ("A soma dos valores = %d\n", soma); // mostra a mensagem com o resultado e armazena a variável soma
    media = (a + b + c + d)/4;
    printf ("A media dos valores = %d\n", media); // mostra a mensagem com o resultado e armazena a variavel media
    system ("pause");
    return (0);
}

