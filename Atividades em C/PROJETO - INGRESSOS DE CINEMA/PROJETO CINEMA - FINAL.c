#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// FUNCAO PARA PAUSAR
void pausa()
{
    getchar();
}

// FUNCAO PARA LIMPAR A TELA
void limpa_tela()
{
    system ("cls");
}

// FUNCAO PARA IMPRIMIR MENSAGEM DE OPCAO INVALIDA
void print_opcao_invalida()
{
    printf("Opção inválida!\n");
    system ("pause");
    limpa_tela();
}

int main (void)
{
    setlocale (LC_ALL, "");
    //VARIÁVEIS
    int cidade, filme, semana, horario, ingresso, quantidade, opcao, doce;
    float valor, total=0, ingresso_inteiro = 15, meio_ingresso = 7.5, doce1, doce2, doce3, doce4, doce5;
    //GOTO - PÁGINAL INICIAL - CIDADES
inicio:
    printf ("\t\t\tSEJA BEM-VINDO AO CINE-SENAI!\n\n");
    printf ("\t\t\t  O CINEMA DAS INDÚSTRIAS\n\n");
    printf ("\t\t\t\tLOCALIZAÇÃO\n\n");
    printf ("\t\t\t 1 - CURITIBA\n");
    printf ("\t\t\t 2 - SÃO JOSÉ DOS PINHAIS\n");
    printf ("\t\t\t 3 - MARINGÁ\n");
    printf ("\t\t\t 4 - LONDRINA\n");
    printf ("\t\t\t 5 - <<<<<SAIR DO PROGRAMA>>>>>\n\n");
    printf ("\nEscolha a cidade onde deseja ir ao cinema: ");
    scanf ("%d", &cidade);
    limpa_tela();

    switch (cidade) //1 - SWITCH CASE PARA DEFINIR A CIDADE ONDE A PESSOA IRÁ COMPRAR INGRESSOS PARA ASSISITR O CINEMA
    {
    //início SWITCH CASE - CIDADE
    case 1: //CURITIBA
curitiba:
        printf("\t\t\t\t\t***CURITIBA***\n\n");
        printf("\t\t\tPROGRAMAÇÃO DE FILMES EM CARTAZ EM CURITIBA \n\n");
        printf("\t\t1 - DE VOLTA PARA O FUTURO I\n");
        printf("\t\t2 - REI LEÃO\n");
        printf("\t\t3 - HARRY POTTER E A PEDRA FILOSOFAL\n");
        printf ("\t\t4 - RETORNAR À PÁGINA INICIAL\n");
        printf("\t\t5 - OPÇÃO INVÁLIDA!\n");
        printf ("\nINFORME O NOME DO FILME QUE VOCÊ GOSTARIA DE ASSISTIR: ");
        scanf ("%d", &filme);
        limpa_tela();

        if (filme==1) // ESCOLHA DO FILME "DE VOLTA PARA O FUTURO I"
        {
btf: // GOTO - FILME "DE VOLTA PARA O FUTURO"
            printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA
hora1: // GOTO "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN
btfs11://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO


                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto btfs11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1
                }//TÉRMINO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN
btfs15://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto btfs15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN
btfs20://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto btfs20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora1; // GOTO "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA
hora5: // GOTO "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN
btft13://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btft13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btft13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto btft13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN
btft17://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btft17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btft17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto btft17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN
btft22://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btft22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btft22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto btft22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora5; // GOTO "DE VOLTA PARA O FUTURO I" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA


            case 3:// "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA
hora9: // GOTO "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN
btfq1030://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1
                        print_opcao_invalida();
                        goto btfq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN
btfq1430://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto btfq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN
btfq2130://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto btfq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora9; // GOTO "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA

            case 4:// "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA
hora13: // GOTO "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN
btfq12://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto btfq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN
btfq16://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto btfq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN
btfq2230://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto btfq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto btfq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora13; // GOTO "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto curitiba;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto btf;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//TÉRMINO IF (FILME==1) - CURITIBA

        if (filme==2) // ESCOLHA DO FILME "REI LEÃO"
        {
rl: // GOTO - FILME "REI LEÃO"
            printf("\t\t\t**REI LEÃO**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "REI LEÃO" - SEGUNDA-FEIRA
hora2: // GOTO "REI LEÃO" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**REI LEÃO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN
rls11://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rls11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rls11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto rls11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "REI LEÃO" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN
rls15://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rls15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rls15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto rls15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "REI LEÃO" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN
rls20://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rls20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rls20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto rls20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "REI LEÃO" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto rl;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora2; // GOTO "REI LEÃO" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "REI LEÃO" - TERÇA-FEIRA
hora3: // GOTO "REI LEÃO" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**REI LEÃO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"REI LEÃO" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "REI LEÃO" - TERÇA-FEIRA - 13H00MIN
rlt13://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlt13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlt13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto rlt13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "REI LEÃO" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"REI LEÃO" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "REI LEÃO" - TERÇA-FEIRA - 17H00MIN
rlt17://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlt17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlt17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto rlt17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "REI LEÃO" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"REI LEÃO" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "REI LEÃO" - TERÇA-FEIRA - 22H00MIN
rlt22://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlt22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlt22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto rlt22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "REI LEÃO" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto rl;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora3; // GOTO "REI LEÃO" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA


            case 3:// "REI LEÃO" - QUARTA-FEIRA
hora4: // GOTO "REI LEÃO" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**REI LEÃO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"REI LEÃO" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "REI LEÃO" - QUARTA-FEIRA - 10H30MIN
rlq1030://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto rlq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "REI LEÃO" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"REI LEÃO" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "REI LEÃO" - QUARTA-FEIRA - 14H30MIN
rlq1430://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto rlq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "REI LEÃO" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"REI LEÃO" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "REI LEÃO" - QUARTA-FEIRA - 21H30MIN
rlq2130://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto rlq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "REI LEÃO" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto rl;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora4; // GOTO "REI LEÃO" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA

            case 4:// "REI LEÃO" - QUINTA-FEIRA
hora6: // GOTO "REI LEÃO" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**REI LEÃO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"REI LEÃO" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "REI LEÃO" - QUINTA-FEIRA - 12H00MIN
rlq12://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto rlq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "REI LEÃO" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"REI LEÃO" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "REI LEÃO" - QUINTA-FEIRA - 16H00MIN
rlq16://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto rlq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "REI LEÃO" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"REI LEÃO" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "REI LEÃO" - QUINTA-FEIRA - 22H30MIN
rlq2230://
                    printf("\t\t\t**REI LEÃO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LEÃO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"REI LEÃO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**REI LEÃO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto rlq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "REI LEÃO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto rlq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "REI LEÃO" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto rl;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora6; // GOTO "REI LEÃO" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto curitiba;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto rl;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//TÉRMINO IF (FILME==2) - CURITIBA

        if (filme==3) // ESCOLHA DO FILME "HARRY POTTER E A PEDRA FILOSOFAL"
        {
hp: // GOTO - FILME "HARRY POTTER E A PEDRA FILOSOFAL"
            printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA
hora7: // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN
hps11://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hps11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hps11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto hps11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN
hps15://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hps15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hps15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto hps15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN
hps20://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hps20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hps20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto hps20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto hp;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora7; // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA
hora8: // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN
hpt13://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpt13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpt13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto hpt13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN
hpt17://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpt17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpt17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto hpt17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN
hpt22://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpt22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpt22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto hpt22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto hp;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora8; // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA


            case 3:// "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA
hora10: // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN
hpq1030://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto hpq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN
hpq1430://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto hpq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN
hpq2130://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto hpq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto hp;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora10; // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA

            case 4:// "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA
hora11: // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN
hpq12://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto hpq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN
hpq16://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto hpq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN
hpq2230://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hpq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto hpq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora11; // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto curitiba;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto hp;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//TÉRMINO IF (FILME==3) - CURITIBA

        if (filme==4)//INÍCIO IF (FILME==4) - GOTO INICIO
        {
            goto inicio;
        }//TÉRMINO IF (FILME==4) - GOTO INICIO

        else//INÍCIO (FILME==5) - OPÇÃO INVÁLIDA GOTO CURITIBA
        {
            print_opcao_invalida();
            goto curitiba;
        }//TÉRMINO (FILME==5) - OPÇÃO INVÁLIDA GOTO CURITIBA

    case 2: // SÃO JOSÉ DOS PINHAIS
sjp:
        printf("\t\t\t\t\t***SÃO JOSÉ DOS PINHAIS***\n\n");
        printf("\t\t\tPROGRAMAÇÃO DE FILMES EM CARTAZ EM SÃO JOSÉ DOS PINHAIS\n\n");
        printf("\t\t1 - YESTERDAY\n");
        printf("\t\t2 - SEXTA-FEIRA 13\n");
        printf("\t\t3 - EFEITO BORBOLETA\n");
        printf ("\t\t4 - RETORNAR À PÁGINA INICIAL\n");
        printf("\t\t5 - OPÇÃO INVÁLIDA!\n");
        printf ("\nINFORME O NOME DO FILME QUE VOCÊ GOSTARIA DE ASSISTIR: ");
        scanf ("%d", &filme);
        limpa_tela();

        if (filme==1) // ESCOLHA DO FILME "YESTERDAY"
        {
            //INÍCIO IF (FILME==1) - SJP
yes: // GOTO - FILME "YESTERDAY"
            printf("\t\t\t**YESTERDAY**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "YESTERDAY" - SEGUNDA-FEIRA
hora12: // GOTO "YESTERDAY" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**YESTERDAY**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN
yess11://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yess11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yess11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto yess11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN
yess15://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yess15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yess15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto yess15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN
yess20://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yess20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yess20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto yess20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto yes;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora12; // GOTO "YESTERDAY" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "YESTERDAY" - TERÇA-FEIRA
hora14: // GOTO "YESTERDAY" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**YESTERDAY**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"YESTERDAY" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "YESTERDAY" - TERÇA-FEIRA - 13H00MIN
yest13://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yest13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - TERÇA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yest13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - TERÇA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto yest13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "YESTERDAY" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"YESTERDAY" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "YESTERDAY" - TERÇA-FEIRA - 17H00MIN
yest17://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yest17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yest17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto yest17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "YESTERDAY" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"YESTERDAY" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "YESTERDAY" - TERÇA-FEIRA - 22H00MIN
yest22://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yest22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yest22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto yest22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "YESTERDAY" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto yes;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora14; // GOTO "YESTERDAY" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA

            case 3:// "YESTERDAY" - QUARTA-FEIRA
hora15: // GOTO "YESTERDAY" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**YESTERDAY**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"YESTERDAY" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN
yesq1030://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto yesq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"YESTERDAY" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN
yesq1430://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto yesq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"YESTERDAY" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN
yesq2130://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto yesq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto yes;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora15; // GOTO "YESTERDAY" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA

            case 4:// "YESTERDAY" - QUINTA-FEIRA
hora16: // GOTO "YESTERDAY" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**YESTERDAY**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"YESTERDAY" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN
yesq12://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto yesq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"YESTERDAY" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN
yesq16://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto yesq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"YESTERDAY" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN
yesq2230://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto yesq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto yesq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto yes;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora16; // GOTO "YESTERDAY" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto sjp;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto yes;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==1) - SJP

        if (filme==2) // ESCOLHA DO FILME "SEXTA-FEIRA 13"
        {
            //INÍCIO IF (FILME==2) - SJP
sx13: // GOTO - FILME "SEXTA-FEIRA 13"
            printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "SEXTA-FEIRA 13" - SEGUNDA-FEIRA
hora17: // GOTO "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN
sf13s11://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13s11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13s11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto sf13s11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN
sf13s15://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\to\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13s15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13s15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto sf13s15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN
sf13s20://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13s20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13s20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto sf13s20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto sx13;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora17; // GOTO "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "SEXTA-FEIRA 13" - TERÇA-FEIRA
hora18: // GOTO "SEXTA-FEIRA 13" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 13H00MIN
sf13t13://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13t13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13t13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto sf13t13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN
sf13t17://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13t17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13t17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto sf13t17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN
sf13t22://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13t22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13t22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto sf13t22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "SEXTA-FEIRA 13" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto sx13;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora18; // GOTO "SEXTA-FEIRA 13" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA

            case 3:// "SEXTA-FEIRA 13" - QUARTA-FEIRA
hora19: // GOTO "SEXTA-FEIRA 13" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN
sf13q1030://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto sf13q1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN
sf13q1430://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto sf13q1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN
sf13q2130://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto sf13q2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto sx13;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora19; // GOTO "SEXTA-FEIRA 13" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA

            case 4:// "SEXTA-FEIRA 13" - QUINTA-FEIRA
hora20: // GOTO "SEXTA-FEIRA 13" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN
sf13q12://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto sf13q12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN
sf13q16://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto sf13q16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN
sf13q2230://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto sf13q2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto sf13q2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto sx13;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora20; // GOTO "SEXTA-FEIRA 13" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto sjp;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto sx13;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==2) - SJP

        if (filme==3) // ESCOLHA DO FILME "EFEITO BORBOLETA"
        {
            //INÍCIO IF (FILME==3) - SJP
eb: // GOTO - FILME "EFEITO BORBOLETA"
            printf("\t\t\t**EFEITO BORBOLETA**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "EFEITO BORBOLETA" - SEGUNDA-FEIRA
hora21: // GOTO "EFEITO BORBOLETA" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN
ebs11://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto ebs11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN
ebs15://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto ebs15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN
ebs20://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto ebs20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto eb;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora21; // GOTO "EFEITO BORBOLETA" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "EFEITO BORBOLETA" - TERÇA-FEIRA
hora22: // GOTO "EFEITO BORBOLETA" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 13H00MIN
ebt13://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebt13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebt13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto ebt13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN
ebt17://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebt17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebt17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto ebt17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "EFEITO BORBOLETA" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN
ebt22://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebt22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebt22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto ebt22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "EFEITO BORBOLETA" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto eb;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora22; // GOTO "EFEITO BORBOLETA" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA

            case 3:// "EFEITO BORBOLETA" - QUARTA-FEIRA
hora23: // GOTO "EFEITO BORBOLETA" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN
ebq1030://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto ebq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN
ebq1430://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto ebq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN
ebq2130://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto ebq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto eb;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora23; // GOTO "EFEITO BORBOLETA" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA

            case 4:// "EFEITO BORBOLETA" - QUINTA-FEIRA
hora24: // GOTO "EFEITO BORBOLETA" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN
ebq12://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto ebq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN
ebq16://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto ebq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN
ebq2230://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto ebq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto ebq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto eb;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora24; // GOTO "EFEITO BORBOLETA" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto sjp;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto eb;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==3) - SJP

        if (filme==4)//INÍCIO IF (FILME==4) - GOTO INICIO
        {
            goto inicio;
        }//TÉRMINO IF (FILME==4) - GOTO INICIO

        else//INÍCIO (FILME==5) - OPÇÃO INVÁLIDA GOTO SJP
        {
            print_opcao_invalida();
            goto sjp;
        }//TÉRMINO (FILME==5) - OPÇÃO INVÁLIDA GOTO SJP

    case 3: // MARINGÁ
mga:
        printf("\t\t\t\t\t***MARINGÁ***\n\n");
        printf("\t\t\tPROGRAMAÇÃO DE FILMES EM CARTAZ EM MARINGÁ \n\n");
        printf("\t\t1 - TRANSFORMERS\n");
        printf("\t\t2 - MEU MALVADO FAVORITO\n");
        printf("\t\t3 - UM LUGAR CHAMADO NOTHINGHILL\n");
        printf ("\t\t4 - RETORNAR À PÁGINA INICIAL\n");
        printf("\t\t5 - OPÇÃO INVÁLIDA!\n");
        printf ("\nINFORME O NOME DO FILME QUE VOCÊ GOSTARIA DE ASSISTIR: ");
        scanf ("%d", &filme);
        limpa_tela();

        if (filme==1) // ESCOLHA DO FILME "TRANSFORMERS"
        {
            //INÍCIO IF (FILME==1) MARINGÁ
transf: // GOTO - FILME "TRANSFORMERS"
            printf("\t\t\t**TRANSFORMERS**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "TRANSFORMERS" - SEGUNDA-FEIRA
hora25: // GOTO "TRANSFORMERS" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**TRANSFORMERS**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN
transfs11://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto transfs11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN
transfs15://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFOMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto transfs15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN
transfs20://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto transfs20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora25; // GOTO "TRANSFORMERS" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "TRANSFORMERS" - TERÇA-FEIRA
hora26: // GOTO "TRANSFORMERS" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**TRANSFORMERS**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN
transft13://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transft13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transft13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto transft13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "TRANSFORMERS" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN
transft17://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transft17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transft17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto transft17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "TRANSFORMERS" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN
transft22://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transft22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transft22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto transft22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "TRANSFORMERS" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora26; // GOTO "TRANSFORMERS" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA


            case 3:// "TRANSFORMERS" - QUARTA-FEIRA
hora27: // GOTO "TRANSFORMERS" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**TRANSFORMERS**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TRANSFORMERS" - QUARTAA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN
transfq1030://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto transfq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN
transfq1430://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto transfq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN
transfq2130://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto transfq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora27; // GOTO "TRANSFORMERS" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA


            case 4:// "TRANSFORMERS" - QUINTA-FEIRA
hora28: // GOTO "TRANSFORMERS" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**TRANSFORMERS**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN
transfq12://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto transfq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN
transfq16://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto transfq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN
transfq2230://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto transfq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto transfq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora28; // GOTO "TRANSFORMERS" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto mga;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto transf;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==1) MARINGÁ

        if (filme==2) // ESCOLHA DO FILME "MEU MALVADO FAVORITO"
        {
            //INÍCIO IF (FILME==2) MARINGÁ
mmf: // GOTO - FILME "MEU MALVADO FAVORITO"
            printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA
hora29: // GOTO "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN
mmfs11://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto mmfs11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN
mmfs15://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto mmfs15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN
mmfs20://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto mmfs20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora29; // GOTO "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "MEU MALVADO FAVORITO" - TERÇA-FEIRA
hora30: // GOTO "MEU MALVADO FAVORITO" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN
mmft13://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmft13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmft13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto mmft13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN
mmft17://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmft17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmft17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto mmft17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN
mmft22://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmft22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmft22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto mmft22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "MEU MALVADO FAVORITO" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora30; // GOTO "MEU MALVADO FAVORITO" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA


            case 3:// "MEU MALVADO FAVORITO" - QUARTA-FEIRA
hora31: // GOTO "MEU MALVADO FAVORITO" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"MEU MALVADO FAVORITO" - QUARTAA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN
mmfq1030://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto mmfq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN
mmfq1430://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto mmfq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN
mmfq2130://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto mmfq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora31; // GOTO "MEU MALVADO FAVORITO" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA


            case 4:// "MEU MALVADO FAVORITO" - QUINTA-FEIRA
hora48: // GOTO "MEU MALVADO FAVORITO" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN
mmfq12://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto mmfq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN
mmfq16://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto mmfq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN
mmfq2230://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto mmfq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto mmfq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora48; // GOTO "MEU MALVADO FAVORITO" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto mga;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto mmf;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==2) MARINGÁ

        if (filme==3) // ESCOLHA DO FILME "UM LUGAR CHAMADO NOTHINGHILL"
        {
            //INÍCIO IF (FILME==2) MARINGÁ
nh: // GOTO - FILME "UM LUGAR CHAMADO NOTHINGHILL"
            printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA
hora32: // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN
nhs11://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhs11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto nhs11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN
nhs15://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhs15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto nhs15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN
nhs20://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhs20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto nhs20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora32; // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA
hora33: // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN
nht13://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nht13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nht13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto nht13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN
nht17://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nht17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nht17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto nht17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN
nht22://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nht22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nht22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto nht22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto nh;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora33; // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA


            case 3:// "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA
hora34: // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTAA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN
nhq1030://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto nhq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN
nhq1430://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto nhq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN
nhq2130://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto nhq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto nh;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora34; // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA


            case 4:// "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA
hora35: // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN
nhq12://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto nhq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN
nhq16://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto nhq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN
nhq2230://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto nhq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==3)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto nhq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto nh;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora35; // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto mga;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto nh;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==3) MARINGÁ

        if (filme==4)//INÍCIO IF (FILME==4) - GOTO INICIO
        {
            goto inicio;
        }//TÉRMINO IF (FILME==4) - GOTO INICIO

        else//INÍCIO (FILME==5) - OPÇÃO INVÁLIDA GOTO MARINGÁ
        {
            print_opcao_invalida();
            goto mga;
        }//TÉRMINO (FILME==5) - OPÇÃO INVÁLIDA GOTO MARINGÁ


    case 4: // LONDRINA
lond:
        printf("\t\t\t\t\t***LONDRINA***\n\n");
        printf("\t\t\tPROGRAMAÇÃO DE FILMES EM CARTAZ EM LONDRINA \n\n");
        printf("\t\t1 - ATIVIDADE PARANORMAL\n");
        printf("\t\t2 - 12 HOMENS E UM SEGREDO\n");
        printf("\t\t3 - TITANIC\n");
        printf ("\t\t4 - RETORNAR À PÁGINA INICIAL\n");
        printf("\t\t5 - OPÇÃO INVÁLIDA!\n");
        printf ("\nINFORME O NOME DO FILME QUE VOCÊ GOSTARIA DE ASSISTIR: ");
        scanf ("%d", &filme);
        limpa_tela();

        if (filme==1) // ESCOLHA DO FILME "ATIVIDADE PARANORMAL"
        {
            //INÍCIO IF (FILME==1) LONDRINA
ap: // GOTO - FILME "ATIVIDADE PARANORMAL"
            printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA
hora36: // GOTO "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN
aps11://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto aps11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto aps11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto aps11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN
aps15://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto aps15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto aps15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto aps15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN
aps20://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto aps20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto aps20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto aps20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto ap;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora36; // GOTO "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "ATIVIDADE PARANORMAL" - TERÇA-FEIRA
hora37: // GOTO "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN
apt13://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apt13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apt13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto apt13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN
apt17://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apt17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apt17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto apt17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN
apt22://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apt22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apt22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto apt22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto ap;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora37; // GOTO "ATIVIDADE PARANORMAL" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA

            case 3:// "ATIVIDADE PARANORMAL" - QUARTA-FEIRA
hora38: // GOTO "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN
apq1030://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto apq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN
apq1430://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto apq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN
apq2130://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto apq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto ap;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora38; // GOTO "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA


            case 4:// "ATIVIDADE PARANORMAL" - QUINTA-FEIRA
hora39: // GOTO "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN
apq12://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto apq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN
apq16://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto apq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN
apq2230://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto apq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto apq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto ap;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora39; // GOTO "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto lond;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto ap;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
        }//FIM IF (FILME==1) LONDRINA

        if (filme==2) // ESCOLHA DO FILME "12 HOMENS E UM SEGREDO"
        {
            //INÍCIO IF (FILME==2) LONDRINA
hs12: // GOTO - FILME "12 HOMENS E UM SEGREDO"
            printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA
hora40: // GOTO "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN
hss12://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hss12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hss12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto hss12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) 12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN
hss15://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hss15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hss15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto hss15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN
hss20://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hss20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hss20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto hss20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto hs12;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora40; // GOTO "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA
hora41: // GOTO "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN
hst13://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hst13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hst13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto hst13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN
hst17://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hst17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hst17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto hst17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN
hst22://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hst22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hst22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto hst22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto hs12;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora41; // GOTO "12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA

            case 3:// "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA
hora42: // GOTO "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN
hsq1030://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto hsq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN
hsq1430://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto hsq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN
hsq2130://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto hsq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto hs12;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora42; // GOTO "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA

            case 4:// "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA
hora43: // GOTO "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H30MIN
hsq12://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto hsq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN
hsq16://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto hsq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN
hsq2230://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto hsq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto hsq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto hs12;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora43; // GOTO "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto lond;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto hs12;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
        }//FIM IF (FILME==2) LONDRINA

        if (filme==3) // ESCOLHA DO FILME "TITANIC"
        {
            //INÍCIO IF (FILME==3) LONDRINA
titanic: // GOTO - FILME "TITANIC"
            printf("\t\t\t**TITANIC**\n\n");
            printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTERÇA-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR À PROGRAMAÇÃO DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR À PÁGINA INICIAL***\n\n");
            printf("\t7 - \t***OPÇÃO INVÁLIDA***\n\n");
            printf ("\nInforme o dia da semana que você gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //INÍCIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "TITANIC" - SEGUNDA-FEIRA
hora44: // GOTO "TITANIC" - SEGUNDA-FEIRA - HORÁRIO
                printf("\t\t\t**TITANIC**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TITANIC" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN
tis11://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tis11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tis11;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto tis11;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"TITANIC" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN
tis15://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tis15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tis15;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto tis15;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"TITANIC" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN
tis20://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tis20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tis20;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto tis20;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto titanic;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora44; // GOTO "TITANIC" - SEGUNDA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "TITANIC" - TERÇA-FEIRA
hora45: // GOTO "TITANIC" - TERÇA-FEIRA - HORÁRIO
                printf("\t\t\t**TITANIC**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TITANIC" - TERÇA-FEIRA - 13H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "TITANIC" - TERÇA-FEIRA - 13H00MIN
tit13://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tit13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tit13;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 13H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto tit13;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "TITANIC" - TERÇA-FEIRA - 13H00MIN

                if (horario==2) //"TITANIC" - TERÇA-FEIRA - 17H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "TITANIC" - TERÇA-FEIRA - 17H00MIN
tit17://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tit17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tit17;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 17H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto tit17;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "TITANIC" - TERÇA-FEIRA - 17H00MIN

                if (horario==3) //"TITANIC" - TERÇA-FEIRA - 22H00MIN
                {
                    //INÍCIO IF (HORARIO==3) "TITANIC" - TERÇA-FEIRA - 22H00MIN
tit22://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tit22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **TERÇA-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tit22;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - TERÇA-FEIRA - 22H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto tit22;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "TITANIC" - TERÇA-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto titanic;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA
                    print_opcao_invalida();
                    goto hora45; // GOTO "TITANIC" - TERÇA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA TERÇA-FEIRA

            case 3:// "TITANIC" - QUARTA-FEIRA
hora46: // GOTO "TITANIC" - QUARTA-FEIRA - HORÁRIO
                printf("\t\t\t**TITANIC**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TITANIC" - QUARTA-FEIRA - 10H30MIN
                {
                    //INÍCIO IF (HORARIO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN
tiq1030://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq1030;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto tiq1030;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"TITANIC" - QUARTA-FEIRA - 14H30MIN
                {
                    //INÍCIO IF (HORARIO==2) "TITANIC" - QUARTA-FEIRA - 14H30MIN
tiq1430://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq1430;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto tiq1430;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "TITANIC" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"TITANIC" - QUARTA-FEIRA - 21H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "TITANIC" - QUARTA-FEIRA - 21H30MIN
tiq2130://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq2130;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto tiq2130;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "TITANIC" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto titanic;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora46; // GOTO "TITANIC" - QUARTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUARTA-FEIRA


            case 4:// "TITANIC" - QUINTA-FEIRA
hora47: // GOTO "TITANIC" - QUINTA-FEIRA - HORÁRIO
                printf("\t\t\t**TITANIC**\n\n");
                printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME\n\n");
                printf ("\t5 - OPÇÃO INVÁLIDA\n\n");
                printf ("\nInforme o horário que você gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TITANIC" - QUINTA-FEIRA - 12H00MIN
                {
                    //INÍCIO IF (HORARIO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN
tiq12://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq12;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==1)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==1)
                        print_opcao_invalida();
                        goto tiq12;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==1)
                }//TÉRMINO IF (HORARIO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"TITANIC" - QUINTA-FEIRA - 16H00MIN
                {
                    //INÍCIO IF (HORARIO==2) "TITANIC" - QUINTA-FEIRA - 16H00MIN
tiq16://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq16;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==2)
                        print_opcao_invalida();
                        goto tiq16;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==2)
                }//TÉRMINO IF (HORARIO==2) "TITANIC" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"TITANIC" - QUINTA-FEIRA - 22H30MIN
                {
                    //INÍCIO IF (HORARIO==3) "TITANIC" - QUINTA-FEIRA - 22H30MIN
tiq2230://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OPÇÃO INVÁLIDA\n");
                    printf ("Escolha a opção de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //INÍCIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMAÇÃO A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso é R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos você quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos é de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as opções de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - NÃO\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //INÍCIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HORÁRIO DO FILME

                            print_opcao_invalida();
                            goto tiq2230;
                        }//TÉRMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//TÉRMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OPÇÃO INVÁLIDA (HORÁRIO==2)
                    {
                        //INÍCIO OPÇÃO INVÁLIDA (HORÁRIO==3)
                        print_opcao_invalida();
                        goto tiq2230;
                    }// TÉRMINO OPÇÃO INVÁLIDA (HORÁRIO==3)
                }//TÉRMINO IF (HORARIO==3) "TITANIC" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                {
                    //INÍCIO IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME
                    goto titanic;
                }//FIM IF (HORÁRIO==4) RETORNAR À PROGRAMAÇÃO DA SEMANA DO FILME

                else // OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                {
                    //INÍCIO ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora47; // GOTO "TITANIC" - QUINTA-FEIRA - HORÁRIO
                }//FIM ELSE - OPÇÃO INVÁLIDA, RETORNA AOS HORÁRIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR À PROGRAMAÇÃO DE FILMES
            {
                goto lond;
            }

            case 6://RETORNAR À PÁGINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR À PROGRAMAÇÀO DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto titanic;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
        }//FIM IF (FILME==3) LONDRINA

        if (filme==4)//INÍCIO IF (FILME==4) - GOTO INICIO
        {
            goto inicio;
        }//TÉRMINO IF (FILME==4) - GOTO INICIO

        else//INÍCIO (FILME==5) - OPÇÃO INVÁLIDA GOTO LONDRINA
        {
            print_opcao_invalida();
            goto lond;
        }//TÉRMINO (FILME==5) - OPÇÃO INVÁLIDA GOTO LONDRINA

    default: // SAIR DO PROGRAMA
        goto fim;

    }// fim SWITCH CASE - CIDADE

pipoca:
    printf ("\t\t\tSEJA BEM-VINDO À POPCORN CINE-SENAI!\n\n");
    printf ("\t\t\tAQUI VOCÊ NÃO ASSISTE FILME DE ESTÔMAGO VAZIO\n\n");
    printf ("1 - COMBO PIPOCA + BEBIDA + DOCE      -       R$18,00\n");
    printf ("2 - COMBO PIPOCA + BEBIDA             -       R$15,00\n");
    printf ("3 - PIPOCA                            -       R$10,00\n");
    printf ("4 - BEBIDA                            -       R$ 7,00\n");
    printf ("5 - DOCE                              -       R$ 5,00\n");
    printf ("6 - OPÇÃO INVÁLIDA!\n");
    printf ("7 - ENCERRAR COMPRA\n");
    printf ("Informe qual é a opção que deseja: ");
    scanf("%d", &doce);
    limpa_tela();

    switch (doce)
    {
    //INÍCIO SWITCH CASE DOCE
    case 1://COMBO PIPOCA+BEBIDA+DOCE
        doce1=18;
        printf("Você escolheu 'COMBO PIPOCA + BEBIDA + DOCE'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce1);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 2:// COMBO PIPOCA+BEBIDA
        doce2=15;
        printf("Você escolheu 'COMBO PIPOCA + BEBIDA'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce2);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 3:// SOMENTE PIPOCA
        doce3=10;
        printf("Você escolheu 'PIPOCA'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce3);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 4://SOMENTE BEBIDA
        doce4=7;
        printf("Você escolheu 'BEBIDA'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce4);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 5://SOMENTE DOCE
        doce5=5;
        printf("Você escolheu 'DOCE'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce5);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 6://OPÇÃO INVÁLIDA - RETORNE PIPOCA
        print_opcao_invalida();
        goto pipoca;

    default:
        goto vfinal;

    }//FIM SWITCH CASE DOCE

vfinal:
    total = valor+doce1+doce2+doce3+doce4+doce5;
    printf ("\n\t\t\t\t<<<<<O VALOR TOTAL DE SUA COMPRA É DE R$ %.2f>>>>>\n", total);
    pausa();
    limpa_tela();
    goto fim;


fim:
    printf ("\n\n\t\t\t***O CINE-SENAI ESPERA QUE VOCÊ TENHA UMA EXCELENTE EXPERIÊNCIA***\n\n");
    printf ("\t\t\t\t***ESPERAMOS TÊ-LO CONOSCO EM UMA BREVE EXPERIÊNCIA***\n\n");
    printf ("\t\t\t\t***AGRADECEMOS A SUA ESCOLHA. ATÉ UMA PRÓXIMA.***\n\n");

    pausa();
    return (0);
}
