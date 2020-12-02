#include<stdio.h>
#include<stdlib.h>

int main()
{
    int idade;
    printf ("Digite a sua idade: \n");
    scanf ("%d", &idade);
    if (idade>=18 && idade<=65){
        printf ("Eh maior de idade.\n");
    } else{
    if (idade<18){
        printf ("Eh menor de idade.\n");
    } else {
        printf ("Eh maior de 65 anos.\n");
    }
    }
    system ("pause");
    return (0);
}
