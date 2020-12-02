#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int aluno, contador=1;
    float nota1, nota2, media;
    printf("Informe o número de alunos que será inserido no programa:\n");
    scanf ("%d", &aluno);
    do
    {
        printf ("Digite a primeira nota:\n");
        scanf ("%f", &nota1);
        printf ("Digite a segunda nota:\n");
        scanf ("%f", &nota2);
        media=(nota1+nota2)/2;
        if (media>=90)
            {
            printf("A média do aluno é = %.2f.\n", media);
            printf ("Conceito = A.\n");
            printf ("Situação: APROVADO.\n");
            }
            if (media>=75 && media<90)
            {
            printf("A média do aluno é = %.2f.\n", media);
            printf ("Conceito = B.\n");
            printf ("Situação: APROVADO.\n");
            }
            if (media>=60 && media<75)
            {
            printf("A média do aluno é = %.2f.\n", media);
            printf ("Conceito = C.\n");
            printf ("Situação: APROVADO.\n");
            }
            if (media>=40 && media<60)
            {
            printf("A média do aluno é = %.2f.\n", media);
            printf ("Conceito = D.\n");
            printf ("Situação: REPROVADO.\n");
            }
            if (media<40)
            {
            printf("A média do aluno é = %.2f.\n", media);
            printf ("Conceito = E.\n");
            printf ("Situação: REPROVADO.\n");
            }
            contador++;
    }
    while (contador==aluno);
    system ("pause");
    return (0);
}
