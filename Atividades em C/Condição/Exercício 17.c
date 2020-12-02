#include<stdio.h>
#include<stdlib.h>

int main()
{
    char nome[20];
    int idade;
    printf ("Digite o nome da pessoa: \n");
    scanf ("%s", &nome);
    printf ("Informe a idade da pessoa: \n");
    scanf ("%d", &idade);
    if (idade<=10){
        printf ("A pessoa se chama: %s\n", nome);
        printf ("E o valor que serah pago no plano eh de r$ 30,00\n");
    }else{
    if (idade>10 && idade<=29){
        printf ("A pessoa se chama: %s\n", nome);
        printf ("E o valor que serah pago no plano eh de r$ 60,00\n");
    }else{
    if (idade>29 && idade<=45){
        printf ("A pessoa se chama: %s\n", nome);
        printf ("E o valor que serah pago no plano eh de r$ 120,00\n");
    }else{
    if (idade>45 && idade<=59){
        printf ("A pessoa se chama: %s\n", nome);
        printf ("E o valor que serah pago no plano eh de r$ 150,00\n");
    }else{
    if (idade>59 && idade<=65){
        printf ("A pessoa se chama: %s\n", nome);
        printf ("E o valor que serah pago no plano eh de r$ 250,00\n");
    }else{
        printf ("A pessoa se chama: %s\n", nome);
        printf ("E o valor que serah pago no plano eh de r$ 400,00\n");
    }
    }
    }
    }
    }
    system ("pause");
    return (0);
}
