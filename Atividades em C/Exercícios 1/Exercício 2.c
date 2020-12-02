#include<stdio.h>
#include<stdlib.h>

int main()
{
   int numero, dobro;
   printf ("Digite um numero: \n");
   scanf ("%d", &numero); // aprsenta o valor de um número real e armazena na memória
   dobro=numero*numero;
   printf ("O dobro do numero escolhido eh = %.d\n", dobro);
   system ("pause");
   return (0);
}
