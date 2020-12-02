#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float n1, resultado;
    printf("Digite um numero: \n");
    scanf("%f", &n1);
    resultado=(n1/4);
    printf("O resultado de 1/4 do numero eh = %.f\n", resultado);
    system("pause");
    return(0);
}
