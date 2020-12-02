#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void)
{
    setlocale(LC_ALL,"");
    int matriz[3][3],r, p, somalinha=0;
    printf ("Digite os valores da matriz: \n");
    for(r=0;r<3;r++)
    for(p=0;p<3;p++)
    {
        printf ("\nMATRIZ[%d][%d] = ", r,p);
        scanf ("%d", &matriz[r][p]);

    if (r==0)
    {
        somalinha+=matriz[r][p];
    }
    }
    printf("Soma da linha é = %d\n", somalinha);

system ("pause");
return (0);
}
