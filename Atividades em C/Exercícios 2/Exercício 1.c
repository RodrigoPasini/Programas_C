#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float peso, altura, imc;
    printf ("Informe o seu peso: \n");
    scanf ("%f", &peso);
    printf ("Informe a sua altura: \n");
    scanf ("%f", &altura);
    imc = peso/(altura*altura);
    printf ("O seu IMC eh = %.2f\n", imc);
    if (imc<18.5){
        printf ("Abaixo do peso.\n");
    }
    else
    {
        if (imc>=18.5 && imc<25){
            printf ("Peso normal.\n");
        }
        else
        {
            if (imc>=25 && imc<30){
                printf ("Acima do peso.\n");
            }
            else
            {
                printf ("Obeso. \n");
            }
        }
    }
    system ("pause");
    return (0);
}
