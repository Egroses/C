#include <stdio.h>
#include <stdlib.h>

int main()
{
        float a;
        float b;
        float c;
        float d;
        float f;

        printf("Konusma suresini dakika cinsinden giriniz lutfen.\n");
        scanf("%f",&a);

        b=a-3;

        if(a>3)
        {
            printf("Konusma ucretiniz %f Tl tutmustur.",b*0.08+0.25);
        }

        else if((a>0)&&(a<=3))
        {
            printf("Konusma ucretiniz %f Tl tutmustur.",0.25);
        }

        else
        {
            printf("Konusma ucretiniz bulunmamaktadir.");
        }
}
