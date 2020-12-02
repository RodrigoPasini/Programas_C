#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero1, numero2, numero3;
    printf ("Digite o primeiro numero: \n");
    scanf ("%d", &numero1);
    printf ("Digite o segundo numero: \n");
    scanf ("%d", &numero2);
    printf ("Digite o terceiro numero: \n");
    scanf ("%d", &numero3);
    if (numero1>numero2 && numero1>numero3 && numero2>numero3){
        printf ("%d\n%d\n%d \n", numero1, numero2, numero3);
    }else {
    if (numero1<numero2 && numero2>numero3 && numero1>numero3){
        printf ("%d\n%d\n%d\n", numero2, numero1, numero3);
    } else{
    if (numero3>numero1 && numero3>numero2 &&numero1>numero2){
        printf ("%d\n%d\n%d\n", numero3, numero1, numero2);
    } else{
    if (numero1>numero2 && numero1>numero3 && numero3>numero2){
        printf ("%d\n%d\n%d\n", numero1, numero3, numero2);
    } else {
    if (numero1<numero2 && numero2>numero3 && numero1<numero3){
        printf ("%d\n%d\n%d\n", numero2, numero3, numero1);
    }else {
        printf ("%d\n%d\n%d\n", numero3, numero2, numero1);
    }
    }
    }
    }
    }
    system ("pause");
    return (0);
}
