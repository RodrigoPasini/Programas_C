#include<stdio.h>
#include<stdlib.h>

int main()
{
    float salario, trimestre, semestre, meses9, anual, total;
    printf ("Informe o valor do salario do trabalhador: r$ \n");
    scanf ("%f", &salario);
    trimestre = (salario+(salario*0.12));
    printf ("O valor do salario corrigido apos 3 meses eh = r$ %.2f\n", trimestre);
    semestre = (trimestre+(trimestre*0.12));
    printf ("O valor do salario corrigido apos 6 meses eh = r$ %.2f\n", semestre);
    meses9 = (semestre+(semestre*0.12));
    printf ("O valor do salario corrigido apos 9 meses eh = r$ %.2f\n", meses9);
    anual = (meses9+(meses9*0.12));
    printf ("O valor do salario corrigido apos 12 meses eh = r$ %.2f\n", anual);
    total= ((((salario*2)+(salario+(salario*0.12))))+ ((trimestre*2)+(trimestre+(trimestre*0.12)))+((semestre*2)+(semestre+(semestre*0.12)))+((meses9*2)+(meses9+(meses9*0.12))));
    printf ("O valor total de salario recebido eh = r$ %.2f\n", total);
    system ("pause");
    return (0);
    }
