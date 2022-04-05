#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ogrenci{
    char Ad[10];
    char Soyad[10];
    int no;
    int sinif;
}aramak;

int main()
{
    aramak numara;

    printf("Lutfen bir ogrenci numarasi giriniz ; ");
    scanf("%d",&numara.no);

    if(numara.no == 2019)
    {
        numara.sinif=5;
        strcpy(numara.Ad,"Can");
        strcpy(numara.Soyad,"Boz");
        printf("%s %s %d %d",numara.Ad,numara.Soyad,numara.no,numara.sinif);
    }
    else
    {
        printf("Baska ogrenci yok.");
    }
}
