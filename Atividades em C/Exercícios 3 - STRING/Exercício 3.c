#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int i;
    char nomes[3][30];
 for(i=0;i<3;i++)
 {
 printf("Digite o seu nome completo %d: ",i+1);
 scanf("%s", &nomes[i]);
 }
 printf("\n::: Nome em ordem inversa :::\n");
 for(i=2;i>=0;i--)
 printf("%s\n",nomes[i]);
 return 0;
}
