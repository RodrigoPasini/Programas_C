#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float tempo, velocidade_m, distancia, litros;
    printf ("Quanto tempo durou a viagem? horas\n");
    scanf ("%f", &tempo);
    printf ("Qual foi a velocidade media realizada pelo veiculo? km/n \n");
    scanf ("%f", &velocidade_m);
    distancia = tempo*velocidade_m;
    printf ("A distancia percorrida foi de: km %.2f\n", distancia);
    litros = distancia/12;
    printf ("O consumo de litros feito pelo carro foi de: km/L %.2f\n", litros);
    system ("pause");
    return (0);

}
