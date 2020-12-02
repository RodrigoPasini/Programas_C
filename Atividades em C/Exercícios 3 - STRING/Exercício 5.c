#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main ()
{
    setlocale (LC_ALL, "");
    int idade;
    char nome[20];
    printf ("Digite seu nome: ");
    scanf ("%s", &nome);
    printf ("Informe sua idade: ");
    scanf ("%d", &idade);
    if (idade>=18)
    {
        printf ("Você é maior de idade!\n");
    }
    else
    {
        printf ("Você é menor de idade!\n");
    }
system ("pause");
return (0);
}
