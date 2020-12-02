#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main (void)
{
    setlocale(LC_ALL,"");
    char nome[20]="Rodrigo Fiad Pasini";
    int tamanho;
    tamanho=strlen(nome);
    printf ("O tamanho da string %s vale %d.\n", nome, tamanho);
    getch();
    return(0);
}
