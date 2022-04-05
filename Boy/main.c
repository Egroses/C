#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boy;

    printf("Boyuzun uzun mu kisa mi oldugunu anlamak icin boyunuzu cm cinsinden giriniz;\n");
    scanf("%d",&boy);

    if(boy>170)
    {
        printf("\nOrtalamanin ustundesiniz.\n\n\n");
    }
    else
    {
        printf("\nKisa degilsin ortalama yuksek sadece -.-'\n\n\n");
    }
}
