#include <stdio.h>
#include <stdlib.h>
#include "Uskutuphane.h"

int main()
{
    int a,b;

    printf("Give two number,first big number than upside's number.\n");
    scanf("%d%d",&a,&b);
    int d=ust(a,b);
    printf("%d^%d = %d",a,b,d);
}
