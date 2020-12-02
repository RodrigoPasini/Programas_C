#include<stdio.h>
#include<stdlib.h>

int main()
{
    char nome[20];
    float nota1, nota2, media;
    printf ("Informe o nome do aluno: \n");
    scanf ("%s", &nome);
    printf ("Informe o valor da nota da prova 1: \n");
    scanf ("%f", &nota1);
    printf ("Informe o valor da nota da prova 2: \n");
    scanf ("%f", &nota2);
    media=(nota1+nota2)/2;
    printf ("A media das nota do aluno foi: %.2f\n", media);
    if (media>=7){
        printf ("Aprovado.\n");
    }else{
    if (media<3){
        printf ("Reprovado.\n");
    }else {
        printf ("em Prova Final.\n");
    }
    }
    system ("pause");
    return (0);
}
