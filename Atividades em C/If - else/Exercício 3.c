#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int pedido, fim;
    setlocale(LC_ALL,"");
    do{
    printf ("*****PIZZARIA DO RODRIGO - AQUI A PIZZA É A NOSSA OBRA*****\n");
    printf ("Bem vindo ao nosso programa para pedido de pizza.\n");
    printf ("1 - MARGUERITA\n");
    printf ("2 - PORTUGUESA\n");
    printf ("3 - FRANGO\n");
    printf ("4 - 4 QUEIJOS\n");
    printf ("5 - ESPECIALIDADE DA CASA\n");
    printf ("Faça agora o seu pedido:");
    scanf ("%d", &pedido);
    if (pedido==1)
    {
        printf ("MARGUERITA\n");
        printf ("A PIZZA DA BANDEIRA ITALIANA\n");
        printf ("muzzarela, tiras de tomate, manjericão e orégano\n");
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
        printf ("muzzarela, tiras de frango e orégano.\n");
    }
    else
        if (pedido==4)
    {
        printf("4 QUEIJOS\n");
        printf ("muzzarela, parmesão, requeijão e cheddar.\n");
    }
    else
        if (pedido==5)
    {
        printf ("ESPECIALIDADE DA CASA\n");
        printf ("Ä VERDADEIRA PIZZA DE PIEMONTE, REGIÃO NORTE DA ITÁLIA.\n");
        printf ("muzzarela ralada, gorgonzola e pedaços de pêra.\n");
    }
    else
    {
        printf ("OPÇÃO INVÁLIDA\n");
    }
    printf ("Se já tiver terminado o seu pedido, digite '0'.\n");
    scanf ("%d", &fim);
    system("cls");
    }while (fim|=0);
system ("pause");
return (0);
}
