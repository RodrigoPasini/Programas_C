#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float base, altura, perimetro, area;
    printf ("Insira o valor da base do triangulo: \n");
    scanf ("%f", &base);
    printf ("Insira o valor da altura do triangulo: \n");
    scanf ("%f", &altura);
    perimetro = base + altura;
    printf ("O resultado do perimetro eh: %.2f\n", perimetro);
    area = base * altura;
    printf ("O resultado da area eh: %.2f\n", area);
    system ("pause");
    return (0);
}
