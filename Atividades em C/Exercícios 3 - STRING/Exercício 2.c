#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"");
    char nome[30];
    char endereco[50];
    char telefone[20];
    char bairro[20];
    char cidade[30];
    char estado[15];
    printf ("Nome do cliente: \n");
    scanf ("%s", &nome);

    printf ("Endereço: \n");
    scanf ("%s", &endereco);

    printf ("Telefone: \n");
    scanf ("%s", &telefone);

    printf ("Bairro: \n");
    scanf ("%s", &bairro);

    printf ("Cidade: \n");
    scanf ("%s", &cidade);

    printf ("Estado: \n");
    scanf ("%s", &estado);

    printf ("Nome do Cliente: %s\n", nome);
    printf ("Endereço: %s\n", endereco);
    printf ("Telefone: %s\n", telefone);
    printf ("Bairro: %s\n", bairro);
    printf ("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);

system ("pause");
return (0);
}
