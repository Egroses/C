#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
/*
    int a;
    int b;
    char c[1000];

    int e=0;

    printf("Bir kelime veriniz biz capraz yonde artirarak yazalim.\n");
    gets(c);
    for(a=0;c[a];a++)
    {
        int d=0;
        int f=0;
        for(b=0;b<=a;b++)
        {
            printf("%3c",c[d]);
                d++;
        }
        if(f<=e)
            {
                printf("\n");
                f++;
            }
        e++;
    }
*/


    int a=0;

    char c[100];

    printf("Bir kelime veriniz asama asama basmamiz icin.\n");
    gets(c);

    while(a<strlen(c))
    {
        int b=0;
        while(b<=a)
        {
            printf("%3c",c[b]);
            b++;
        }
        a++;
        printf("\n");
    }
}
