#include<stdio.h>
#include<stdlib.h>

int main()
{
    float ponto1, ponto2, ponto3, media, soma;
    printf ("Digite os pontos do atleta1: \n");
    scanf ("%f", &ponto1);
    printf ("Digite os pontos do atleta2: \n");
    scanf ("%f", &ponto2);
    printf ("Digite os pontos do atleta3: \n");
    scanf ("%f", &ponto3);
    if (ponto1<ponto2 && ponto1<ponto3 && ponto2<ponto3){
        printf ("%.f,%.f,%.f \n", ponto1, ponto2, ponto3);
        }else{
    if (ponto1<ponto2 && ponto1<ponto3 && ponto3<ponto2){
        printf ("%.f,%.f,%.f \n", ponto1, ponto3, ponto2);
        }else{
     if (ponto2<ponto1 && ponto2<ponto3 && ponto1<ponto3){
        printf ("%.f,%.f,%.f \n", ponto2, ponto1, ponto3);
        }else{
    if (ponto2<ponto1 && ponto2<ponto3 && ponto3<ponto1){
        printf ("%.f,%.f,%.f \n", ponto2, ponto3, ponto1);
        }else{
     if (ponto3<ponto1 && ponto3<ponto2 && ponto2<ponto1){
        printf ("%.f,%.f,%.f \n", ponto3, ponto2, ponto1);
        }else{
        printf ("%.f,%.f,%.f \n", ponto3, ponto1, ponto2);
    }
        }
        }
        }
        }
    media=(ponto1+ponto2+ponto3)/3;
    soma=ponto1+ponto2+ponto3;
    if (soma>=100) {
            printf ("A media eh = %.2f\n", media);
    }else{
    printf ("Equipe desclassificada. \n");
    }
    system ("pause");
    return (0);
}
