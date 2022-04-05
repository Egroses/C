#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Dize[100];
    char Diza[100];
    int n,x,i;

    printf("Ilk ve ikinci olmak uzere eleman sayilarini giriniz;\n");
    scanf("%d %d",&n,&x);

    srand(time(0));

    printf("Ilk diziniz;\n");
    for(i=0;i<n;i++)
    {
        Dize[i]=rand()%1000;
        printf("%4d",Dize[i]);
    }
    printf("\n");
    printf("Ikinci diziniz;\n");
    for(i=0;i<x;i++)
    {
        Diza[i]=rand()%1000;
        printf("%4d",Diza[i]);
    }
    printf("\n");
    printf("\n");
    printf("Dizilerin birlestirilmis hali;\n");
    for(i=0;i<n+x;i++)
    {
        if(i<n)
        {
            printf("%4d",Dize[i]);
        }
        else if(i<n+x && i>=n)
        {
            printf("%4d",Diza[i-n]);
        }
    }
}
