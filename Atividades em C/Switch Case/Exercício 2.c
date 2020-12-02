#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"");
    int valor, codigo, telefone;
    float saque, recarga, deposito, dados, dinheiro, senha_atual, senha_nova;
    char emprestimo, banco;
    printf ("<<<<BEM-VINDO AO BANCO RODRIGO>>>>");
    printf ("<<<<O BANCO QUE EST� A APENAS UM CLICK DE DIST�NCIA DE VOC�>>>>");
    printf("Insira o seu cart�o no local informado.\n");
    printf("1 - SAQUE\n");
    printf("2 - PAGAMENTOS\n");
    printf("3 - RECARGA TELEF�NICA\n");
    printf("4 - EMPR�STIMOS\n");
    printf("5 - EXTRATOS E SALDO\n");
    printf("6 - DEP�SITO\n");
    printf("7 - TRANSFER�NCIA\n");
    printf("8 - ALTERAR SENHA\n");
    printf ("Dirija-se at� o caixa para melhor atend�-lo.\n");

    printf ("Informe a op��o desejada:\n");
    scanf ("%d", &valor);

    system ("cls");

    switch (valor)
    {
        case 1:
        printf("Informe o valor que deseja sacar:\n");
        scanf ("%f", &saque);
        printf("Aguarde enquanto a m�quina separa o valor do saque.\n");
        printf ("Retire seu dinheiro no local informado.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

        case 2:
        printf ("Coloque o c�digo de barras no leitor ou digite o c�digo na tela.\n");
        scanf("%d", &codigo);
        printf ("Pagamento realizado com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

        case 3:
        printf ("Digite o numero do seu telefone:\n");
        scanf ("%d", &telefone);
        printf ("Informe o valor da recarga:\n");
        scanf ("%f", &recarga);
        printf ("Recarga telef�nica realizada com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

        case 4:
        printf("Informe a op��o de empr�stimo desejada:\n");
        scanf ("%s", &emprestimo);
        printf ("Parab�ns, empr�stimo contratado com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

        case 5:
        printf("O seu saldo � de R$ 0,00.\n");
        printf("Caso esteja precisando de dinheiro, o BANCO RODRIGO possui �timas linhas de cr�dito para voc�.\n");
        printf ("Existe a possibilidade de realizar empr�stimos digitando a op��o 4 na tela anterior. Caso deseje realizar um empr�stimo, volte a tela.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

        case 6:
        printf ("Informe o valor do dep�sito: \n");
        scanf("%f", &deposito);
        printf ("O seu deposito foi de R$ %.2f\n", deposito);
        printf ("Dep�sito realizado com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

        case 7:
        printf ("Informe para qual banco ser� feita a transfer�ncia: \n");
        scanf ("%s", &banco);
        printf ("Digite a ag�ncia e conta para realizar a transfer�ncia: \n");
        scanf ("%f", &dados);
        printf ("Informe o valor que deseja transferir: \n");
        scanf ("%f", &dinheiro);
        printf ("Parab�ns! Sua transfer�ncia foi realizada com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

        case 8:
        printf ("Digite a senha atual: \n");
        scanf ("%f", &senha_atual);
        printf ("Digite a nova senha: \n");
        scanf ("%f", &senha_nova);
        printf ("Senha alterada com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

        default:
        printf ("Op��o inv�lida.\n");
        printf("Retorne para a p�gina anterior e escolha as op��es sugeridas.\n");
        printf ("Caso sua op��o n�o se encontre na tela, pedimos que se dirija at� o caixa.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFER�NCIA.\n");
        break;

    }
    return (0);
}
