#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1, n2, n3, soma, subt; // n1, n2 e n3 s�o os n�meros que a pessoa ter� de digitar
    printf ("Digite um numero: \n");
    scanf ("%i", &n1); // informar o primeiro n�mero e armazenar na mem�ria
    printf ("Digite outro numero: \n");
    scanf ("%i", &n2); // informar o segundo n�mero e armazenar na mem�ria
    soma = n1 + n2;
    printf ("O resultado da soma eh = %i\n", soma);
    printf ("Digite um terceiro numero para subtrair com o resultado da soma: \n");
    scanf ("%i", &n3); // informar o terceiro n�mero e armazenar na mem�ria
    subt = (n1+n2)-n3;
    printf ("O resultado da subtracao eh = %i\n", subt);
    system ("pause");
    return (0);
}
