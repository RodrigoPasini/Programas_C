#include<stdio.h>
#include<stdlib.h>

int main()
{
    float hora, dia, semana, mes, trimestre, semestre, ano;
    printf ("Insira o valor recebido pelo trabalhador por hora: r$\n");
    scanf ("%f", &hora);
    dia = hora*8; //considerei o limite de jornada diária permitido na CLT, sem considerar horas extras
    printf ("O valor recebido pelo empregado por dia eh de: r$ %.2f\n", dia);
    semana = hora*44; // considerei o limite de jornada semanal na CLT, sem considerar horas extras.
    printf ("O valor recebido pelo empregado por semana eh de: r$ %.2f\n", semana);
    mes = dia*22; // considerei a média de dias úteis
    printf ("O valor recebido pelo empregado por mes eh de: r$ %.2f\n", mes);
    trimestre = mes*3;
    printf ("O valor recebido pelo empregado por trimestre eh de: r$ %.2f\n", trimestre);
    semestre = trimestre*2;
    printf ("O valor recebido pelo empregado por semestre eh de: r$ %.2f\n", semestre);
    ano = semestre*2;
    printf ("O valor recebido pelo empregado por ano eh de: r$ %.2f\n", ano);
    system ("pause");
    return (0);

}
