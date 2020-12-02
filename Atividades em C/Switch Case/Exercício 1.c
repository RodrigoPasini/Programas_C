#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"");
    int valor;
    printf("***BEM-VINDO A PIZZARIA DO RODRIGO***\n");
    printf ("***Escolha um dos sabores abaixo e experimente o melhor da pizza***\n");
    printf("1 - QUATRO QUEIJOS\n");
    printf ("2 - PORTUGUESA\n");
    printf ("3 - MARGUERITA\n");
    printf ("4 - FRANGO COM CATUPIRY\n");
    printf("5 - GORGONZOLA COM P�RA\n");
    printf("6 - CALABRESA\n");
    printf ("7 - MILHO\n");
    printf ("8 - PIZZA DOCE\n");
    printf ("N�o possu�mos outras escolhas. Pedimos desculpas pelo transtorno e informamos que estamos trabalhando em novos sabores para melhor atend�-los.\n");

    printf("Fa�a agora a sua escolha:\n");
    scanf ("%d", &valor);
    system("cls");
    switch (valor)
    {
        case 1:
        printf("QUATRO QUEIJOS - cont�m muzzarela, parmes�o, catupiry e cheddar.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refei��o e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 2:
        printf("PORTUGUESA - cont�m muzzarela, presunto, or�gano, cebola e ovo.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refei��o e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 3:
        printf("MARQUERITA - 'A PIZZA DA BANDEIRA DA IT�LIA' cont�m muzzarela, tomate e r�cula.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refei��o e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 4:
        printf("FRANGO COM CATUPIRY - cont�m muzzarela, frango desfiado, or�gano, molho de tomate, e catupiry.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refei��o e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 5:
        printf("GORGONZOLA COM P�RA - 'A PIZZA DA REGI�O DE PIEMONTE, NO NORTE DA IT�LIA' cont�m muzzarela ralada, requeij�o, gorgonzola e fatias de p�ra.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refei��o e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 6:
        printf("CALABRESA - cont�m muzzarela, presunto, or�gano, cebola e ovo.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refei��o e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 7:
        printf("MILHO - cont�m muzzarela, milho e or�gano.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refei��o e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 8:
        printf("PIZZA DOCE - cont�m fatias de morango, chocolate preto, chocolate branco e borda recheada de brigadeiro.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refei��o e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        default:
        printf("N�o possu�mos outras escolhas. Pedimos desculpas pelo transtorno e informamos que estamos trabalhando em novos sabores para melhor atend�-los.\n");
        printf ("Se os sabores informados n�o foram a op��o de sua escolha, pedimos que entre em contato por telefone para dar sua sugest�o.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

    }
    return (0);
}
