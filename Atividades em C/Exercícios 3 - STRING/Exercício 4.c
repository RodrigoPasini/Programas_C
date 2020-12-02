#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"");
    int i, tam=30;

  char nome[tam];

  printf("Digite um nome: ");

  gets(nome);//lê uma string do teclado


  for(i=0; i<=3; i++)

  {

    printf("Letra %d: \%c\n", i+1, nome[i]);

  }

  printf("\n\n");

  system("pause");


return (0);
}
