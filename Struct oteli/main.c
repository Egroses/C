#include <stdio.h>
#include <stdlib.h>
#define N 5

struct musteri{
    char ad[20];
    char soyad[20];
    int kahvalti;
    int aksam;
    int otel;
    int arkadas;
};


void ikiyildiz(struct musteri liste[N])
{
    printf("IKI YILDIZLI OTELDE KALANLARIN LISTESI\n___________________________________________\n");
    for(int i=0;i<N;i++)
    {
        if(liste[i].otel==2)
        {
            printf("%s %s\n",liste[i].ad,liste[i].soyad);
        }
    }
}

void kahvealti(struct musteri liste[N])
{
    int a=0;
    printf("\n\nKAHVALTI YAPANLARIN SAYISI\n___________________________________________\n");
    for(int i=0;i<N;i++)
    {
        if(liste[i].kahvalti==1)
        {
            a++;
        }
    }
    printf("%d",a);
}

void fiyat(struct musteri liste[N])
{
    printf("\n\nFIYAT LISTESI\n___________________________________________\n");

    for(int i=0;i<N;i++)
    {
        int tl=0;
        if(liste[i].kahvalti==1)
        {
            tl=tl+15;
        }
        if(liste[i].aksam==1)
        {
            tl=tl+35;
        }
        if(liste[i].otel==2)
        {
            if(liste[i].arkadas==1)
                tl=tl*2;
            tl+=75;

        }
        else if(liste[i].otel==3)
        {
            if(liste[i].arkadas==1)
                tl=tl*2;
            tl+=100;
        }
        printf("Musterimiz %s %s, odeyeceginiz tutar : %d tl\n\n",liste[i].ad,liste[i].soyad,tl);
    }
}
void ucyildiz(struct musteri liste[N])
{
    printf("\n\nUC YILDIZLI OTEL ISTATISTIKLERI\n___________________________________________\n");
    int sayi=0;
    int zengin=0;
    int ucpara=0;
    for(int i=0;i<N;i++)
    {
        if(liste[i].otel==3)
        {
            zengin++;

            printf("Musteri %d-)%s %s\n",zengin,liste[i].ad,liste[i].soyad);



            if(liste[i].kahvalti==1)
            {
                sayi+=1;
                ucpara=ucpara+15;
            }
            if(liste[i].aksam==1)
            {
                ucpara+=35;
            }
            if(liste[i].otel==2)
            {
                if(liste[i].arkadas==1)
                    ucpara=ucpara*2;
                ucpara+=75;

            }
            else if(liste[i].otel==3)
            {
                if(liste[i].arkadas==1)
                    ucpara=ucpara*2;
                ucpara+=100;
            }
        }
    }
    printf("\nKahvalti yapanlarin sayisi : %d",sayi);
    printf("\nOdenecek toplam tutar : %d",ucpara);
}

int main()
{
    struct musteri liste[N]={{"can","boz",1,0,2,1},{"ali","bal",0,1,2,0},{"mustafa","surgulu",1,1,3,1},{"cimri","pasa",0,0,0,0},{"bulent","gursoy",0,1,3,0}};
    ikiyildiz(liste);
    kahvealti(liste);
    fiyat(liste);
    ucyildiz(liste);
    printf("\n\n");
}
