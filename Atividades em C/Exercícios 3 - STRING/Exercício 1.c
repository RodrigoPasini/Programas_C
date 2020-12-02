#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"");
    char str1 [10], str2 [30];
    printf ("Digite o seu nome: ");
    scanf ("%s", &str1);
    printf ("Digite o seu sobrenome: ");
    scanf ("%s", &str2);

    printf ("\n\nO seu nome completo é: %s %s\n\n", str1, str2);

    system ("pause");
    return (0);
}
