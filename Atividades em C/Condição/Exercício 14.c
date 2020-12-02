#include<stdio.h>
#include<stdlib.h>

int main()
{
    float salario;
    printf ("Digite o valor do salario da pessoa: r$\n");
    scanf ("%f", &salario);
    if (salario<=600){
        printf ("Isento de desconto.\n");
    } else{
    if (salario>600 && salario<=1200){
        printf ("Havera um desconto de 20 por cento.\n");
    } else{
    if (salario>1200 && salario<=2000){
        printf ("Havera um desconto de 25 por cento.\n");
    } else {
        printf ("Havera um desconto de 30 por cento.\n");
    }
    }
    }
    system ("pause");
    return (0);
}
