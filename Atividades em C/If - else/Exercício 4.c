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
    printf ("*****BEM-VINDO AO SEU CAIXA ELETRÔNICO*****\n");
    printf ("1 - CONSULTA DE SALDO.\n");
    printf ("2 - SAQUE.\n");
    printf ("3 - DEPÓSITO.\n");
    printf ("4 - INVESTIMENTO.\n");
    printf ("Informe qual opção você deseja realizar: ");
    scanf ("%d", &escolha);
    if (escolha==1)
    {
        printf ("CONSULTA DE SALDO\n");
        printf ("O seu saldo é de R$ XXXX,00.\n");
    }
    else
        if (escolha==2)
        {
            printf ("SAQUE\n");
            printf ("Informe o valor que deseja sacar: R$ ");
            scanf ("%f", &dinheiro);
            printf ("Você sacou a quantia de R$%.2f.\n", dinheiro);
        }
        else
            if (escolha==3)
            {
                printf ("DEPÓSITO\n");
                printf ("Informe a forma de depósito:\n");
                printf ("1 - CHEQUE\n");
                printf ("2 - DINHEIRO\n");
                scanf ("%d", &deposito);
                if (deposito==1)
                    {
                    printf ("Coloque o cheque dentro do envelope e insira no campo informado.\n");
                    printf("Após inserir o envelope, retire o comprovante ao lado\n");
                    }
                    else
                        if (deposito==2)
                    {
                    printf ("Coloque o dinheiro dentro do envelope e insira no campo informado.\n");
                    printf("Após inserir o envelope, retire o comprovante ao lado\n");
                    }
                    else
                    {
                        printf("Opção inválida\n");
                    }
            }
            else
                if (escolha==4)
            {
                printf ("INVESTIMENTO\n");
                printf ("Informe qual investimento deseja fazer:\n");
                printf ("1 - CDB\n");
                printf ("2 - PREVIDÊNCIA PRIVADA\n");
                printf ("3 - AÇÕES\n");
                printf ("4 - POUPANÇA\n");
                scanf ("%d", &investimento);
                if (investimento==1)
                {
                    printf ("PARABÉNS! Você escolheu a opção CDB.\n");
                }
                else
                    if (investimento==2)
                {
                    printf ("PREVIDÊNCIA PRIVADA\n");
                    printf ("O FUTURO PEDE UMA PREVIDÊNCIA PRIVADA.\n");
                    printf ("Parabéns por esse passo importante em sua vida.\n");
                }
                else
                    if (investimento==3)
                {
                    printf ("A opção escolhida foi AÇÕES.\n");
                }
                else
                    if (investimento==4)
                {
                    printf ("A opção escolhida foi POUPANÇA.\n");
                }
                else
                {
                    printf ("Opção inválida\n");
                }
            }
            else
            {
                printf ("OPÇÃO INVÁLIDA\n");
            }
            printf ("Caso queira sair, digite '0'.\n");
            scanf ("%i", &fim);
    }while (fim|=0);
system("pause");
return (0);
}
