#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int a;
    int sayma[26]={0};
    int i,harf,sayi;
    harf=0;

    printf("Alfabenin kac kere kullanildigini gormek istediginiz cumleyi giriniz;\n");

    while((c=getchar())!='\n')
    {
        sayi=c-'a';
        if(sayi >=0 && sayi <26)
        {
        sayma[sayi]++;
        }
        else
        {
        harf++;
        }
    }
    printf("\nAlfabeden kullandiginiz harf sayisi; %d\n",harf);
    for(i=0;i<26;i++)
    {
        printf("%d kez %c \n ",sayma[i],'a'+i);
    }
}
