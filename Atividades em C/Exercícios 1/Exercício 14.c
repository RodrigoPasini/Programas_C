#include<stdio.h>
#include<stdlib.h>

int main()
{
    float n1, n2, n3, n4, n5, media, base, altura, areat;
    printf ("Digite a primeira nota: \n");
    scanf ("%f", &n1);
    printf ("Digite a segunda nota: \n");
    scanf ("%f", &n2);
    printf ("Digite a terceira nota: \n");
    scanf ("%f", &n3);
    printf ("Digite a quarta nota: \n");
    scanf ("%f", &n4);
    printf ("Digite a quinta nota: \n");
    scanf ("%f", &n5);
    media = (n1+n2+n3+n4+n5)/5;
    printf ("A media das notas eh = %.2f\n", media);

    printf ("Informe quantos centimetros tem a base do triangulo: \n");
    scanf ("%f", &base);
    printf ("Informe quantos centimetros tem a altura do triangulo: \n");
    scanf ("%f", &altura);
    areat = base*altura /2;
    printf ("O valor da area de um triangulo em centimetros eh = %.2f\n", areat);
    system ("pause");
    return (0);
}
