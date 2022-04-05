#include <stdio.h>
#include <stdlib.h>

int main()
{
        float a;
        float b;
        float c;
        float d;
        float f;

        printf("Odanin enini ve boyunu giriniz.\n");
        scanf("%f%f",&a,&b);
        printf("\n");
        f=a*b;
        printf("Halinin 1 metre karesinin fiyatini giriniz.\n");
        scanf("%f",&c);
        printf("\n");
        printf("Ustanin bir metre kare basina istedigi iscilik fiyatini giriniz.\n");
        scanf("%f",&d);
        printf("\n");

        printf("Toplam tutar=%f",f*c+f*d);
}
