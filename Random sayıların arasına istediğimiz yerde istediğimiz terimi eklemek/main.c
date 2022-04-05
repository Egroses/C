#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void voi(int dizi[],int terim,int sira,int sayi)
{
    int i,degisken,gecici,son;
    for(i=terim-1;i>=sira-1;i--)
    {
        dizi[i+1]=dizi[i];
        if(dizi[sira-1]==dizi[i])
        {
            dizi[i]=sayi;
        }
    }
}
int main()
{
    int dizi[100];
    int terim;
    int sira;
    int sayi;
    int degisken;

    printf("Diziniz icin istediginiz terim sayisi giriniz;\n");
    scanf("%d",&terim);
    srand(time(0));
    for(degisken=0;degisken<terim;degisken++)
    {
        dizi[degisken]=rand()%100;
        printf("%4d",dizi[degisken]);
    }
    printf("\n");
    printf("Diziye eklemek istediginiz terimin sirasini giriniz;\n");
    scanf("%d",&sira);
    printf("\n");
    printf("Diziye eklemek istediginiz terimi giriniz;\n");
    scanf("%d",&sayi);
    voi(dizi,degisken,sira,sayi);
    printf("Yeni diziniz;\n");
   for(degisken=0;degisken<=terim;degisken++)
    {
        printf("%3d",dizi[degisken]);
    }
}
