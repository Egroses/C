#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int c;
        int d;
        printf("Kactan baslayalim?\n");
        scanf("%d",&b);
        printf("Kacar kacar sayalim?\n");
        scanf("%d",&c);
        printf("%d'ser saymanin bitebilmesi icin bir sinir belirleyin.\n",c);
        scanf("%d",&a);

        while(b<=a)
        {
            printf("%4d",b);
            b=b+c;
        }
}
