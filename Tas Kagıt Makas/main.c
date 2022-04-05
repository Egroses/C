#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi1[10],i,j=0,tek=0,cift=0,dizi2[10],ayrac=0;

    printf("Hos geldiniz, bu programin amaci tek ve cift sayilar detaylarini cikti olarak vermektir.");
    srand(time(0));


    printf("\n\nDizinin ilk hali ;\n\n");

    for(i=0;i<10;i++)
    {
        dizi1[i]=rand()%20+1;

        if(dizi1[i]%2==1)
            tek++;
        else if(dizi1[i]%2==0)
            cift++;

        printf(" %d ",dizi1[i]);
    }

    printf("\n");
    while(ayrac<120)
    {
        printf("_");
        ayrac++;
    }


    for(i=0;i<10;i++)
    {

        if(dizi1[i]%2==1)
        {
            dizi2[j]=dizi1[i];
            j++;
        }
    }

    for(i=0;i<10;i++)
    {
        if(dizi1[i]%2==0)
        {
            dizi2[j]=dizi1[i];
            j++;
        }
    }

    printf("\n\n\n");



    printf("Dizinin Son Hali;\n\n");
    for(i=0;i<tek;i++)
    {
        printf(" %d ",dizi2[i]);
    }

    printf("  |||  ");

    for(i=i;i<10;i++)
    {
        printf(" %d ",dizi2[i]);
    }
    printf("\n\nTek sayi adedi : %d , Cift sayi adedi : %d\n\n",tek,cift);

    printf("\n");
    ayrac = 0;
    while(ayrac<120)
    {
        printf("_");
        ayrac++;
    }

    printf("\n\nBizi tercih ettiginiz icin iyi gunler diler tesekkur ederiz.");
    printf("\n\n\n-Emirhan Gul\n\n\n\n");

}
