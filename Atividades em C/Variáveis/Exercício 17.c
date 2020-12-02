#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float graus_c, graus_f;
    printf ("Informe a temperatura atual em graus cetigrados: \n");
    scanf ("%f", &graus_c);
    graus_f = 9*graus_c+160/5;
    printf ("A conversao da temperatura em fahrenheit resultara no valor de: F %.2f\n", graus_f);
    system ("pause");
    return (0);
}
