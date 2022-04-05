#include <stdio.h>
#include <stdlib.h>

int main()
{
    float boy,kilo,endeks;

    printf("Boyunuzu giriniz :");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz :");
    scanf("%f",&kilo);
    endeks=kilo/(boy*boy);
    printf("Endeksiniz : %f",endeks);
}
