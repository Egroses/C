#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gozlem;
    int dizi[100];
    int i,j,sinir,degisken;
    printf("Sinir?\n");
    scanf("%d",&sinir);
    srand(time(0));

    int secenek;
    printf("Testi random sayilarla yapmak icin 1 e kendi kontrolunuzde yapmak icin 2 ye basiniz.\n");
    scanf("%d",&secenek);
    if(secenek==1)
    {
        for(i=0;i<sinir;i++)
        {
            dizi[i]=rand()%100;
            printf("%3d",dizi[i]);
        }
    }

    else if(secenek==2)
    {
        for(i=0;i<sinir;i++)
        {
            scanf("%d",&dizi[i]);
        }
    }
    else
    {
        printf("1 veya 2!");
    }
    printf("\n");
    printf("\n");

    for(j=0;j<sinir-1;j++)
    {
        for(i=0;i<sinir-j-1;i++)
        {
            for(gozlem=0;gozlem<sinir;gozlem++)
            {
                printf(" %3d",dizi[gozlem]);

            }

            if(dizi[i]>dizi[i+1])
            {
            degisken=dizi[i];
            dizi[i]=dizi[i+1];
            dizi[i+1]=degisken;

            }
            printf("\n");
        }
    }
    printf("\n");
    printf("son hali;\n");
    for(i=0;i<sinir;i++)
    {
        printf("%3d",dizi[i]);
    }
}
/*

    for(j=0;j<sinir;j++)
    {
        for(i=0;i<sinir-j;i++)

            YERÝNE

    for(j=0;j<sinir-1;j++)
    {
        for(i=0;i<sinir-j-1;i++)

            DAHA ÝYÝ ÇÜNKÜ ÝLKÝNDE BÝR ÞEY YAPTIKTAN 1 KERELÝÐÝNE DURUYOR BUNUN ÝÇÝNDE ELEMAN SAYISI KADAR FAZLA ÝÞLEM YAPIYOR

            DENENDÝ DOÐRULANDI

            */
