/*1. Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem
inversa.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
 int i;
 char palavras[3][30];
 //captura palavras
 for(i=0;i<3;i++)
 {
 printf("Informe palavra %d: ",i+1);
 scanf("%s", &palavras[i]);
 }
 //EXIBE EM ORDEM INVERSA
 printf("\n::: Palavras em ordem inversa :::\n");
 for(i=2;i>=0;i--)
 printf("%s\n",palavras[i]);
 return 0;
}
