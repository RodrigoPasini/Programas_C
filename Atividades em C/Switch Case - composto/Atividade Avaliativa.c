//ATIVIDADE AVALIATIVA - PROGRAMA RESTAURANTE
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"");
    int dia, massa, carne, calzone, lasagna, pizza, risoto;
    inicio:
    printf ("\t\t\tSEJA BEM-VINDO AO RESTAURANTE MANGIA QUE TE FA BENE!\n\n");
    printf ("\t\t*** A CANTINA ITALIANA ONDE SUA REFEI��O � NOSSA �NICA PREOCUPA��O ***\n\n");
    printf ("\tMENU INICIAL\n\n");
    printf ("\n1 - SEGUNDA-FEIRA\n");
    printf ("2 - TER�A-FEIRA\n");
    printf ("3 - QUARTA-FEIRA\n");
    printf ("4 - QUINTA-FEIRA\n");
    printf ("5 - SEXTA-FEIRA\n");
    printf ("6 - SABADO\n");
    printf ("7 - ****Sair do Programa****\n");
    printf ("Escolha o dia da semana em que deseja verificar os pratos do dia: ");
    scanf ("%d", &dia);
    system ("cls");

    switch (dia)
    {

    case 1:

        segunda:
        printf("\t\t***SEGUNDA-FEIRA***\n\n");//Somente op��es de massa
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - GNOCCHI BRANCO AO MOLHO GORGONZOLA\n");
        printf("2 - POLENTA AO MOLHO QUATRO FORMAGGIO\n");
        printf("3 - TAGLIARINI AO MOLHO FUNGHI\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OP��O INV�LIDA!\n"); // Adicionei esta op��o no caso de n�o ser digitado um dos n�meros sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a op��o desejada: ");
        scanf ("%d", &massa);
        system ("cls");

        if (massa==1)
        {
            printf ("\n\nO PRATO SELECIONADO � 'GNOCCHI BRANCO AO MOLHO GORGONZOLA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, Carne de Frango, tiras de p�ra e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }
        if (massa==2)
        {
            printf ("\n\nO PRATO SELECIONADO � 'POLENTA AO MOLHO QUATRO FORMAGGIO'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, fil� de til�pia, batata frita e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }
        if (massa==3)
        {
            printf ("\n\nO PRATO SELECIONADO � 'TAGLIARINI AO MOLHO FUNGHI'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, mignon na mostarda, queijo assado e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }
        if (massa==4)
        {
            goto inicio;
        }
        else
        {
            printf("Op��o inv�lida!\n");
            system ("pause");
            system ("cls");
            goto segunda;
        }

    case 2:

        terca:
        printf("\t\t***TER�A-FEIRA***\n\n");//Somente op��es de carne
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - PEITO DE FRANGO GRELHADO AO CATUPIRY\n");
        printf("2 - FILET GRELHADO AO MOLHO MADEIRA\n");
        printf("3 - FILET DE LINGUADO A DORE AO MOLHO DE CAMAR�O\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OP��O INV�LIDA!"); // Adicionei esta op��o no caso de n�o ser digitado um dos n�meros sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a op��o desejada: ");
        scanf ("%d", &carne);
        system ("cls");

        if (carne==1)
        {
            printf ("\n\nO PRATO SELECIONADO � 'PEITO DE FRANGO GRELHADO AO CATUPIRY'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, Arroz, Batata Frita e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (carne==2)
        {
            printf ("\n\nO PRATO SELECIONADO � 'FILET GRELHADO AO MOLHO MADEIRA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, Arroz, Batata Frita, fettuccini ala creme e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (carne==3)
        {
            printf ("\n\nO PRATO SELECIONADO � 'FILET DE LINGUADO A DORE AO MOLHO DE CAMAR�O'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, Arroz, pur� de batata e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (carne==4)
        {
            goto inicio;
        }

        else
        {
            printf("Op��o inv�lida!\n");
            system ("pause");
            system ("cls");
            goto terca;
        }

    case 3:

        quarta:
        printf("\t\t***QUARTA-FEIRA***\n\n");//Somente op��es de calzone
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - CALZONE ESPECIAL\n");
        printf("2 - CALZONE DA CASA\n");
        printf("3 - CALZONE MAMA MIA\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OP��O INV�LIDA!"); // Adicionei esta op��o no caso de n�o ser digitado um dos n�meros sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a op��o desejada: ");
        scanf ("%d", &calzone);
        system ("cls");

        if (calzone==1)
        {
            printf ("\n\nO PRATO SELECIONADO � 'CALZONE ESPECIAL'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Ricota, Presunto, Muzzarela, Atum, Ovos e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (calzone==2)
        {
            printf ("\n\nO PRATO SELECIONADO � 'CALZONE DA CASA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Ricota, Presunto, Muzzarela, Provolone, Ervilha, Milho e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (calzone==3)
        {
            printf ("\n\nO PRATO SELECIONADO � 'CALZONE MAMMA MIA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela, Gorgonzola, tiras de p�ra e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (calzone==4)
        {
            goto inicio;
        }

        else
        {
            printf("Op��o inv�lida!\n");
            system ("pause");
            system ("cls");
            goto quarta;
        }

    case 4:

        quinta:
        printf("\t\t***QUINTA-FEIRA***\n\n");//Somente op��es de lasagna
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - LASAGNA AL SUGO\n");
        printf("2 - LASAGNA � ROMANESCA\n");
        printf("3 - LASAGNA AL QUATTRO FORMAGGI\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OP��O INV�LIDA!"); // Adicionei esta op��o no caso de n�o ser digitado um dos n�meros sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a op��o desejada: ");
        scanf ("%d", &lasagna);
        system ("cls");

        if (lasagna==1)
        {
            printf ("\n\nO PRATO SELECIONADO � 'LASAGNA AL SUGO'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Tomate, Carne, Cheiro Verde, Alho e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (lasagna==2)
        {
            printf ("\n\nO PRATO SELECIONADO � 'LASAGNA � ROMANESCA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Creme de Leite, Manteiga, Champignons, Presunto, Ervilha e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (lasagna==3)
        {
            printf ("\n\nO PRATO SELECIONADO � 'LASAGNA AL QUATTRO FORMAGGI'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Creme de Leite, Catupiry, Parmes�o, Gorgonzola, Provolone e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (lasagna==4)
        {
            goto inicio;
        }

        else
        {
            printf("Op��o inv�lida!\n");
            system ("pause");
            system ("cls");
            goto quinta;
        }

    case 5:

        sexta:
        printf("\t\t***SEXTA-FEIRA***\n\n");//Somente op��es de pizza
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - PIZZA DI QUATTRO FORMAGGI\n");
        printf("2 - PIZZA DI GORGONZOLA COM P�RA\n");
        printf("3 - PIZZA DI MARGUERITA\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OP��O INV�LIDA!"); // Adicionei esta op��o no caso de n�o ser digitado um dos n�meros sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a op��o desejada: ");
        scanf ("%d", &pizza);
        system ("cls");

        if (pizza==1)
        {
            printf ("\n\nO PRATO SELECIONADO � 'PIZZA DI QUATTRO FORMAGGI'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela di b�fala, Catupiry, Parmes�o, Gorgonzola, Provolone e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (pizza==2)
        {
            printf ("\n\nO PRATO SELECIONADO � 'PIZZA DI GORGONZOLA COM P�RA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela, Gorgonzola, Tiras de P�ra e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (pizza==3)
        {
            printf ("\n\nO PRATO SELECIONADO � 'PIZZA DI MARGUERITA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela, Tomate, R�cula e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (pizza==4)
        {
            goto inicio;
        }

        else
        {
            printf("Op��o inv�lida!\n");
            system ("pause");
            system ("cls");
            goto sexta;
        }

    case 6:

        sabado:
        printf("\t\t***S�BADO***\n\n");//Somente op��es de risotos
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - RISOTO CARCIOFFI\n");
        printf("2 - RISOTO ELEGANTE\n");
        printf("3 - RISOTO MARGUERITA\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OP��O INV�LIDA!"); // Adicionei esta op��o no caso de n�o ser digitado um dos n�meros sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a op��o desejada: ");
        scanf ("%d", &risoto);
        system ("cls");

        if (risoto==1)
        {
            printf ("\n\nO PRATO SELECIONADO � 'RISOTO CARCIOFFI'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Queijo, deliciosos cora��es de alcachofra e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (risoto==2)
        {
            printf ("\n\nO PRATO SELECIONADO � 'RISOTO ELEGANTE'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Parma, R�cula, Parmes�o e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (risoto==3)
        {
            printf ("\n\nO PRATO SELECIONADO � 'RISOTO MARGUERITA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela di b�fala, tomate seco, R�cula e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (risoto==4)
        {
            goto inicio;
        }

        else
        {
            printf("Op��o inv�lida!\n");
            system ("pause");
            system("cls");
            goto sabado;
        }

    default:
        {
        printf("\t\t\t***VOC� ESCOLHEU SAIR DO SISTEMA***\n\n");
        printf("\t\t***ESPERAMOS QUE TENHA GOSTADO DOS NOSSOS SERVI�OS***\n\n");
        printf("\t\t\t\t***ARRIVEDERCI***\n\n");
        }

    }
system ("pause");
return (0);
}
