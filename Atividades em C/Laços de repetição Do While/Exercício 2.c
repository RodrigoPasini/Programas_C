#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    float valor_de_etiqueta, valor1_produto, valor2_produto, valor3_produto;
    int condicao_de_pagamento, forma_de_pagamento, fim;
    do
    {
        printf("Informe o valor de etiqueta do produto que está sendo comprado: \nR$ ");
        scanf ("%f", &valor_de_etiqueta);
        printf("Escolha a condição de pagamento.\nDigite 1 se for 'à vista' ou 2 se for 'em duas vezes':\n");
        scanf ("%d", &condicao_de_pagamento);
        printf("Informe a forma como será feito o pagamento.\nDigite 3 se for em 'dinheiro', digite 4 se for em 'cheque' ou digite 5 se for no 'cartão de crédito':\n");
        scanf ("%d", &forma_de_pagamento);
        valor1_produto=valor_de_etiqueta-(valor_de_etiqueta*0.10);
        valor2_produto=valor_de_etiqueta-(valor_de_etiqueta*0.15);
        valor3_produto=valor_de_etiqueta+(valor_de_etiqueta*0.10);
        if (condicao_de_pagamento==1 && forma_de_pagamento==3)
        {
        printf ("O valor do produto é = R$ %.2f", valor1_produto);
        }
        if (condicao_de_pagamento==1 && forma_de_pagamento==4)
        {
        printf ("O valor do produto é = R$ %.2f", valor1_produto);
        }
        if (condicao_de_pagamento==1 && forma_de_pagamento==5)
        {
        printf ("O valor do produto é = R$ %.2f", valor2_produto);
        }
        if (condicao_de_pagamento==2 && forma_de_pagamento==3)
        {
        printf ("O valor do produto é = R$ %.2f", valor_de_etiqueta);
        }
        if (condicao_de_pagamento==2 && forma_de_pagamento==4)
        {
        printf ("O valor do produto é = R$ %.2f", valor_de_etiqueta);
        }
        else
        {
        if(condicao_de_pagamento==2 && forma_de_pagamento==5)
        printf ("O valor do produto é = R$ %.2f", valor3_produto);
        }
        printf ("\nSe você quiser continuar a inserir novas condições de pagamento digite 1 ou digite 2 para encerrar o programa. \n");
        scanf ("%d", &fim);
    }
    while (fim==1);
return (0);
}
