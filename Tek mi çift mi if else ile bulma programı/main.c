#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a,b;

        printf("sayi\n");
        scanf("%d",&a);

        printf("sayi\n");
        scanf("%d",&b);

        if(a%2==1)
        {
            if(b%2==1)
            {
                printf("iki sayida tek");
            }
            else
            {
                printf("ilk sayi tek ikinci cift");

            }
        }

        else
        {
            if(b%2==1)
            {
                printf("ilk sayi cift ikinci tek");
            }
            else
            {
                printf("iki sayida cift");
            }
        }
}
