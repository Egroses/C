#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct insan{
char sifre[100];
char ad[100];
char soyad[100];
char yas[100];
char maas[100];
char cinsiyet[100];
}personel;

void Sirala(personel p[],int m)
{
    int i,j;
    personel t;
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(strcmp(p[i].ad,p[j].ad)>0)
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }

}

void Listele(personel p[],int m)
{
    printf("\n\n\nPersonel Listesi ; \n\n");
    for(int i=0 ; i<m ; i++)
    {
        printf("%s | %s | %s | %s | %s | %s\n\n",p[i].ad,p[i].soyad,p[i].sifre,p[i].yas,p[i].cinsiyet,p[i].maas);
    }
}

int main()
{
    int N;
    printf("Personel sayisini belirtiniz : ");
    scanf("%d",&N);

    personel p[N];

    for(int i=0; i<N ;i++)
    {
        printf("%d. personelin bilgilerini giriniz;\nAd : ",i+1);
        scanf("%s",p[i].ad);
        printf("Soyad : ");
        scanf("%s",p[i].soyad);
        printf("Sifre : ");
        scanf("%s",p[i].sifre);
        printf("Yas : ");
        scanf("%s",p[i].yas);
        printf("Cinsiyet : ");
        scanf("%s",p[i].cinsiyet);
        printf("Maas : ");
        scanf("%s",p[i].maas);
    }

    Sirala(p,N);

    Listele(p,N);
}
