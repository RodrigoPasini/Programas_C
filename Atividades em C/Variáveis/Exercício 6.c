#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int n1, antecessor, sucessor; // n1 é o número a ser digitado
    printf ("Digite um numero: \n");
    scanf ("%d", &n1);
    antecessor=n1-1;
    printf ("O antecessor do numero escolhido eh =%i\n", antecessor);
    sucessor=n1+1;
    printf ("E o seu sucessor eh igual a: %i\n", sucessor);
    system("pause");
    return(0);
}
