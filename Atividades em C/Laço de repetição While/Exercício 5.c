#include<stdio.h>
#include<stdlib.h>

int main (void)
{
     int maior, segundo_maior, num, count=3;
        printf("Digite um numero:");
        scanf("%d", &maior);
        printf("Digite um numero:");
        scanf("%d", &num);
        if(maior > num)
            segundo_maior = num;
        else
        {
            segundo_maior = maior;
            maior = num;
        }
        while (count <= 10)
        {
            printf("Digite um numero:");
            scanf("%d", &num);
            if(num > maior)
            {
                segundo_maior = maior;
                maior = num;
            }
            else
                if(num > segundo_maior)
                    segundo_maior = num;
            count++;
        }

        printf("Maior: %d\n", maior);
        printf("Segundo maior: %d\n", segundo_maior);
system ("pause");
return (0);
}
