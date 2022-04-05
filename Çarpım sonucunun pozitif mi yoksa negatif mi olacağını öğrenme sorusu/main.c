#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int c;
        int d;


        printf("Carpim sonucunun negatif veya pozitif olacagini ogrenmek icin iki sayi giriniz.\n");
        scanf("%d %d",&a,&b);

        if((a<0)&&(b>0))
        {
            printf("Sonucu negatif sayidir.");
        }
        else if((a>0)&&(b<0))
        {
            printf("Sonucu negatif sayidir.");
        }
        else if((a>0)&&(b>0))
        {
            printf("Sonucu pozitif sayidir.");
        }
        else if((a<0)&&(b<0))
        {
            printf("Sonucu pozitif sayidir.");
        }
        else if((a<0)&&(b==0))
        {
            printf("Sonucu negatif veya pozitif sayi deðildir,sifirdir.");
        }
        else if((a==0)&&(b>0))
        {
            printf("Sonucu negatif veya pozitif sayi deðildir,sifirdir.");
        }
        else if((a==0)&&(b==0))
        {
            printf("Sonucu negatif veya pozitif sayi deðildir,sifirdir.");
        }

}
