#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main (void)
{
    setlocale(LC_ALL,"");
    char nome[7]="Rodrigo";
    char sobrenome[6]="Pasini";
    int retorno;
    retorno=strcmp(nome,sobrenome);
    printf ("Retorno = %d\n", retorno);
    system ("pause");
    return (0);
}
