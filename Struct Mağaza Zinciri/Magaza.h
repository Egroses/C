#ifndef MAGAZA_H
#define MAGAZA_H

#include <stdio.h>
#include <stdlib.h>
#define isci 3
#define N 1
#define M 5

struct ticaret{
    char urun[100];
    int kod;
    int fiyat;
};

struct calisan{
    char ad[100],soyad[100];
    int yas;
};

struct magaza{
    char ad[100],sokak[100],mahalle[100],numara[100];
    int satis;
    struct calisan eleman[isci];
    struct ticaret product[M];
};

void doldur_urun(struct ticaret *mal)
{
    printf("Urunun adi :");
    scanf("%s",&mal->urun);
    printf("Urunun kodu :");
    scanf("%d",&mal->kod);
    printf("Urunun fiyati :");
    scanf("%d",&mal->fiyat);
}

void doldur_isci(struct calisan *amale)
{
    printf("Elemanin adi :");
    scanf("%s",&amale->ad);
    printf("Elemanin soyadi :");
    scanf("%s",&amale->soyad);
    printf("Elemanin yasi :");
    scanf("%d",&amale->yas);
}

void doldur_magaza(struct magaza *avm)
{
    printf("Magazanin adi :");
    scanf("%s",&avm->ad);
    printf("Magazanin bulundugu mahalle :");
    scanf("%s",&avm->mahalle);
    printf("Magazanin bulundugu sokak :");
    scanf("%s",&avm->sokak);
    printf("Magazanin numarasi :");
    scanf("%s",&avm->numara);
    printf("Magazanin satis rakami :");
    scanf("%d",&avm->satis);

    for(int i=0;i<isci;i++)
    {
        printf("\nElaman %d-)\n",i+1);
        doldur_isci(&avm->eleman[i]);
        printf("\n");
    }

    for(int i=0;i<M;i++)
    {
        printf("\nUrun %d-)\n",i+1);
        doldur_urun(&avm->product[i]);
        printf("\n");
    }
}

void yasliyi_bul(struct calisan yasli[isci])
{
    struct calisan eleman2;
    eleman2.yas=0;

    for(int i=0;i<isci;i++)
    {
         if(yasli[i].yas>eleman2.yas)
            eleman2=yasli[i];
    }
    printf("\n_______________________________\n");
    printf("En yasli calisanin adi :%s\nEn yasli calisanin soyadi :%s\nEn yasli calisanin yasi :%d\n",eleman2.ad,eleman2.soyad,eleman2.yas);

}

void bastir_isci(struct calisan *n)
{
    printf("\n_______________________________\n");

    printf("Elemanin adi :%s\n",n->ad);

    printf("Elemanin soyadi :%s\n",n->soyad);

    printf("Elemanin yasi :%d\n",n->yas);

}

void bastir_urun(struct ticaret *u)
{
    printf("\n_______________________________\n");
    printf("Urunun adi :%s\n",u->urun);
    printf("Urunun kodu :%d\n",u->kod);
    printf("Urunun fiyati :%d\n\n",u->fiyat);
}

void ortalama_fiyat(struct ticaret t[M])
{
    float toplam=0;
    float genel=0;
    for(int i=0;i<M;i++)
    {
        toplam=toplam + t[i].fiyat;
    }
    genel=toplam/5;
    printf("\n_______________________________\n");
    printf("Magazadaki ortalama urun fiyati : %.2f",genel);
    printf("\n_______________________________\n\n\n\n");
}

void bastir_magaza(struct magaza *m)
{

    printf("Magazanin adi :%s\n",m->ad);

    printf("Magazanin bulundugu mahalle :%s\n",m->mahalle);

    printf("Magazanin bulundugu sokak :%s\n",m->sokak);

    printf("Magazanin numarasi :%s\n",m->numara);

    printf("Magazanin satis rakami :%d\n",m->satis);

    for(int i=0;i<isci;i++)
        bastir_isci(&m->eleman[i]);

    for(int i=0;i<M;i++)
        bastir_urun(&m->product[i]);

    yasliyi_bul(m->eleman);
    ortalama_fiyat(m->product);

}

void rakam_satis(struct magaza s[N])
{
    struct magaza avm2;
    avm2.satis=0;
    printf("\n_______________________________\n");
    for(int i=0;i<N;i++)
    {
        if(s[i].satis>avm2.satis)
            avm2=s[i];
    }
    printf("En fazla satis : %s",avm2.ad);

}

#endif // Magaza
