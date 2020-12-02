#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"");
    int plataforma;
    printf("****BEM-VINDOS A OPÇÃO DE STREAMINGS RODRIGO****\n");
    printf ("****NOS ORGULHAMOS DE SER A MELHOR PLATAFORMA DO MERCADO****\n");
    printf ("1 - NETFLIX\n");
    printf ("2 - AMAZON PRIME VIDEO\n");
    printf ("3 - HBO GO\n");
    printf ("4 - CRACKEL\n");
    printf ("5 - TELECINE PLAY\n");
    printf ("6 - GOOGLE PLAY\n");
    printf ("7 - APPLE TV+\n");

    printf ("Escolha a opção de streaming de vídeo que deseja assistir: \n");
    scanf ("%d", &plataforma);

    switch (plataforma)
    {
        case 1:
        printf ("NETFLIX\n");
        break;

        case 2:
        printf ("AMAZON PRIME VIDEO\n");
        break;

        case 3:
        printf ("HBO GO\n");
        break;

        case 4:
        printf ("CRACKEL\n");
        break;

        case 5:
        printf ("TELECINE PLAY\n");
        break;

        case 6:
        printf ("GOOGLE PLAY\n");
        break;

        case 7:
        printf ("APPLE TV+\n");
        break;

        default:
        printf ("OPÇÃO INVÁLIDA.\n");

    }
return (0);
}
