#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,gecici;

    p1=(int *)malloc(sizeof(int));
    p2=(int *)malloc(sizeof(int));

    *p1=1;
    *p2=3;

    printf("Birinci sayi :%d\nIkinci sayi : %d\n",*p1,*p2);

    gecici=*p2;
    *p2=*p1;
    *p1=gecici;

    printf("Birinci sayi :%d\nIkinci sayi : %d",*p1,*p2);
}
