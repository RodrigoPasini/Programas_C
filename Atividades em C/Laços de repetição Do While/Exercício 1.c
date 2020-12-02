#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    float peso, altura, imc;
    int fim;
    setlocale (LC_ALL,"Portuguese");
    do
    {
    printf ("Informe o seu peso: \n");
    scanf ("%f", &peso);
    printf ("Informe a sua altura: \n");
    scanf ("%f", &altura);
    imc=peso/(altura*altura);
    printf ("O seu IMC é: ", imc);
    if (imc<18.5)
        printf ("Abaixo do peso\n");
    else
    {
        if (imc>=18.5 && imc<25)
            printf ("Peso normal\n");
        else
        {
            if (imc>=25 && imc<30)
                printf ("Acima do peso\n");
            else
            {
                printf ("Obeso\n");
            }
        }
    }
    printf ("Digite 1 para continuar ou 2 para sair: \n");
    scanf ("%d", &fim);
    }
    while (fim==1);
system ("pause");
return (0);
}
