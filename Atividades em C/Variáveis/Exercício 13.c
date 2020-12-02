#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float saldo1, saldo2;
    printf ("O saldo de sua conta poupanca eh de:\n");
    scanf ("%f", &saldo1);
    saldo2= saldo1 + (saldo1*0,02);
    printf ("O saldo de sua conta poupanca com o reajuste eh de: %.2f\n", saldo2);
    system ("pause");
    return (0);
}
