#include <stdio.h>
#include <stdlib.h>

typedef struct kisiselBilgi{
char isim[100];
char soyisim[100];
char tel[100];
char adres[100];
char postkod[100];
}defter;

int main()
{
    int n;
    printf("Liste kac kisilik olsun ?\n");
    scanf("%d",&n);

    defter iletisim[n];

    for(int i=0 ; i<n ; i++)
    {
        printf("%d. kisinin bilgilerini giriniz;\nAd : ",i+1);
        scanf("%s",&iletisim[i].isim);
        printf("Soyad : ");
        scanf("%s",&iletisim[i].soyisim);
        printf("Tel : ");
        scanf("%s",iletisim[i].tel);
        printf("Adres : ");
        scanf("%s",&iletisim[i].adres);
        printf("Posta Kodu : ");
        scanf("%s",&iletisim[i].postkod);
    }
    printf("\n\n\nListeniz ; \n\n");

    for(int i=0 ; i<n ; i++)
    {
        printf("%s | %s | %s | %s | %s\n\n",iletisim[i].isim,iletisim[i].soyisim,iletisim[i].tel,iletisim[i].adres,iletisim[i].postkod);
    }

}
