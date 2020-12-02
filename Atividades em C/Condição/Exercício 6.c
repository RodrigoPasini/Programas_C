#include<stdio.h>
#include<stdlib.h>

int main()
{
    float salario_bruto, valor_prestacao;
    printf ("Digite o valor do salario bruto do servidor: r$\n");
    scanf ("%f", &salario_bruto);
    printf ("Digite o valor que o servidor requer para a prestacao: r$\n");
    scanf ("%f", &valor_prestacao);
    if (valor_prestacao<(salario_bruto*0.30)){
        printf ("O emprestimo pode ser concedido. \n");
    } else {
        printf ("O emprestimo nao pode ser concedido. \n");
    }
    system ("pause");
    return (0);

}
