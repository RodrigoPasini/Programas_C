#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int aluno, contador=1;
    float nota1, nota2, media;
    printf("Informe o n�mero de alunos que ser� inserido no programa:\n");
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
            printf("A m�dia do aluno � = %.2f.\n", media);
            printf ("Conceito = A.\n");
            printf ("Situa��o: APROVADO.\n");
            }
            if (media>=75 && media<90)
            {
            printf("A m�dia do aluno � = %.2f.\n", media);
            printf ("Conceito = B.\n");
            printf ("Situa��o: APROVADO.\n");
            }
            if (media>=60 && media<75)
            {
            printf("A m�dia do aluno � = %.2f.\n", media);
            printf ("Conceito = C.\n");
            printf ("Situa��o: APROVADO.\n");
            }
            if (media>=40 && media<60)
            {
            printf("A m�dia do aluno � = %.2f.\n", media);
            printf ("Conceito = D.\n");
            printf ("Situa��o: REPROVADO.\n");
            }
            if (media<40)
            {
            printf("A m�dia do aluno � = %.2f.\n", media);
            printf ("Conceito = E.\n");
            printf ("Situa��o: REPROVADO.\n");
            }
            contador++;
    }
    while (contador==aluno);
    system ("pause");
    return (0);
}
