#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kod,devam;
    float toplamfiyat=0;
    float fiyat;

    printf("Lutfen almak istediginiz urunun once kodunu sonra kac liralik almak istediginizi yaziniz;\n");
    printf("\n");
    printf("Urun kodlari; \n kitap=0 \n temel gida=1 \n luks=2\n");
    do
    {
        printf("\n");
        printf("Urun kodu?\n");
        scanf("%d",&kod);

        if(kod==0)
        {
            printf("Kac liralik kitap almak istiyorsunuz?\n");
            scanf("%f",&fiyat);
        }
        else if(kod==1)
        {
            printf("Kac liralik temel gida almak istiyorsunuz?\n");
            scanf("%f",&fiyat);
        }
        else if(kod==2)
        {
            printf("Kac liralik luks urun almak istiyorsunuz?\n");
            scanf("%f",&fiyat);
        }
        else
        {
            printf("Hatali kod girdiniz!\n");
            break;
        }
        switch(kod)
        {
            case 0 : fiyat+=fiyat*4/100;
            break;
            case 1 : fiyat+=fiyat*56/1000;
            break;
            case 2 : fiyat+=fiyat*196/1000;
            break;
        }
        toplamfiyat+=fiyat;
        printf("\n");
        printf("Alisverisi birakmak icin 1'e, devam etmek icin 2'ye basiniz.\n");
        scanf("%d",&devam);
        if(devam==1)
        {
            break;
        }
    }
    while((3>=kod)&&(kod>=0));

    printf("\n");
    printf("\n");
    printf("Alisveris tutariniz %f liradir.",toplamfiyat);
    printf("\n");
    printf("\n");
    printf("\n");
}
