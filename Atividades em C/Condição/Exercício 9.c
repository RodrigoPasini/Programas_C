#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ano_nasc, ano_atual, idade;
    printf ("Digite o ano de seu nascimento: \n");
    scanf ("%d", &ano_nasc);
    printf ("Digite o ano atual: \n");
    scanf ("%d", &ano_atual);
    idade= ano_atual-ano_nasc;
    if (ano_nasc>ano_atual){
        printf ("O ano de nascimento nao eh valido. \n");
    } else {
        printf ("A sua idade eh %d\n", idade);
    }
    system ("pause");
    return (0);

}
