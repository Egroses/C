#include <stdio.h>
#include <stdlib.h>

int main()
{
        float a;
        float b;
        float c;
        float d;
        char f;
        int i;

        printf("Bu programin amaci tavsanlarla tavuklarin sayi artisini karsilastirmak icindir.\n");
        printf("Ciftlikte kac tavsan var?\n");
        scanf("%f",&a);
        printf("\n");
        printf("Ciftlikte kac tavuk var?\n");
        scanf("%f",&b);

        if(a<=b)
        {
        while(a<=b)
        {
            a=a+a*38/1000;
            b=b+b*12/1000;
            i=i+1;
        }
        printf("Tavsanlar sayi artis hizi sayesinde tavuklara %d yil sonra yetisirler",i);
        }
        else
        {
            printf("Tavuklar, sayi artis hizi yuzunden asla Tavsanlara yetisemez");
        }
}
