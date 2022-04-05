#include <stdio.h>
#include <stdlib.h>

int toplama(int a,int b)
{
    return a+b;
}


int main()
{

    int sayi1;
    int sayi2;

    printf("Bize 2 sayi veriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);
    toplama(sayi1,sayi2);
    printf("Sayilarin toplami %d.",toplama(sayi1,sayi2));
}
