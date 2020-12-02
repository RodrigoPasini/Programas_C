#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL, "");
    int jogo;
    printf ("#####BEM-VINDOS À MELHOR OPÇÃO DE JOGOS ANTIGOS DO MUNDO#####\n");
    printf("1 - ATARI\n");
    printf("2 - PHANTON\n");
    printf("3 - MEGA DRIVE\n");
    printf("4 - MASTER SYSTEM\n");
    printf("5 - SUPER NINTENDO\n");

    printf("Informe qual é o seu jogo antigo preferido:\n");
    scanf ("%i", &jogo);

    switch (jogo)
    {
        case 1:
        printf ("ATARI\n");
        break;

        case 2:
        printf ("PHANTON\n");
        break;

        case 3:
        printf ("MEGA-DRIVE\n");
        break;

        case 4:
        printf ("MASTER-SYSTEM\n");
        break;

        case 5:
        printf ("SUPER NINTENDO\n");
        break;

        default:
        printf("Opção inválida.\n");
        printf ("Volte na tela anterior e escolha as opções de 1 a 5.\n");

    }
return (0);
}
