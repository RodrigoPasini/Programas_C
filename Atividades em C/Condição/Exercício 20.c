#include<stdio.h>
#include<stdlib.h>

int main()
{
    int saldo;
    printf ("Digite o saldo do cliente: r$");
    scanf ("%d", &saldo);
    if (saldo<=500){
        printf ("Nenhum credito.");
    }else{
    if (saldo>500 && saldo<=1000){
        printf ("Saldo: r$%d \n", saldo);
        printf ("Credito: r$%.2f\n", saldo*0,3);
    }else{
    if (saldo>1000 && saldo<=3000){
        printf ("Saldo: r$%d \n", saldo);
        printf ("Credito: r$%.2f\n", saldo*0.4);
    }else{
        printf ("Saldo: r$%d \n", saldo);
        printf ("Credito: r$%.2f\n", saldo*0.5);
        }
        }
        }
  system ("pause");
  return (0);
}
