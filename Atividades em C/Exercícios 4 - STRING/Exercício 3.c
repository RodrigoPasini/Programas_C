#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main (void)
{
    setlocale(LC_ALL,"");
    char nome[30];
    strcpy(nome, "Rodrigo Fiad Pasini");
    printf("O meu nome completo é: %s\n", nome);
system ("pause");
return (0);
}
