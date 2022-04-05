#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Dizi[100];
    char *p1,*p2;
    int degil;

    printf("Palendrom olup olmadigini anlamak icin bir dizi giriniz;\n");
    gets(Dizi);

    for(p2=Dizi;*p2;p2++);

    p2--;

    degil=1;
    for(p1=Dizi;degil && p1<p2;p1++,p2--)
    {
        if(*p1 != *p2)
        {
            degil=0;
            break;
        }
    }

    if(degil==1)
    {
        printf("Diziniz bir palendomdur.");
    }
    else if(degil==0)
    {
        printf("Diziniz bir palendom degildir.");
    }
    else
    {
        printf("Yanlis girdiniz!!!");
    }
}
