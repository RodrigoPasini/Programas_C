#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int aluno, contador=1;
    float nota, soma=0;
    printf ("Informe o numer do alunos: \n");
    scanf ("%d", &aluno);
    while (contador<=aluno)
    {
        printf ("Digite a nota do aluno: \n");
        scanf ("%f", &nota);
        soma=soma+nota;
        contador++;
    }
        printf ("A media da turma eh = %.2f\n", soma/aluno);
system ("pause");
return (0);
}
