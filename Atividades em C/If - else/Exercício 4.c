#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    int escolha, fim, deposito, investimento;
    float dinheiro;
    setlocale(LC_ALL,"");
    do
    {
    printf ("*****BEM-VINDO AO SEU CAIXA ELETR�NICO*****\n");
    printf ("1 - CONSULTA DE SALDO.\n");
    printf ("2 - SAQUE.\n");
    printf ("3 - DEP�SITO.\n");
    printf ("4 - INVESTIMENTO.\n");
    printf ("Informe qual op��o voc� deseja realizar: ");
    scanf ("%d", &escolha);
    if (escolha==1)
    {
        printf ("CONSULTA DE SALDO\n");
        printf ("O seu saldo � de R$ XXXX,00.\n");
    }
    else
        if (escolha==2)
        {
            printf ("SAQUE\n");
            printf ("Informe o valor que deseja sacar: R$ ");
            scanf ("%f", &dinheiro);
            printf ("Voc� sacou a quantia de R$%.2f.\n", dinheiro);
        }
        else
            if (escolha==3)
            {
                printf ("DEP�SITO\n");
                printf ("Informe a forma de dep�sito:\n");
                printf ("1 - CHEQUE\n");
                printf ("2 - DINHEIRO\n");
                scanf ("%d", &deposito);
                if (deposito==1)
                    {
                    printf ("Coloque o cheque dentro do envelope e insira no campo informado.\n");
                    printf("Ap�s inserir o envelope, retire o comprovante ao lado\n");
                    }
                    else
                        if (deposito==2)
                    {
                    printf ("Coloque o dinheiro dentro do envelope e insira no campo informado.\n");
                    printf("Ap�s inserir o envelope, retire o comprovante ao lado\n");
                    }
                    else
                    {
                        printf("Op��o inv�lida\n");
                    }
            }
            else
                if (escolha==4)
            {
                printf ("INVESTIMENTO\n");
                printf ("Informe qual investimento deseja fazer:\n");
                printf ("1 - CDB\n");
                printf ("2 - PREVID�NCIA PRIVADA\n");
                printf ("3 - A��ES\n");
                printf ("4 - POUPAN�A\n");
                scanf ("%d", &investimento);
                if (investimento==1)
                {
                    printf ("PARAB�NS! Voc� escolheu a op��o CDB.\n");
                }
                else
                    if (investimento==2)
                {
                    printf ("PREVID�NCIA PRIVADA\n");
                    printf ("O FUTURO PEDE UMA PREVID�NCIA PRIVADA.\n");
                    printf ("Parab�ns por esse passo importante em sua vida.\n");
                }
                else
                    if (investimento==3)
                {
                    printf ("A op��o escolhida foi A��ES.\n");
                }
                else
                    if (investimento==4)
                {
                    printf ("A op��o escolhida foi POUPAN�A.\n");
                }
                else
                {
                    printf ("Op��o inv�lida\n");
                }
            }
            else
            {
                printf ("OP��O INV�LIDA\n");
            }
            printf ("Caso queira sair, digite '0'.\n");
            scanf ("%i", &fim);
    }while (fim|=0);
system("pause");
return (0);
}
