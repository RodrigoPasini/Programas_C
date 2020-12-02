#include<stdio.h>
#include<stdlib.h>

int main()
{
    int idade;
    printf ("Informe a idade do nadador: \n");
    scanf ("%d", &idade);
    if (idade>=5 && idade<=7){
        printf ("Categoria infantil A.\n");
    }else {
    if (idade>=8 && idade<=10){
        printf ("Categoria infantil B.\n");
    }else {
    if (idade>=11 && idade <=13){
        printf ("Categoria juvenil A.\n");
    }else{
    if (idade>=14 && idade<=17){
        printf ("Categoria juvenil B.\n");
    }else {
    if (idade>=18){
        printf ("Categoria senior.\n");
    }else{
        printf ("Para que o nandador possa participar das eliminatorias, ele necessariamente precisa ter no minimo 5 anos.\n");
    }
    }
    }
    }
    }
    system ("pause");
    return (0);
}
