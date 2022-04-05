#include <stdio.h>
#include <stdlib.h>

union kontrol{
int sayi1;
int sayi2;
}adres;

int main()
{
    int X,Y;
    adres.sayi1=100;
    X=&adres.sayi1;
    printf("Adresleri sirayla ; \n%d : %d |||",adres.sayi1,X);


    adres.sayi2=123;
    Y=&adres.sayi2;
    printf("%d : %d ",adres.sayi2,Y);
}
