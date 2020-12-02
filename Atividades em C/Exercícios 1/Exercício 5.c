#include<stdio.h>
#include<stdlib.h>

int main()
{
    float s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, total, media; //s+numero é a determinação para o dado do salário
    printf ("Digite o valor do primeiro salario: r$\n");
    scanf ("%f", &s1);
    printf ("Digite o valor do segundo salario: r$\n");
    scanf ("%f", &s2);
    printf ("Digite o valor do terceiro salario: r$\n");
    scanf ("%f", &s3);
    printf ("Digite o valor do quarto salario: r$\n");
    scanf ("%f", &s4);
    printf ("Digite o valor do quinto salario: r$\n");
    scanf ("%f", &s5);
    printf ("Digite o valor do sexto salario: r$\n");
    scanf ("%f", &s6);
    printf ("Digite o valor do setimo salario: r$\n");
    scanf ("%f", &s7);
    printf ("Digite o valor do oitavo salario: r$\n");
    scanf ("%f", &s8);
    printf ("Digite o valor do nono salario: r$\n");
    scanf ("%f", &s9);
    printf ("Digite o valor do decimo salario: r$\n");
    scanf ("%f", &s10);
    printf ("Digite o valor do decimo_primeiro salario: r$\n");
    scanf ("%f", &s11);
    printf ("Digite o valor do decimo_segundo salario: r$\n");
    scanf ("%f", &s12);
    total = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12;
    printf ("O total de salario recebido pelo empregado durante o periodo de um ano eh = r$ %.2f\n", total);
    media = total / 12;
    printf ("A media de salario recebido pelo empregado durante o periodo de um ano eh = r$ %.2f\n", media);
    system ("pause");
    return (0);
}
