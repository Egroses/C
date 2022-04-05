#include <stdio.h>
#include <stdlib.h>
#define N 2

struct yiyecek
{
    char ad[100];
    int agirlik;
    int form;
    int miktar;
    int fiyat;
};

struct sepet
{
    struct yiyecek meyve[N];
};

void tanimla_meyve(struct yiyecek *n)
{
    for(int i=0;i<N;i++)
    {
        printf("Meyvenin adi :");
        scanf("%s",&n[i].ad);
        printf("Meyvenin agirligi :");
        scanf("%d",&n[i].agirlik);
        printf("Meyvenin formu(yuvarlak=0,kare=1,dikdortgen=2) :");
        scanf("%d",&n[i].form);
        printf("Meyvenin miktari :");
        scanf("%d",&n[i].miktar);
        printf("Meyvenin fiyati :");
        scanf("%d",&n[i].fiyat);
        printf("\n");
    }
}

void tanimla_sepet(struct sepet *m)
{
    tanimla_meyve(&m->meyve[N]);

}

void bul_fiyat(struct yiyecek *k)
{
    int tutar=0;
    int kontrol;
    int kontrol2;

    for(int i=0;i<N;i++)
    {
        kontrol=k[i].fiyat;
        if(k[i].form==0)
        {
            kontrol=k[i].fiyat*2;
            kontrol2=kontrol;
        }

        if(k[i].agirlik>200)
        {
            kontrol=3+kontrol;
            kontrol2=kontrol;
        }
        kontrol=k[i].miktar*kontrol;
        kontrol2=kontrol;
        tutar=tutar+kontrol2;
        kontrol=0;
    }
    printf("\n_______________________________\n");
    printf("Toplam tutar :%d",tutar);
}

void bastir_meyve(struct yiyecek *b)
{
    for(int i=0;i<N;i++)
    {
        printf("\n_______________________________\n");
        printf("Meyvenin adi :%s\n",b[i].ad);

        printf("Meyvenin agirligi %d:\n",b[i].agirlik);

        printf("Meyvenin formu(yuvarlak=0,kare=1,dikdortgen=2) :%d\n",b[i].form);

        printf("Meyvenin miktari :%d\n",b[i].miktar);

        printf("Meyvenin fiyati :%d\n",b[i].fiyat);

    }
}

int main()
{
    struct sepet sebze;
    tanimla_sepet(&sebze);
    bastir_meyve(&sebze.meyve[N]);
    bul_fiyat(&sebze.meyve[N]);
}
