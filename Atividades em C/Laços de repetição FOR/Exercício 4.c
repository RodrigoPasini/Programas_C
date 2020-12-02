#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale (LC_ALL, "");
    int aluno, contador, nota;
    float turma, soma=0;
    printf ("Quantos alunos tem na sala? ");
    scanf ("%d", &aluno);
    for (contador=1, soma; contador<=aluno; contador++)
    {
        printf ("Informe a nota do aluno: ");
        scanf ("%d", &nota);
        soma=soma+nota;
     }

     printf ("A média da turma = %.2f\n", soma/aluno);

return (0);
}
