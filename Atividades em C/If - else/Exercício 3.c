#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int pedido, fim;
    setlocale(LC_ALL,"");
    do{
    printf ("*****PIZZARIA DO RODRIGO - AQUI A PIZZA � A NOSSA OBRA*****\n");
    printf ("Bem vindo ao nosso programa para pedido de pizza.\n");
    printf ("1 - MARGUERITA\n");
    printf ("2 - PORTUGUESA\n");
    printf ("3 - FRANGO\n");
    printf ("4 - 4 QUEIJOS\n");
    printf ("5 - ESPECIALIDADE DA CASA\n");
    printf ("Fa�a agora o seu pedido:");
    scanf ("%d", &pedido);
    if (pedido==1)
    {
        printf ("MARGUERITA\n");
        printf ("A PIZZA DA BANDEIRA ITALIANA\n");
        printf ("muzzarela, tiras de tomate, manjeric�o e or�gano\n");
    }
    else
        if (pedido==2)
    {
        printf ("PORTUGUESA\n");
        printf ("muzzarela, presunto, cebola e ovo.\n");
    }
    else
        if (pedido==3)
    {
        printf ("FRANGO\n");
        printf ("muzzarela, tiras de frango e or�gano.\n");
    }
    else
        if (pedido==4)
    {
        printf("4 QUEIJOS\n");
        printf ("muzzarela, parmes�o, requeij�o e cheddar.\n");
    }
    else
        if (pedido==5)
    {
        printf ("ESPECIALIDADE DA CASA\n");
        printf ("� VERDADEIRA PIZZA DE PIEMONTE, REGI�O NORTE DA IT�LIA.\n");
        printf ("muzzarela ralada, gorgonzola e peda�os de p�ra.\n");
    }
    else
    {
        printf ("OP��O INV�LIDA\n");
    }
    printf ("Se j� tiver terminado o seu pedido, digite '0'.\n");
    scanf ("%d", &fim);
    system("cls");
    }while (fim|=0);
system ("pause");
return (0);
}
