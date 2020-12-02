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
    printf ("<<<<O BANCO QUE ESTÁ A APENAS UM CLICK DE DISTÂNCIA DE VOCÊ>>>>");
    printf("Insira o seu cartão no local informado.\n");
    printf("1 - SAQUE\n");
    printf("2 - PAGAMENTOS\n");
    printf("3 - RECARGA TELEFÔNICA\n");
    printf("4 - EMPRÉSTIMOS\n");
    printf("5 - EXTRATOS E SALDO\n");
    printf("6 - DEPÓSITO\n");
    printf("7 - TRANSFERÊNCIA\n");
    printf("8 - ALTERAR SENHA\n");
    printf ("Dirija-se até o caixa para melhor atendê-lo.\n");

    printf ("Informe a opção desejada:\n");
    scanf ("%d", &valor);

    system ("cls");

    switch (valor)
    {
        case 1:
        printf("Informe o valor que deseja sacar:\n");
        scanf ("%f", &saque);
        printf("Aguarde enquanto a máquina separa o valor do saque.\n");
        printf ("Retire seu dinheiro no local informado.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

        case 2:
        printf ("Coloque o código de barras no leitor ou digite o código na tela.\n");
        scanf("%d", &codigo);
        printf ("Pagamento realizado com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

        case 3:
        printf ("Digite o numero do seu telefone:\n");
        scanf ("%d", &telefone);
        printf ("Informe o valor da recarga:\n");
        scanf ("%f", &recarga);
        printf ("Recarga telefônica realizada com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

        case 4:
        printf("Informe a opção de empréstimo desejada:\n");
        scanf ("%s", &emprestimo);
        printf ("Parabéns, empréstimo contratado com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

        case 5:
        printf("O seu saldo é de R$ 0,00.\n");
        printf("Caso esteja precisando de dinheiro, o BANCO RODRIGO possui ótimas linhas de crédito para você.\n");
        printf ("Existe a possibilidade de realizar empréstimos digitando a opção 4 na tela anterior. Caso deseje realizar um empréstimo, volte a tela.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

        case 6:
        printf ("Informe o valor do depósito: \n");
        scanf("%f", &deposito);
        printf ("O seu deposito foi de R$ %.2f\n", deposito);
        printf ("Depósito realizado com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

        case 7:
        printf ("Informe para qual banco será feita a transferência: \n");
        scanf ("%s", &banco);
        printf ("Digite a agência e conta para realizar a transferência: \n");
        scanf ("%f", &dados);
        printf ("Informe o valor que deseja transferir: \n");
        scanf ("%f", &dinheiro);
        printf ("Parabéns! Sua transferência foi realizada com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

        case 8:
        printf ("Digite a senha atual: \n");
        scanf ("%f", &senha_atual);
        printf ("Digite a nova senha: \n");
        scanf ("%f", &senha_nova);
        printf ("Senha alterada com sucesso.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

        default:
        printf ("Opção inválida.\n");
        printf("Retorne para a página anterior e escolha as opções sugeridas.\n");
        printf ("Caso sua opção não se encontre na tela, pedimos que se dirija até o caixa.\n");
        printf ("O BANCO RODRIGO AGRADECE A PREFERÊNCIA.\n");
        break;

    }
    return (0);
}
