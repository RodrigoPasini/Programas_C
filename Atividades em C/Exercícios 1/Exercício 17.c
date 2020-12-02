#include<stdio.h>
#include<stdlib.h>

int main()
{
    float custo_final, custo_fabrica, icms, ipi, pis, cofins, revenda;
    printf ("Informe o valor de fabrica do veiculo: \n"); // o exercício já traz que o valor é de R$ 38.700,00
    scanf ("%f", &custo_fabrica);
    icms = custo_fabrica*0.12;
    printf ("O valor de icms inserido no veiculo eh de: r$ %.2f\n", icms);
    ipi = custo_fabrica*0.05;
    printf ("O valor de ipi inserido no veiculo eh de: r$ %.2f\n", ipi);
    pis = custo_fabrica*0.0165;
    printf ("O valor de pis inserido no veiculo eh de: r$ %.2f\n", pis);
    cofins = custo_fabrica*0.076;
    printf ("O valor de cofins inserido no veiculo eh de: r$ %.2f\n", cofins);
    revenda = custo_fabrica*0.18;
    printf ("O valor de revenda inserido no veiculo eh de: r$ %.2f\n", revenda);
    custo_final = custo_fabrica + icms + ipi + pis + cofins + revenda;
    printf ("O valor final do veiculo para ser vendido serah de: r$ %.2f\n", custo_final);
    system ("pause");
    return (0);
}
