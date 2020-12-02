#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float prest_venc, taxa_period, atraso, valor_com_juros;
    printf ("Informe o valor da prestacao vencida: r$\n");
    scanf ("%f", &prest_venc);
    printf ("O percentual da taxa de juros eh de: \n");
    scanf ("%f", &taxa_period);
    printf ("Informe por quantos meses estah atrasado o pagamento: \n");
    scanf ("%f", &atraso);
    printf ("O valor da prestacao atrasada eh: %.2f\n", prest_venc);
    printf ("A taxa de juros que serah cobrada eh de: %.f %\n", taxa_period);
    printf ("O numero de meses de atraso eh: %.f\n", atraso);
    valor_com_juros= (prest_venc + ((prest_venc*(taxa_period/100))*atraso));
    printf ("O valor da prestacao acrescido de juros eh: r$ %.2f\n", valor_com_juros);
    system("pause");
    return (0);
}
