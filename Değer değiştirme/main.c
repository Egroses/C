#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int c;
        int d;


        printf("A sayisini giriniz.\n");
        scanf("%d",&a);
        printf("\n");
        printf("B sayisini giriniz.\n");
        scanf("%d",&b);
        printf("\n");
        c=a;
        a=b;
        b=c;

        printf("A sayisinin degeri=%d\n",a);
        printf("\n");
        printf("B sayisinin degeri=%d",b)
}
