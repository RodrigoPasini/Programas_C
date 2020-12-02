#include<stdio.h>
#include<stdlib.h>

int main()
{
    char nome[30];
    float salariofixo, total_vendas, comissao, salario_total;
    printf ("Informe o nome do vendedor: \n");
    scanf ("%s", &nome);
    printf ("Informe o salario fixo do vendedor: r$ \n");
    scanf ("%f", &salariofixo);
    printf ("Informe o valor total de vendas: r$ \n");
    scanf ("%f", &total_vendas);
    comissao = total_vendas * 0.15;
    printf ("O valor total recebido a titulo de comissao eh = r$ %.2f \n", comissao);
    printf ("O nome do vendedor eh: %s \n", nome);
    printf ("O salario fixo do vendedor eh: r$ %.2f \n", salariofixo);
    salario_total = salariofixo + comissao;
    printf ("O salario total do vendedor no final do mes eh = r$ %.2f \n", salario_total);
    system ("pause");
    return (0);

}
