#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char letra1, letra2;
    printf ("Insira um caractere: \n");
    letra1 = getchar();
    printf ("Insira outro caractere: \n");
    letra2 = getchar();
    scanf ("Você digitou: '%c' e '%c'", letra1,letra2);
    return (0);
}
