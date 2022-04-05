#include <stdio.h>
#include <stdlib.h>
#define A 12

int main()
{
    int i,j,terim;
    int dizi[A][A];

    printf("Matris kac sutun olsun (n<=10)?\n");
    scanf("%d",&terim);

    if((terim<=0)||(terim>10))
    {
        terim = A;
    }

    printf("\n\nP  ");

    for(i=0;i<terim;i++)
    {
        printf("%4d",i);
    }

    printf("\nn\n\n");
    printf("---");
    for(i=0;i<terim;i++)
    {
        printf("----");
    }
    printf("\n");

    for(i=0;i<terim;i++)
    {
        dizi[i][i]=1;
        dizi[i][0]=1;

        for(j=1;j<i;j++)
        {
            dizi[i][j]=dizi[i-1][j]+dizi[i-1][j-1];
        }
    }

    for(i=0;i<terim;i++)
    {
        printf("%d--",i);
        for(j=0;j<=i;j++)
        {
            printf("%4d",dizi[i][j]);
        }
        printf("\n");
    }
}
