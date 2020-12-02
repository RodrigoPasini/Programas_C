#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main (void)
{
    setlocale(LC_ALL,"");
    char sobrenome[10]="Pasini";
    strcat(sobrenome, " Fiad Rodrigo");
    printf ("O meu nome escrito de trás para frente fica desta forma: \n%s\n", sobrenome);
system ("pause");
return (0);
}
