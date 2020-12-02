#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    char nome[20];
    float nota1, nota2, media_ex;
    printf ("Informe o nome do aluno: \n");
    scanf ("%s", &nome);
    printf ("Digite a primeira nota do aluno: \n");
    scanf ("%f", &nota1);
    printf ("Digite a segunda nota do aluno: \n");
    scanf ("%f", &nota2);
    media_ex=(nota1+nota2)/2;
    printf ("A media das notas do aluno eh = %.2f\n", media_ex);
    if (media_ex>=90)
    {
        printf ("Aluno APROVADO com media conceito A.\n");
    }
    else
    {
        if (media_ex>=75 && media_ex<90)
        {
            printf ("Aluno APROVADO com media conceito B.\n");
        }
        else
        {
            if (media_ex>=60 && media_ex<75)
            {
                printf ("Aluno APROVADO com media conceito C.\n");
            }
            else
            {
                if (media_ex>=40 && media_ex<60)
                {
                    printf ("Aluno REPROVADO com media conceito D.\n");
                }
                else
                {
                    printf ("Aluno REPROVADO com media conceito E.\n");
                }
            }
        }
    }
system ("pause");
return (0);
}
