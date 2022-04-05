#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    char adsoyad[100],ders[100];
    int vize1,vize2,finalnotu;
};

int main()
{
    int N,ort;
    printf("Lutfen ogrenci sayisini giriniz :");
    scanf("%d",&N);

    struct ogrenci bilgi[N];

    FILE *dosya;
    dosya=fopen("degerlendirme.txt","a");

    for(int i=0;i<N;i++)
    {
        fflush(stdin);
        printf("Ogrenci ad :");
        scanf("%s",&bilgi[i].adsoyad);
        printf("Ogrenci 1. vize :");
        scanf("%d",&bilgi[i].vize1);
        printf("Ogrenci 2. vize :");
        scanf("%d",&bilgi[i].vize2);
        printf("Ogrenci final notu :");
        scanf("%d",&bilgi[i].finalnotu);
        ort=(float)bilgi[i].vize1*0.2+(float)bilgi[i].vize2*0.2+(float)bilgi[i].finalnotu*0.6;
        fprintf(dosya,"ogrenci ad:%s\t| 1.vize not :%d \t| 2.vize not :%d \t|final not :%d \t| ort :%d",bilgi[i].adsoyad,bilgi[i].vize1,bilgi[i].vize2,bilgi[i].finalnotu,ort);
        putc('\n',dosya);
    }
    fclose(dosya);
}
