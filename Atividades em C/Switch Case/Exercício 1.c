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
    printf("5 - GORGONZOLA COM PÊRA\n");
    printf("6 - CALABRESA\n");
    printf ("7 - MILHO\n");
    printf ("8 - PIZZA DOCE\n");
    printf ("Não possuímos outras escolhas. Pedimos desculpas pelo transtorno e informamos que estamos trabalhando em novos sabores para melhor atendê-los.\n");

    printf("Faça agora a sua escolha:\n");
    scanf ("%d", &valor);
    system("cls");
    switch (valor)
    {
        case 1:
        printf("QUATRO QUEIJOS - contém muzzarela, parmesão, catupiry e cheddar.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refeição e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 2:
        printf("PORTUGUESA - contém muzzarela, presunto, orégano, cebola e ovo.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refeição e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 3:
        printf("MARQUERITA - 'A PIZZA DA BANDEIRA DA ITÁLIA' contém muzzarela, tomate e rúcula.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refeição e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 4:
        printf("FRANGO COM CATUPIRY - contém muzzarela, frango desfiado, orégano, molho de tomate, e catupiry.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refeição e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 5:
        printf("GORGONZOLA COM PÊRA - 'A PIZZA DA REGIÃO DE PIEMONTE, NO NORTE DA ITÁLIA' contém muzzarela ralada, requeijão, gorgonzola e fatias de pêra.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refeição e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 6:
        printf("CALABRESA - contém muzzarela, presunto, orégano, cebola e ovo.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refeição e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 7:
        printf("MILHO - contém muzzarela, milho e orégano.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refeição e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        case 8:
        printf("PIZZA DOCE - contém fatias de morango, chocolate preto, chocolate branco e borda recheada de brigadeiro.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf("Tenha uma excelente refeição e esperamos que conte sempre com a gente.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

        default:
        printf("Não possuímos outras escolhas. Pedimos desculpas pelo transtorno e informamos que estamos trabalhando em novos sabores para melhor atendê-los.\n");
        printf ("Se os sabores informados não foram a opção de sua escolha, pedimos que entre em contato por telefone para dar sua sugestão.\n");
        printf("Obrigado por escolher a pizza do Rodrigo.\n");
        printf ("<<<<PIZZARIA DO RODRIGO, sempre preparando o melhor da pizza.>>>>\n");
        break;

    }
    return (0);
}
