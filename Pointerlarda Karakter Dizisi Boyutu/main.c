#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Dizi[100];
    char *p;
    int harf=0;

    printf("Lutfen kac harften olustugunu anlamak icin bir karakter dizisi giriniz;\n");
    gets(Dizi);

    for(p=Dizi;*p;p++)
    {
        if(*p !=32)
        {
            harf++;
        }
    }

    printf("\n");
    printf("\n");
    printf("Diziniz %d tane harften olusuyor.",harf);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    if(harf==24)
    {
        printf("Aman kendin dene inanma bize noldu 24 cikinca kaldin di mi?");
    }
    printf("\n");
    printf("\n");
    printf("\n");
}
