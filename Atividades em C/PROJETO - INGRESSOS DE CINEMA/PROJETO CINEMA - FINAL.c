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
    printf("Op��o inv�lida!\n");
    system ("pause");
    limpa_tela();
}

int main (void)
{
    setlocale (LC_ALL, "");
    //VARI�VEIS
    int cidade, filme, semana, horario, ingresso, quantidade, opcao, doce;
    float valor, total=0, ingresso_inteiro = 15, meio_ingresso = 7.5, doce1, doce2, doce3, doce4, doce5;
    //GOTO - P�GINAL INICIAL - CIDADES
inicio:
    printf ("\t\t\tSEJA BEM-VINDO AO CINE-SENAI!\n\n");
    printf ("\t\t\t  O CINEMA DAS IND�STRIAS\n\n");
    printf ("\t\t\t\tLOCALIZA��O\n\n");
    printf ("\t\t\t 1 - CURITIBA\n");
    printf ("\t\t\t 2 - S�O JOS� DOS PINHAIS\n");
    printf ("\t\t\t 3 - MARING�\n");
    printf ("\t\t\t 4 - LONDRINA\n");
    printf ("\t\t\t 5 - <<<<<SAIR DO PROGRAMA>>>>>\n\n");
    printf ("\nEscolha a cidade onde deseja ir ao cinema: ");
    scanf ("%d", &cidade);
    limpa_tela();

    switch (cidade) //1 - SWITCH CASE PARA DEFINIR A CIDADE ONDE A PESSOA IR� COMPRAR INGRESSOS PARA ASSISITR O CINEMA
    {
    //in�cio SWITCH CASE - CIDADE
    case 1: //CURITIBA
curitiba:
        printf("\t\t\t\t\t***CURITIBA***\n\n");
        printf("\t\t\tPROGRAMA��O DE FILMES EM CARTAZ EM CURITIBA \n\n");
        printf("\t\t1 - DE VOLTA PARA O FUTURO I\n");
        printf("\t\t2 - REI LE�O\n");
        printf("\t\t3 - HARRY POTTER E A PEDRA FILOSOFAL\n");
        printf ("\t\t4 - RETORNAR � P�GINA INICIAL\n");
        printf("\t\t5 - OP��O INV�LIDA!\n");
        printf ("\nINFORME O NOME DO FILME QUE VOC� GOSTARIA DE ASSISTIR: ");
        scanf ("%d", &filme);
        limpa_tela();

        if (filme==1) // ESCOLHA DO FILME "DE VOLTA PARA O FUTURO I"
        {
btf: // GOTO - FILME "DE VOLTA PARA O FUTURO"
            printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA
hora1: // GOTO "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN
btfs11://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO


                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto btfs11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1
                }//T�RMINO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN
btfs15://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto btfs15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN
btfs20://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto btfs20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora1; // GOTO "DE VOLTA PARA O FUTURO I" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA
hora5: // GOTO "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN
btft13://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btft13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btft13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto btft13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN
btft17://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btft17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btft17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto btft17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN
btft22://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btft22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btft22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto btft22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora5; // GOTO "DE VOLTA PARA O FUTURO I" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA


            case 3:// "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA
hora9: // GOTO "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN
btfq1030://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1
                        print_opcao_invalida();
                        goto btfq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN
btfq1430://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto btfq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN
btfq2130://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto btfq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora9; // GOTO "DE VOLTA PARA O FUTURO I" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA

            case 4:// "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA
hora13: // GOTO "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN
btfq12://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto btfq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN
btfq16://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto btfq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN
btfq2230://
                    printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**DE VOLTA PARA O FUTURO I**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto btfq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto btfq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora13; // GOTO "DE VOLTA PARA O FUTURO I" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto curitiba;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto btf;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//T�RMINO IF (FILME==1) - CURITIBA

        if (filme==2) // ESCOLHA DO FILME "REI LE�O"
        {
rl: // GOTO - FILME "REI LE�O"
            printf("\t\t\t**REI LE�O**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "REI LE�O" - SEGUNDA-FEIRA
hora2: // GOTO "REI LE�O" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**REI LE�O**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"REI LE�O" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "REI LE�O" - SEGUNDA-FEIRA - 11H00MIN
rls11://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rls11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rls11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto rls11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "REI LE�O" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"REI LE�O" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "REI LE�O" - SEGUNDA-FEIRA - 15H00MIN
rls15://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rls15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rls15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto rls15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "REI LE�O" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"REI LE�O" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "REI LE�O" - SEGUNDA-FEIRA - 20H00MIN
rls20://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rls20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rls20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto rls20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "REI LE�O" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto rl;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora2; // GOTO "REI LE�O" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "REI LE�O" - TER�A-FEIRA
hora3: // GOTO "REI LE�O" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**REI LE�O**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"REI LE�O" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "REI LE�O" - TER�A-FEIRA - 13H00MIN
rlt13://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlt13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlt13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto rlt13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "REI LE�O" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"REI LE�O" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "REI LE�O" - TER�A-FEIRA - 17H00MIN
rlt17://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlt17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlt17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto rlt17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "REI LE�O" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"REI LE�O" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "REI LE�O" - TER�A-FEIRA - 22H00MIN
rlt22://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlt22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlt22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto rlt22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "REI LE�O" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto rl;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora3; // GOTO "REI LE�O" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA


            case 3:// "REI LE�O" - QUARTA-FEIRA
hora4: // GOTO "REI LE�O" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**REI LE�O**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"REI LE�O" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "REI LE�O" - QUARTA-FEIRA - 10H30MIN
rlq1030://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto rlq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "REI LE�O" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"REI LE�O" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "REI LE�O" - QUARTA-FEIRA - 14H30MIN
rlq1430://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto rlq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "REI LE�O" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"REI LE�O" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "REI LE�O" - QUARTA-FEIRA - 21H30MIN
rlq2130://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto rlq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "REI LE�O" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto rl;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora4; // GOTO "REI LE�O" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA

            case 4:// "REI LE�O" - QUINTA-FEIRA
hora6: // GOTO "REI LE�O" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**REI LE�O**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"REI LE�O" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "REI LE�O" - QUINTA-FEIRA - 12H00MIN
rlq12://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto rlq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "REI LE�O" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"REI LE�O" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "REI LE�O" - QUINTA-FEIRA - 16H00MIN
rlq16://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto rlq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "REI LE�O" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"REI LE�O" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "REI LE�O" - QUINTA-FEIRA - 22H30MIN
rlq2230://
                    printf("\t\t\t**REI LE�O**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"REI LE�O" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"REI LE�O" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**REI LE�O**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto rlq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "REI LE�O" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto rlq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "REI LE�O" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto rl;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora6; // GOTO "REI LE�O" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto curitiba;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto rl;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//T�RMINO IF (FILME==2) - CURITIBA

        if (filme==3) // ESCOLHA DO FILME "HARRY POTTER E A PEDRA FILOSOFAL"
        {
hp: // GOTO - FILME "HARRY POTTER E A PEDRA FILOSOFAL"
            printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA
hora7: // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN
hps11://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hps11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hps11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto hps11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN
hps15://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hps15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hps15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto hps15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN
hps20://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hps20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hps20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto hps20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto hp;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora7; // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA
hora8: // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN
hpt13://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpt13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpt13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto hpt13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN
hpt17://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpt17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpt17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto hpt17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN
hpt22://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpt22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpt22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto hpt22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto hp;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora8; // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA


            case 3:// "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA
hora10: // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN
hpq1030://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto hpq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN
hpq1430://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto hpq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN
hpq2130://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto hpq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto hp;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora10; // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA

            case 4:// "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA
hora11: // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN
hpq12://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto hpq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN
hpq16://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto hpq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN
hpq2230://
                    printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**HARRY POTTER E A PEDRA FILOSOFAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hpq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto hpq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto btf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora11; // GOTO "HARRY POTTER E A PEDRA FILOSOFAL" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto curitiba;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto hp;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//T�RMINO IF (FILME==3) - CURITIBA

        if (filme==4)//IN�CIO IF (FILME==4) - GOTO INICIO
        {
            goto inicio;
        }//T�RMINO IF (FILME==4) - GOTO INICIO

        else//IN�CIO (FILME==5) - OP��O INV�LIDA GOTO CURITIBA
        {
            print_opcao_invalida();
            goto curitiba;
        }//T�RMINO (FILME==5) - OP��O INV�LIDA GOTO CURITIBA

    case 2: // S�O JOS� DOS PINHAIS
sjp:
        printf("\t\t\t\t\t***S�O JOS� DOS PINHAIS***\n\n");
        printf("\t\t\tPROGRAMA��O DE FILMES EM CARTAZ EM S�O JOS� DOS PINHAIS\n\n");
        printf("\t\t1 - YESTERDAY\n");
        printf("\t\t2 - SEXTA-FEIRA 13\n");
        printf("\t\t3 - EFEITO BORBOLETA\n");
        printf ("\t\t4 - RETORNAR � P�GINA INICIAL\n");
        printf("\t\t5 - OP��O INV�LIDA!\n");
        printf ("\nINFORME O NOME DO FILME QUE VOC� GOSTARIA DE ASSISTIR: ");
        scanf ("%d", &filme);
        limpa_tela();

        if (filme==1) // ESCOLHA DO FILME "YESTERDAY"
        {
            //IN�CIO IF (FILME==1) - SJP
yes: // GOTO - FILME "YESTERDAY"
            printf("\t\t\t**YESTERDAY**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "YESTERDAY" - SEGUNDA-FEIRA
hora12: // GOTO "YESTERDAY" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**YESTERDAY**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN
yess11://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yess11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yess11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto yess11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "YESTERDAY" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN
yess15://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yess15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yess15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto yess15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN
yess20://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yess20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yess20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto yess20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "YESTERDAY" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto yes;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora12; // GOTO "YESTERDAY" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "YESTERDAY" - TER�A-FEIRA
hora14: // GOTO "YESTERDAY" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**YESTERDAY**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"YESTERDAY" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "YESTERDAY" - TER�A-FEIRA - 13H00MIN
yest13://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yest13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - TER�A - 13H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yest13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - TER�A - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto yest13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "YESTERDAY" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"YESTERDAY" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "YESTERDAY" - TER�A-FEIRA - 17H00MIN
yest17://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yest17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yest17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto yest17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "YESTERDAY" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"YESTERDAY" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "YESTERDAY" - TER�A-FEIRA - 22H00MIN
yest22://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yest22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yest22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto yest22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "YESTERDAY" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto yes;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora14; // GOTO "YESTERDAY" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA

            case 3:// "YESTERDAY" - QUARTA-FEIRA
hora15: // GOTO "YESTERDAY" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**YESTERDAY**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"YESTERDAY" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN
yesq1030://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto yesq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "YESTERDAY" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"YESTERDAY" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN
yesq1430://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto yesq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "YESTERDAY" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"YESTERDAY" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN
yesq2130://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto yesq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "YESTERDAY" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto yes;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora15; // GOTO "YESTERDAY" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA

            case 4:// "YESTERDAY" - QUINTA-FEIRA
hora16: // GOTO "YESTERDAY" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**YESTERDAY**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"YESTERDAY" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN
yesq12://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto yesq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "YESTERDAY" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"YESTERDAY" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN
yesq16://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto yesq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "YESTERDAY" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"YESTERDAY" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN
yesq2230://
                    printf("\t\t\t**YESTERDAY**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**YESTERDAY**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto yesq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto yesq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "YESTERDAY" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto yes;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora16; // GOTO "YESTERDAY" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto sjp;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto yes;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==1) - SJP

        if (filme==2) // ESCOLHA DO FILME "SEXTA-FEIRA 13"
        {
            //IN�CIO IF (FILME==2) - SJP
sx13: // GOTO - FILME "SEXTA-FEIRA 13"
            printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "SEXTA-FEIRA 13" - SEGUNDA-FEIRA
hora17: // GOTO "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN
sf13s11://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13s11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13s11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto sf13s11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN
sf13s15://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\to\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13s15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13s15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto sf13s15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN
sf13s20://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13s20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13s20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto sf13s20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto sx13;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora17; // GOTO "SEXTA-FEIRA 13" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "SEXTA-FEIRA 13" - TER�A-FEIRA
hora18: // GOTO "SEXTA-FEIRA 13" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 13H00MIN
sf13t13://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13t13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A - 13H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13t13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto sf13t13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN
sf13t17://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13t17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13t17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto sf13t17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "SEXTA-FEIRA 13" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN
sf13t22://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13t22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13t22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto sf13t22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "SEXTA-FEIRA 13" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto sx13;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora18; // GOTO "SEXTA-FEIRA 13" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA

            case 3:// "SEXTA-FEIRA 13" - QUARTA-FEIRA
hora19: // GOTO "SEXTA-FEIRA 13" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN
sf13q1030://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto sf13q1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN
sf13q1430://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto sf13q1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN
sf13q2130://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto sf13q2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "SEXTA-FEIRA 13" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto sx13;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora19; // GOTO "SEXTA-FEIRA 13" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA

            case 4:// "SEXTA-FEIRA 13" - QUINTA-FEIRA
hora20: // GOTO "SEXTA-FEIRA 13" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN
sf13q12://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto sf13q12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN
sf13q16://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto sf13q16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN
sf13q2230://
                    printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**SEXTA-FEIRA 13**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto sf13q2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto sf13q2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "SEXTA-FEIRA 13" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto sx13;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora20; // GOTO "SEXTA-FEIRA 13" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto sjp;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto sx13;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==2) - SJP

        if (filme==3) // ESCOLHA DO FILME "EFEITO BORBOLETA"
        {
            //IN�CIO IF (FILME==3) - SJP
eb: // GOTO - FILME "EFEITO BORBOLETA"
            printf("\t\t\t**EFEITO BORBOLETA**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "EFEITO BORBOLETA" - SEGUNDA-FEIRA
hora21: // GOTO "EFEITO BORBOLETA" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN
ebs11://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto ebs11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN
ebs15://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto ebs15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN
ebs20://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto ebs20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "EFEITO BORBOLETA" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto eb;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora21; // GOTO "EFEITO BORBOLETA" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "EFEITO BORBOLETA" - TER�A-FEIRA
hora22: // GOTO "EFEITO BORBOLETA" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"EFEITO BORBOLETA" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 13H00MIN
ebt13://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebt13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A - 13H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebt13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto ebt13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN
ebt17://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebt17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebt17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto ebt17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "EFEITO BORBOLETA" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN
ebt22://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebt22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebt22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto ebt22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "EFEITO BORBOLETA" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto eb;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora22; // GOTO "EFEITO BORBOLETA" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA

            case 3:// "EFEITO BORBOLETA" - QUARTA-FEIRA
hora23: // GOTO "EFEITO BORBOLETA" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN
ebq1030://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto ebq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN
ebq1430://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto ebq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "EFEITO BORBOLETA" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN
ebq2130://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto ebq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "EFEITO BORBOLETA" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto eb;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora23; // GOTO "EFEITO BORBOLETA" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA

            case 4:// "EFEITO BORBOLETA" - QUINTA-FEIRA
hora24: // GOTO "EFEITO BORBOLETA" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN
ebq12://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto ebq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN
ebq16://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto ebq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "EFEITO BORBOLETA" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN
ebq2230://
                    printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**EFEITO BORBOLETA**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto ebq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto ebq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "EFEITO BORBOLETA" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto eb;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora24; // GOTO "EFEITO BORBOLETA" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto sjp;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto eb;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==3) - SJP

        if (filme==4)//IN�CIO IF (FILME==4) - GOTO INICIO
        {
            goto inicio;
        }//T�RMINO IF (FILME==4) - GOTO INICIO

        else//IN�CIO (FILME==5) - OP��O INV�LIDA GOTO SJP
        {
            print_opcao_invalida();
            goto sjp;
        }//T�RMINO (FILME==5) - OP��O INV�LIDA GOTO SJP

    case 3: // MARING�
mga:
        printf("\t\t\t\t\t***MARING�***\n\n");
        printf("\t\t\tPROGRAMA��O DE FILMES EM CARTAZ EM MARING� \n\n");
        printf("\t\t1 - TRANSFORMERS\n");
        printf("\t\t2 - MEU MALVADO FAVORITO\n");
        printf("\t\t3 - UM LUGAR CHAMADO NOTHINGHILL\n");
        printf ("\t\t4 - RETORNAR � P�GINA INICIAL\n");
        printf("\t\t5 - OP��O INV�LIDA!\n");
        printf ("\nINFORME O NOME DO FILME QUE VOC� GOSTARIA DE ASSISTIR: ");
        scanf ("%d", &filme);
        limpa_tela();

        if (filme==1) // ESCOLHA DO FILME "TRANSFORMERS"
        {
            //IN�CIO IF (FILME==1) MARING�
transf: // GOTO - FILME "TRANSFORMERS"
            printf("\t\t\t**TRANSFORMERS**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "TRANSFORMERS" - SEGUNDA-FEIRA
hora25: // GOTO "TRANSFORMERS" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**TRANSFORMERS**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN
transfs11://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto transfs11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN
transfs15://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFOMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto transfs15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "TRANSFORMERS" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN
transfs20://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto transfs20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "TRANSFORMERS" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora25; // GOTO "TRANSFORMERS" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "TRANSFORMERS" - TER�A-FEIRA
hora26: // GOTO "TRANSFORMERS" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**TRANSFORMERS**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TRANSFORMERS" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "TRANSFORMERS" - TER�A-FEIRA - 13H00MIN
transft13://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transft13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transft13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto transft13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "TRANSFORMERS" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"TRANSFORMERS" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "TRANSFORMERS" - TER�A-FEIRA - 17H00MIN
transft17://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transft17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transft17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto transft17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "TRANSFORMERS" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"TRANSFORMERS" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "TRANSFORMERS" - TER�A-FEIRA - 22H00MIN
transft22://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transft22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transft22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto transft22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "TRANSFORMERS" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora26; // GOTO "TRANSFORMERS" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA


            case 3:// "TRANSFORMERS" - QUARTA-FEIRA
hora27: // GOTO "TRANSFORMERS" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**TRANSFORMERS**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TRANSFORMERS" - QUARTAA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN
transfq1030://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto transfq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "TRANSFORMERS" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN
transfq1430://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto transfq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "TRANSFORMERS" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN
transfq2130://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto transfq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "TRANSFORMERS" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora27; // GOTO "TRANSFORMERS" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA


            case 4:// "TRANSFORMERS" - QUINTA-FEIRA
hora28: // GOTO "TRANSFORMERS" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**TRANSFORMERS**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN
transfq12://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto transfq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "TRANSFORMERS" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN
transfq16://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto transfq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "TRANSFORMERS" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN
transfq2230://
                    printf("\t\t\t**TRANSFORMERS**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**TRANSFORMERS**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto transfq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto transfq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "TRANSFORMERS" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora28; // GOTO "TRANSFORMERS" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto mga;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto transf;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==1) MARING�

        if (filme==2) // ESCOLHA DO FILME "MEU MALVADO FAVORITO"
        {
            //IN�CIO IF (FILME==2) MARING�
mmf: // GOTO - FILME "MEU MALVADO FAVORITO"
            printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA
hora29: // GOTO "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN
mmfs11://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto mmfs11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN
mmfs15://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto mmfs15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN
mmfs20://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto mmfs20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora29; // GOTO "MEU MALVADO FAVORITO" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "MEU MALVADO FAVORITO" - TER�A-FEIRA
hora30: // GOTO "MEU MALVADO FAVORITO" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN
mmft13://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmft13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmft13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto mmft13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN
mmft17://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmft17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmft17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto mmft17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN
mmft22://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmft22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmft22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto mmft22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "MEU MALVADO FAVORITO" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora30; // GOTO "MEU MALVADO FAVORITO" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA


            case 3:// "MEU MALVADO FAVORITO" - QUARTA-FEIRA
hora31: // GOTO "MEU MALVADO FAVORITO" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"MEU MALVADO FAVORITO" - QUARTAA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN
mmfq1030://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto mmfq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN
mmfq1430://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto mmfq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN
mmfq2130://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto mmfq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "MEU MALVADO FAVORITO" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora31; // GOTO "MEU MALVADO FAVORITO" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA


            case 4:// "MEU MALVADO FAVORITO" - QUINTA-FEIRA
hora48: // GOTO "MEU MALVADO FAVORITO" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN
mmfq12://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto mmfq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN
mmfq16://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto mmfq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN
mmfq2230://
                    printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**MEU MALVADO FAVORITO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto mmfq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto mmfq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "MEU MALVADO FAVORITO" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora48; // GOTO "MEU MALVADO FAVORITO" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto mga;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto mmf;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==2) MARING�

        if (filme==3) // ESCOLHA DO FILME "UM LUGAR CHAMADO NOTHINGHILL"
        {
            //IN�CIO IF (FILME==2) MARING�
nh: // GOTO - FILME "UM LUGAR CHAMADO NOTHINGHILL"
            printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA
hora32: // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN
nhs11://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhs11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto nhs11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN
nhs15://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhs15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto nhs15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN
nhs20://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhs20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto nhs20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto transf;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora32; // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA
hora33: // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN
nht13://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nht13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nht13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto nht13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN
nht17://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nht17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nht17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto nht17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN
nht22://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nht22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nht22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto nht22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto nh;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora33; // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA


            case 3:// "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA
hora34: // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTAA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN
nhq1030://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto nhq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN
nhq1430://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto nhq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN
nhq2130://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto nhq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto nh;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora34; // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA


            case 4:// "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA
hora35: // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN
nhq12://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto nhq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN
nhq16://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto nhq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN
nhq2230://
                    printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**UM LUGAR CHAMADO NOTHINGHILL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto nhq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==3)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto nhq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto nh;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora35; // GOTO "UM LUGAR CHAMADO NOTHINGHILL" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto mga;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto nh;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME

        }//FIM IF (FILME==3) MARING�

        if (filme==4)//IN�CIO IF (FILME==4) - GOTO INICIO
        {
            goto inicio;
        }//T�RMINO IF (FILME==4) - GOTO INICIO

        else//IN�CIO (FILME==5) - OP��O INV�LIDA GOTO MARING�
        {
            print_opcao_invalida();
            goto mga;
        }//T�RMINO (FILME==5) - OP��O INV�LIDA GOTO MARING�


    case 4: // LONDRINA
lond:
        printf("\t\t\t\t\t***LONDRINA***\n\n");
        printf("\t\t\tPROGRAMA��O DE FILMES EM CARTAZ EM LONDRINA \n\n");
        printf("\t\t1 - ATIVIDADE PARANORMAL\n");
        printf("\t\t2 - 12 HOMENS E UM SEGREDO\n");
        printf("\t\t3 - TITANIC\n");
        printf ("\t\t4 - RETORNAR � P�GINA INICIAL\n");
        printf("\t\t5 - OP��O INV�LIDA!\n");
        printf ("\nINFORME O NOME DO FILME QUE VOC� GOSTARIA DE ASSISTIR: ");
        scanf ("%d", &filme);
        limpa_tela();

        if (filme==1) // ESCOLHA DO FILME "ATIVIDADE PARANORMAL"
        {
            //IN�CIO IF (FILME==1) LONDRINA
ap: // GOTO - FILME "ATIVIDADE PARANORMAL"
            printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA
hora36: // GOTO "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN
aps11://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto aps11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto aps11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto aps11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN
aps15://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto aps15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto aps15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto aps15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN
aps20://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto aps20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto aps20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto aps20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto ap;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora36; // GOTO "ATIVIDADE PARANORMAL" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "ATIVIDADE PARANORMAL" - TER�A-FEIRA
hora37: // GOTO "ATIVIDADE PARANORMAL" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN
apt13://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apt13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apt13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto apt13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN
apt17://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apt17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apt17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto apt17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN
apt22://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apt22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apt22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto apt22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto ap;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora37; // GOTO "ATIVIDADE PARANORMAL" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA

            case 3:// "ATIVIDADE PARANORMAL" - QUARTA-FEIRA
hora38: // GOTO "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN
apq1030://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto apq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN
apq1430://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto apq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN
apq2130://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "DATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto apq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto ap;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora38; // GOTO "ATIVIDADE PARANORMAL" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA


            case 4:// "ATIVIDADE PARANORMAL" - QUINTA-FEIRA
hora39: // GOTO "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN
apq12://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto apq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN
apq16://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto apq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN
apq2230://
                    printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto apq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto apq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto ap;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora39; // GOTO "ATIVIDADE PARANORMAL" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto lond;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto ap;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
        }//FIM IF (FILME==1) LONDRINA

        if (filme==2) // ESCOLHA DO FILME "12 HOMENS E UM SEGREDO"
        {
            //IN�CIO IF (FILME==2) LONDRINA
hs12: // GOTO - FILME "12 HOMENS E UM SEGREDO"
            printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA
hora40: // GOTO "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN
hss12://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hss12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hss12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto hss12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) 12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN
hss15://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hss15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hss15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto hss15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN
hss20://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hss20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hss20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto hss20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto hs12;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora40; // GOTO "12 HOMENS E UM SEGREDO" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "12 HOMENS E UM SEGREDO" - TER�A-FEIRA
hora41: // GOTO "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN
hst13://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hst13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hst13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto hst13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN
hst17://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hst17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hst17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto hst17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN
hst22://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hst22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hst22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto hst22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto hs12;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora41; // GOTO "12 HOMENS E UM SEGREDO" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA

            case 3:// "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA
hora42: // GOTO "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN
hsq1030://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto hsq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN
hsq1430://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto hsq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN
hsq2130://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto hsq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto hs12;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora42; // GOTO "12 HOMENS E UM SEGREDO" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA

            case 4:// "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA
hora43: // GOTO "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H30MIN
hsq12://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto hsq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN
hsq16://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**ATIVIDADE PARANORMAL**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto hsq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN
hsq2230://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto hsq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto hsq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto hs12;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora43; // GOTO "12 HOMENS E UM SEGREDO" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto lond;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto hs12;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
        }//FIM IF (FILME==2) LONDRINA

        if (filme==3) // ESCOLHA DO FILME "TITANIC"
        {
            //IN�CIO IF (FILME==3) LONDRINA
titanic: // GOTO - FILME "TITANIC"
            printf("\t\t\t**TITANIC**\n\n");
            printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
            printf("\t1 - \tSEGUNDA-FEIRA: 11h00min - 15h00min - 20h00min\n\n");
            printf("\t2 - \tTER�A-FEIRA: 13h00min - 17h00min - 22h00min\n\n");
            printf("\t3 - \tQUARTA-FEIRA: 10h30min - 14h30min - 21h30min\n\n");
            printf("\t4 - \tQUINTA-FEIRA: 12h00min - 16h00min - 22h30min\n\n");
            printf("\t5 - \t***RETORNAR � PROGRAMA��O DE FILMES***\n\n");
            printf("\t6 - \t***RETORNAR � P�GINA INICIAL***\n\n");
            printf("\t7 - \t***OP��O INV�LIDA***\n\n");
            printf ("\nInforme o dia da semana que voc� gostaria de assistir o filme: ");
            scanf ("%d", &semana);
            limpa_tela();

            switch (semana) //2 - SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            {
            //IN�CIO SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
            case 1:// "TITANIC" - SEGUNDA-FEIRA
hora44: // GOTO "TITANIC" - SEGUNDA-FEIRA - HOR�RIO
                printf("\t\t\t**TITANIC**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                printf("\t1 - 11h00min\n\n");
                printf("\t2 - 15h00min\n\n");
                printf("\t3 - 20h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TITANIC" - SEGUNDA-FEIRA - 11H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN
tis11://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t11h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tis11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t11h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tis11;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto tis11;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "TITANIC" - SEGUNDA-FEIRA - 11H00MIN

                if (horario==2) //"TITANIC" - SEGUNDA-FEIRA - 15H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN
tis15://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t15h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tis15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t15h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tis15;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto tis15;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "TITANIC" - SEGUNDA-FEIRA - 15H00MIN

                if (horario==3) //"TITANIC" - SEGUNDA-FEIRA - 20H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN
tis20://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                    printf("\t\t\t\t20h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tis20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **SEGUNDA-FEIRA**\n\n");
                        printf("\t\t\t\t20h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tis20;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto tis20;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "TITANIC" - SEGUNDA-FEIRA - 20H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto titanic;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA
                    print_opcao_invalida();
                    goto hora44; // GOTO "TITANIC" - SEGUNDA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA SEGUNDA-FEIRA

            case 2:// "TITANIC" - TER�A-FEIRA
hora45: // GOTO "TITANIC" - TER�A-FEIRA - HOR�RIO
                printf("\t\t\t**TITANIC**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                printf("\t1 - 13h00min\n\n");
                printf("\t2 - 17h00min\n\n");
                printf("\t3 - 22h00min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TITANIC" - TER�A-FEIRA - 13H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "TITANIC" - TER�A-FEIRA - 13H00MIN
tit13://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t13h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tit13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    if (ingresso==2) //"12 HOMENS E UM SEGREDO" - TER�A-FEIRA - 13H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 13H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t13h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tit13;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 13H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto tit13;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "TITANIC" - TER�A-FEIRA - 13H00MIN

                if (horario==2) //"TITANIC" - TER�A-FEIRA - 17H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "TITANIC" - TER�A-FEIRA - 17H00MIN
tit17://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t17h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tit17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - TER�A-FEIRA - 17H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 17H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t17h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tit17;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 17H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto tit17;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "TITANIC" - TER�A-FEIRA - 17H00MIN

                if (horario==3) //"TITANIC" - TER�A-FEIRA - 22H00MIN
                {
                    //IN�CIO IF (HORARIO==3) "TITANIC" - TER�A-FEIRA - 22H00MIN
tit22://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                    printf("\t\t\t\t22h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tit22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - TER�A-FEIRA - 22H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 22H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **TER�A-FEIRA**\n\n");
                        printf("\t\t\t\t22h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tit22;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - TER�A-FEIRA - 22H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto tit22;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "TITANIC" - TER�A-FEIRA - 22H00MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto titanic;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA
                    print_opcao_invalida();
                    goto hora45; // GOTO "TITANIC" - TER�A-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA TER�A-FEIRA

            case 3:// "TITANIC" - QUARTA-FEIRA
hora46: // GOTO "TITANIC" - QUARTA-FEIRA - HOR�RIO
                printf("\t\t\t**TITANIC**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                printf("\t1 - 10h30min\n\n");
                printf("\t2 - 14h30min\n\n");
                printf("\t3 - 21h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TITANIC" - QUARTA-FEIRA - 10H30MIN
                {
                    //IN�CIO IF (HORARIO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN
tiq1030://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t10h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t10h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq1030;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto tiq1030;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "TITANIC" - QUARTA-FEIRA - 10H30MIN

                if (horario==2) //"TITANIC" - QUARTA-FEIRA - 14H30MIN
                {
                    //IN�CIO IF (HORARIO==2) "TITANIC" - QUARTA-FEIRA - 14H30MIN
tiq1430://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t14h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t14h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq1430;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 14H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto tiq1430;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "TITANIC" - QUARTA-FEIRA - 14H30MIN

                if (horario==3) //"TITANIC" - QUARTA-FEIRA - 21H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "TITANIC" - QUARTA-FEIRA - 21H30MIN
tiq2130://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                    printf("\t\t\t\t21h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUARTA-FEIRA**\n\n");
                        printf("\t\t\t\t21h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq2130;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUARTA-FEIRA - 21H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto tiq2130;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "TITANIC" - QUARTA-FEIRA - 21H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto titanic;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA
                    print_opcao_invalida();
                    goto hora46; // GOTO "TITANIC" - QUARTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUARTA-FEIRA


            case 4:// "TITANIC" - QUINTA-FEIRA
hora47: // GOTO "TITANIC" - QUINTA-FEIRA - HOR�RIO
                printf("\t\t\t**TITANIC**\n\n");
                printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                printf("\t1 - 12h00min\n\n");
                printf("\t2 - 16h00min\n\n");
                printf("\t3 - 22h30min\n\n");
                printf("\t4 - RETORNAR � PROGRAMA��O DA SEMANA DO FILME\n\n");
                printf ("\t5 - OP��O INV�LIDA\n\n");
                printf ("\nInforme o hor�rio que voc� gostaria de assistir o filme: ");
                scanf ("%d", &horario);
                limpa_tela();

                if (horario==1) //"TITANIC" - QUINTA-FEIRA - 12H00MIN
                {
                    //IN�CIO IF (HORARIO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN
tiq12://
                    printf("\t\t\t**12 HOMENS E UM SEGREDO**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t12h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t12h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq12;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==1)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==1)
                        print_opcao_invalida();
                        goto tiq12;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==1)
                }//T�RMINO IF (HORARIO==1) "TITANIC" - QUINTA-FEIRA - 12H00MIN

                if (horario==2) //"TITANIC" - QUINTA-FEIRA - 16H00MIN
                {
                    //IN�CIO IF (HORARIO==2) "TITANIC" - QUINTA-FEIRA - 16H00MIN
tiq16://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t16h00min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t16h00min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq16;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 16H00MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==2)
                        print_opcao_invalida();
                        goto tiq16;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==2)
                }//T�RMINO IF (HORARIO==2) "TITANIC" - QUINTA-FEIRA - 16H00MIN

                if (horario==3) //"TITANIC" - QUINTA-FEIRA - 22H30MIN
                {
                    //IN�CIO IF (HORARIO==3) "TITANIC" - QUINTA-FEIRA - 22H30MIN
tiq2230://
                    printf("\t\t\t**TITANIC**\n\n");
                    printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                    printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                    printf("\t\t\t\t22h30min\n\n");
                    printf ("<<<<VALORES DE INGRESSO>>>>\n");
                    printf ("1 - INTEIRO:    R$ 15,00\n");
                    printf ("2 - MEIO INGRESSO: R$ 7,50\n");
                    printf ("3 - OP��O INV�LIDA\n");
                    printf ("Escolha a op��o de ingresso que deseja comprar: ");
                    scanf ("%d", &ingresso);
                    limpa_tela();

                    if (ingresso==1) //"TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", ingresso_inteiro);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*ingresso_inteiro;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    if (ingresso==2) //"TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                    {
                        //IN�CIO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO
                        printf("\t\t\t**TITANIC**\n\n");
                        printf("\t\t\t **PROGRAMA��O A SEMANA**\n\n");
                        printf ("\t\t\t   **QUINTA-FEIRA**\n\n");
                        printf("\t\t\t\t22h30min\n\n");
                        printf("O valor do ingresso � R$ %.2f\n", meio_ingresso);
                        printf ("Informe quantos ingressos voc� quer comprar: ");
                        scanf ("%d", &quantidade);
                        valor=quantidade*meio_ingresso;
                        printf ("O valor total de ingressos � de R$ %.2f\n", valor);
                        printf ("Gostaria de ver as op��es de pipocas e doces para comer no cinema?\n");
                        printf ("1 - SIM\n");
                        printf ("2 - N�O\n");
                        scanf ("%d", &opcao);
                        limpa_tela();

                        switch (opcao)//2 - SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                        {
                        //IN�CIO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA

                        case 1: //IR PARA LOJA DE PIPOCA
                            goto pipoca;

                        case 2: //ENCERRAR PROGRAMA
                            goto vfinal;

                        default://RETORNA PARA O HOR�RIO DO FILME

                            print_opcao_invalida();
                            goto tiq2230;
                        }//T�RMINO SWITCH CASE SE QUER IR PARA LOJA DE PIPOCA
                    }//T�RMINO IF (INGRESSO==1) "TITANIC" - QUINTA-FEIRA - 22H30MIN - INGRESSO

                    else//OP��O INV�LIDA (HOR�RIO==2)
                    {
                        //IN�CIO OP��O INV�LIDA (HOR�RIO==3)
                        print_opcao_invalida();
                        goto tiq2230;
                    }// T�RMINO OP��O INV�LIDA (HOR�RIO==3)
                }//T�RMINO IF (HORARIO==3) "TITANIC" - QUINTA-FEIRA - 22H30MIN

                if (horario==4) //RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                {
                    //IN�CIO IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME
                    goto titanic;
                }//FIM IF (HOR�RIO==4) RETORNAR � PROGRAMA��O DA SEMANA DO FILME

                else // OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                {
                    //IN�CIO ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA
                    print_opcao_invalida();
                    goto hora47; // GOTO "TITANIC" - QUINTA-FEIRA - HOR�RIO
                }//FIM ELSE - OP��O INV�LIDA, RETORNA AOS HOR�RIOS DO FILME NA QUINTA-FEIRA

            case 5://RETORNAR � PROGRAMA��O DE FILMES
            {
                goto lond;
            }

            case 6://RETORNAR � P�GINA INICIAL
            {
                goto inicio;
            }

            default://RETORNAR � PROGRAMA��O DA SEMANA DO FILME
            {
                print_opcao_invalida();
                goto titanic;
            }

            }//FIM SWITCH CASE PARA DEFINIR O DIA PARA ASSISTIR O PRIMEIRO FILME
        }//FIM IF (FILME==3) LONDRINA

        if (filme==4)//IN�CIO IF (FILME==4) - GOTO INICIO
        {
            goto inicio;
        }//T�RMINO IF (FILME==4) - GOTO INICIO

        else//IN�CIO (FILME==5) - OP��O INV�LIDA GOTO LONDRINA
        {
            print_opcao_invalida();
            goto lond;
        }//T�RMINO (FILME==5) - OP��O INV�LIDA GOTO LONDRINA

    default: // SAIR DO PROGRAMA
        goto fim;

    }// fim SWITCH CASE - CIDADE

pipoca:
    printf ("\t\t\tSEJA BEM-VINDO � POPCORN CINE-SENAI!\n\n");
    printf ("\t\t\tAQUI VOC� N�O ASSISTE FILME DE EST�MAGO VAZIO\n\n");
    printf ("1 - COMBO PIPOCA + BEBIDA + DOCE      -       R$18,00\n");
    printf ("2 - COMBO PIPOCA + BEBIDA             -       R$15,00\n");
    printf ("3 - PIPOCA                            -       R$10,00\n");
    printf ("4 - BEBIDA                            -       R$ 7,00\n");
    printf ("5 - DOCE                              -       R$ 5,00\n");
    printf ("6 - OP��O INV�LIDA!\n");
    printf ("7 - ENCERRAR COMPRA\n");
    printf ("Informe qual � a op��o que deseja: ");
    scanf("%d", &doce);
    limpa_tela();

    switch (doce)
    {
    //IN�CIO SWITCH CASE DOCE
    case 1://COMBO PIPOCA+BEBIDA+DOCE
        doce1=18;
        printf("Voc� escolheu 'COMBO PIPOCA + BEBIDA + DOCE'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce1);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 2:// COMBO PIPOCA+BEBIDA
        doce2=15;
        printf("Voc� escolheu 'COMBO PIPOCA + BEBIDA'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce2);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 3:// SOMENTE PIPOCA
        doce3=10;
        printf("Voc� escolheu 'PIPOCA'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce3);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 4://SOMENTE BEBIDA
        doce4=7;
        printf("Voc� escolheu 'BEBIDA'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce4);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 5://SOMENTE DOCE
        doce5=5;
        printf("Voc� escolheu 'DOCE'!\n\n");
        printf ("O valor gastos na loja POPCORN CINE-SENAI foi de R$ %.2f\n\n", doce5);
        printf ("Aperte qualquer tecla para verificar o valor total de sua compra.\n\n");
        pausa();
        limpa_tela();
        goto vfinal;

    case 6://OP��O INV�LIDA - RETORNE PIPOCA
        print_opcao_invalida();
        goto pipoca;

    default:
        goto vfinal;

    }//FIM SWITCH CASE DOCE

vfinal:
    total = valor+doce1+doce2+doce3+doce4+doce5;
    printf ("\n\t\t\t\t<<<<<O VALOR TOTAL DE SUA COMPRA � DE R$ %.2f>>>>>\n", total);
    pausa();
    limpa_tela();
    goto fim;


fim:
    printf ("\n\n\t\t\t***O CINE-SENAI ESPERA QUE VOC� TENHA UMA EXCELENTE EXPERI�NCIA***\n\n");
    printf ("\t\t\t\t***ESPERAMOS T�-LO CONOSCO EM UMA BREVE EXPERI�NCIA***\n\n");
    printf ("\t\t\t\t***AGRADECEMOS A SUA ESCOLHA. AT� UMA PR�XIMA.***\n\n");

    pausa();
    return (0);
}
