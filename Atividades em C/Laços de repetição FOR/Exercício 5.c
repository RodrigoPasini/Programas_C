#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL,"");
    int maior, segundo_maior, numero, contador;
    printf ("Digite o número 1: ");
    scanf ("%d", &maior);
    printf ("Digite o número 2: ");
    scanf ("%d", &segundo_maior);
    if (maior<segundo_maior)
    {
        contador=maior;
        maior=segundo_maior;
        segundo_maior=contador;
    }
    for (contador=3; contador<=10; contador++)
    {
        printf ("Digite o número %d: ", contador);
        scanf ("%d", &numero);

        if (numero>maior)
        {
            segundo_maior=maior;
            maior=numero;
        }
        else
            if (numero>segundo_maior)
        {
            segundo_maior=numero;
        }
    }
        printf ("Maior: %d\n", maior);
        printf ("Segundo maior: %d\n", segundo_maior);
system ("pause");
return (0);
}
