#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float produto, condicao, produto10, produto15, produtoj;
    printf ("Informe o valor do produto: \nr$");
    scanf ("%f", &produto);
    printf ("Informe a condicao de pagamento: Digite 1 para pagamento a vista em dinheiro ou cheque; Digite 2 para pagamento a vista no cartao de credito; Digite 3 para pagamento em duas vezes, no dinheiro ou cheque; ou digite 4 para pagamento em duas vezes, no cartao de credito.\n");
    scanf ("%f", &condicao);
    if (condicao==1)
    {
        printf ("A condicao escolhida foi a vista em dinheiro ou cheque. Voce recebera um desconto de 10%% no valor do produto.\n");
        produto10=produto-(produto*0.10);
        printf ("O valor do produto ficou sendo como: r$%.2f\n", produto10);
    }
    else
    {
        if (condicao==2)
        {
            printf ("A condicao escolhida foi a vista no cartao de credito. Voce recebera um desconto de 15%% no valor do produto.\n");
            produto15=produto-(produto*0.15);
            printf ("O valor do produto ficou sendo como: r$%.2f\n", produto15);
        }
        else
        {
            if (condicao==3)
            {
                printf ("A condicao escolhida foi pagamento em duas vezes, no dinheiro ou cheque. Nao ha juros.\n");
                printf ("O valor do produto ficou sendo como: r$%.2f\n", produto);
            }
            else
            {
                if (condicao==4)
                {
                    printf ("A condicao escolhida foi pagamento em duas vezes, no cartao de credito, com juros de 10%%.\n");
                    produtoj=produto+(produto*0.10);
                    printf ("O valor do produto ficou sendo como: r$%.2f\n", produtoj);
                }
                else
                {
                    printf ("Opcao invalida. Digite um numero de 1 a 4 para definir a condicao de pagamento.\n");
                }
            }
        system ("pause");
        return (0);
        }
    }
}
