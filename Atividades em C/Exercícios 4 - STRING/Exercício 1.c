#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main (void)
{
    setlocale(LC_ALL,"");
    char nome[10]="Rodrigo";
    strcat(nome, " Fiad Pasini");
    printf ("O meu nome completo �: %s\n", nome);
system ("pause");
return (0);

}
