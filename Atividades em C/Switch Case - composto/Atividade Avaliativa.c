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
    printf ("\t\t*** A CANTINA ITALIANA ONDE SUA REFEIÇÃO É NOSSA ÚNICA PREOCUPAÇÃO ***\n\n");
    printf ("\tMENU INICIAL\n\n");
    printf ("\n1 - SEGUNDA-FEIRA\n");
    printf ("2 - TERÇA-FEIRA\n");
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
        printf("\t\t***SEGUNDA-FEIRA***\n\n");//Somente opções de massa
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - GNOCCHI BRANCO AO MOLHO GORGONZOLA\n");
        printf("2 - POLENTA AO MOLHO QUATRO FORMAGGIO\n");
        printf("3 - TAGLIARINI AO MOLHO FUNGHI\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OPÇÃO INVÁLIDA!\n"); // Adicionei esta opção no caso de não ser digitado um dos números sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a opção desejada: ");
        scanf ("%d", &massa);
        system ("cls");

        if (massa==1)
        {
            printf ("\n\nO PRATO SELECIONADO É 'GNOCCHI BRANCO AO MOLHO GORGONZOLA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, Carne de Frango, tiras de pêra e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }
        if (massa==2)
        {
            printf ("\n\nO PRATO SELECIONADO É 'POLENTA AO MOLHO QUATRO FORMAGGIO'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, filé de tilápia, batata frita e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }
        if (massa==3)
        {
            printf ("\n\nO PRATO SELECIONADO É 'TAGLIARINI AO MOLHO FUNGHI'\n\n");
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
            printf("Opção inválida!\n");
            system ("pause");
            system ("cls");
            goto segunda;
        }

    case 2:

        terca:
        printf("\t\t***TERÇA-FEIRA***\n\n");//Somente opções de carne
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - PEITO DE FRANGO GRELHADO AO CATUPIRY\n");
        printf("2 - FILET GRELHADO AO MOLHO MADEIRA\n");
        printf("3 - FILET DE LINGUADO A DORE AO MOLHO DE CAMARÃO\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OPÇÃO INVÁLIDA!"); // Adicionei esta opção no caso de não ser digitado um dos números sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a opção desejada: ");
        scanf ("%d", &carne);
        system ("cls");

        if (carne==1)
        {
            printf ("\n\nO PRATO SELECIONADO É 'PEITO DE FRANGO GRELHADO AO CATUPIRY'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, Arroz, Batata Frita e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (carne==2)
        {
            printf ("\n\nO PRATO SELECIONADO É 'FILET GRELHADO AO MOLHO MADEIRA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, Arroz, Batata Frita, fettuccini ala creme e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (carne==3)
        {
            printf ("\n\nO PRATO SELECIONADO É 'FILET DE LINGUADO A DORE AO MOLHO DE CAMARÃO'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Salada, Arroz, purê de batata e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (carne==4)
        {
            goto inicio;
        }

        else
        {
            printf("Opção inválida!\n");
            system ("pause");
            system ("cls");
            goto terca;
        }

    case 3:

        quarta:
        printf("\t\t***QUARTA-FEIRA***\n\n");//Somente opções de calzone
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - CALZONE ESPECIAL\n");
        printf("2 - CALZONE DA CASA\n");
        printf("3 - CALZONE MAMA MIA\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OPÇÃO INVÁLIDA!"); // Adicionei esta opção no caso de não ser digitado um dos números sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a opção desejada: ");
        scanf ("%d", &calzone);
        system ("cls");

        if (calzone==1)
        {
            printf ("\n\nO PRATO SELECIONADO É 'CALZONE ESPECIAL'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Ricota, Presunto, Muzzarela, Atum, Ovos e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (calzone==2)
        {
            printf ("\n\nO PRATO SELECIONADO É 'CALZONE DA CASA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Ricota, Presunto, Muzzarela, Provolone, Ervilha, Milho e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (calzone==3)
        {
            printf ("\n\nO PRATO SELECIONADO É 'CALZONE MAMMA MIA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela, Gorgonzola, tiras de pêra e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (calzone==4)
        {
            goto inicio;
        }

        else
        {
            printf("Opção inválida!\n");
            system ("pause");
            system ("cls");
            goto quarta;
        }

    case 4:

        quinta:
        printf("\t\t***QUINTA-FEIRA***\n\n");//Somente opções de lasagna
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - LASAGNA AL SUGO\n");
        printf("2 - LASAGNA À ROMANESCA\n");
        printf("3 - LASAGNA AL QUATTRO FORMAGGI\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OPÇÃO INVÁLIDA!"); // Adicionei esta opção no caso de não ser digitado um dos números sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a opção desejada: ");
        scanf ("%d", &lasagna);
        system ("cls");

        if (lasagna==1)
        {
            printf ("\n\nO PRATO SELECIONADO É 'LASAGNA AL SUGO'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Tomate, Carne, Cheiro Verde, Alho e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (lasagna==2)
        {
            printf ("\n\nO PRATO SELECIONADO É 'LASAGNA À ROMANESCA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Creme de Leite, Manteiga, Champignons, Presunto, Ervilha e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (lasagna==3)
        {
            printf ("\n\nO PRATO SELECIONADO É 'LASAGNA AL QUATTRO FORMAGGI'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Creme de Leite, Catupiry, Parmesão, Gorgonzola, Provolone e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (lasagna==4)
        {
            goto inicio;
        }

        else
        {
            printf("Opção inválida!\n");
            system ("pause");
            system ("cls");
            goto quinta;
        }

    case 5:

        sexta:
        printf("\t\t***SEXTA-FEIRA***\n\n");//Somente opções de pizza
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - PIZZA DI QUATTRO FORMAGGI\n");
        printf("2 - PIZZA DI GORGONZOLA COM PÊRA\n");
        printf("3 - PIZZA DI MARGUERITA\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OPÇÃO INVÁLIDA!"); // Adicionei esta opção no caso de não ser digitado um dos números sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a opção desejada: ");
        scanf ("%d", &pizza);
        system ("cls");

        if (pizza==1)
        {
            printf ("\n\nO PRATO SELECIONADO É 'PIZZA DI QUATTRO FORMAGGI'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela di búfala, Catupiry, Parmesão, Gorgonzola, Provolone e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (pizza==2)
        {
            printf ("\n\nO PRATO SELECIONADO É 'PIZZA DI GORGONZOLA COM PÊRA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela, Gorgonzola, Tiras de Pêra e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (pizza==3)
        {
            printf ("\n\nO PRATO SELECIONADO É 'PIZZA DI MARGUERITA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela, Tomate, Rúcula e vinho rose\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (pizza==4)
        {
            goto inicio;
        }

        else
        {
            printf("Opção inválida!\n");
            system ("pause");
            system ("cls");
            goto sexta;
        }

    case 6:

        sabado:
        printf("\t\t***SÁBADO***\n\n");//Somente opções de risotos
        printf("\t\t PRATOS DO DIA \n\n");
        printf("1 - RISOTO CARCIOFFI\n");
        printf("2 - RISOTO ELEGANTE\n");
        printf("3 - RISOTO MARGUERITA\n");
        printf("4 - ***VOLTAR AO MENU PRINCIPAL***\n");
        printf("5 - OPÇÃO INVÁLIDA!"); // Adicionei esta opção no caso de não ser digitado um dos números sugeridos, a pessoa pode voltar para o menu do dia
        printf ("\nInforme a opção desejada: ");
        scanf ("%d", &risoto);
        system ("cls");

        if (risoto==1)
        {
            printf ("\n\nO PRATO SELECIONADO É 'RISOTO CARCIOFFI'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Queijo, deliciosos corações de alcachofra e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (risoto==2)
        {
            printf ("\n\nO PRATO SELECIONADO É 'RISOTO ELEGANTE'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Parma, Rúcula, Parmesão e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (risoto==3)
        {
            printf ("\n\nO PRATO SELECIONADO É 'RISOTO MARGUERITA'\n\n");
            printf (" * Complemento:\n\n");
            printf (" - Muzzarela di búfala, tomate seco, Rúcula e vinho branco\n\n");
            printf (" - Tempo de Preparo: 40 minutos\n\n");
            break;
        }

        if (risoto==4)
        {
            goto inicio;
        }

        else
        {
            printf("Opção inválida!\n");
            system ("pause");
            system("cls");
            goto sabado;
        }

    default:
        {
        printf("\t\t\t***VOCÊ ESCOLHEU SAIR DO SISTEMA***\n\n");
        printf("\t\t***ESPERAMOS QUE TENHA GOSTADO DOS NOSSOS SERVIÇOS***\n\n");
        printf("\t\t\t\t***ARRIVEDERCI***\n\n");
        }

    }
system ("pause");
return (0);
}
