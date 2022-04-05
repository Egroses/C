#include <stdio.h>
#include <stdlib.h>

int main()
{
 float a;
        float b;
        float c;
        float d;

        printf("Yapmak istediginiz islem deniz miliyleyse 1 e,kara miliyleyse 2 ye basiniz.\n");
        scanf("%f",&b);

        if(b==1)
        {
        printf("Deniz miline donusturmek istediginiz kilometreyi giriniz.\n");
        scanf("%f",&a);

        printf("%f deniz mili %f km'ye esittir",a,a*1609344/1000000 );
        }

        else if(b==2)
        {
        printf("Kara miline donusturmek istediginiz kilometreyi giriniz.\n");
        scanf("%f",&a);

        printf("%f kara mili %f km'ye esittir",a,a*1852200/1000000);
        }

        else
        {
            printf("Lütfen tekrar deneyeniz");
        }
}
