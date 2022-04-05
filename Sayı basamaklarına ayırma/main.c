#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int c;
        int d;

        printf("Bir sayi giriniz.\n");
        scanf("%d",&a);

        b=a%10;
        c=a%100/10;
        d=a%1000/100;

        printf("Birler basamagi '%d',onlar basamagi '%d' ve yuzler basamagi '%d' olan bir sayidir.\n",b,c,d);
}
