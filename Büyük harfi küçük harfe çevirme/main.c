#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char Buyukharf;
    printf("Kucuk halini gormek istediginiz buyuk harfi giriniz;\n");
    scanf(" %c",&Buyukharf);
    if(Buyukharf>='A'&&Buyukharf<='Z')
    {
        printf("Girdiginiz harfin kucuk hali = %c\n",tolower(Buyukharf));
    }
}

/*
int main()
{
    int a;
    scanf("%d",&a);
    int b;
    b=pow(a,3);
    printf("%d",b);
}*/
