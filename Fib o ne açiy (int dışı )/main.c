#include <stdio.h>
#include <stdlib.h>

void fibo()
{
    int a=1;
    int b=0;
    int c=1;
    int d;
    int f=2,e;
    printf("Fibonaci yapim mi?\n");
    printf("Fiboya sinir koymak istiyorsaniz 1e basin,istemiyorsaniz rastgele bir sayi giriniz.\n");
    scanf("%d",&e);
    if(e==1)
    {
        printf("Fiboya koymak istediginiz sinir nedir?\n");
        scanf("%d",&f);
        printf("\n1");
        for(a=1;a<f;a++)
        {

            d=b+c;
            b=c;
            c=d;
            printf("%150d",d);
        }
    }
    else
    {
        for(a=1;a>0;a++)
        {

            d=b+c;
            b=c;
            c=d;
            printf("%15d",d);
        }
    }
    printf("\n\n");
}
int main()
{
    fibo();
}
