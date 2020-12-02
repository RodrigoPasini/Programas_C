#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    char nome[30], endereco[30], telefone[15];
    printf ("Escreva o nome do cliente: \n");
    gets(nome);
    system("cls");
    printf ("Escreva o endereco do cliente: \n");
    gets(endereco);
    system("cls");
    printf ("Digite o telefone do cliente: \n");
    gets(telefone);
    system("cls");
    printf ("Nome do cliente: %s\n", nome);
    printf ("Endereco do cliente eh: %s\n", endereco);
    printf("O telefone do cliente eh: %s\n", telefone);
    system("pause");
    return(0);
}
