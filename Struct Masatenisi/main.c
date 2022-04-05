#include <stdio.h>
#include <stdlib.h>
#define N 2

struct oyuncu{
    char ad[100];
    char soyad[100];
    char yas[100];
};

struct ekip{
    char ekip_adi[100];
    struct oyuncu oyuncu1;
    struct oyuncu oyuncu2;
};


void oyuncu_olustur(struct oyuncu *o1,struct oyuncu *o2)
{
    printf("1. Oyuncu \nAd :");
    gets(o1->ad);
    printf("Soyad :");
    gets(o1->soyad);
    printf("Yas :");
    gets(o1->yas);

    printf("2. Oyuncu \nAd :");
    gets(o2->ad);
    printf("Soyad :");
    gets(o2->soyad);
    printf("Yas :");
    gets(o2->yas);

}

void ekibi_olustur(struct ekip *t)
{
    printf("\nEkibin adini giriniz : ");
    gets(t->ekip_adi);

    oyuncu_olustur(&t->oyuncu1,&t->oyuncu2);
}

void ekibi_bas(struct ekip basici)
{

        printf("Ekip adi :%s\n 1. Oyuncu ;\n",basici.ekip_adi);
        oyuncuyu_bas(basici.oyuncu1);
        printf("2. Oyuncu ;\n");
        oyuncuyu_bas(basici.oyuncu2);

}

void oyuncuyu_bas(struct oyuncu p)
{
    printf("Ad :%s\nSoyad :%s\nYas :%s\n",p.ad,p.soyad,p.yas);
    printf("\n");
}

int main()
{
    struct ekip team[N];
    for(int i=0;i<N;i++)
    {
        printf("\n\nEkip %d ;\n",i+1);
        ekibi_olustur(&team[i]);
    }

    for(int i=0;i<N;i++)
    {
        printf("\n\n_____________________________\nEkip %d ;\n",i+1);
        ekibi_bas(team[i]);
    }
}
