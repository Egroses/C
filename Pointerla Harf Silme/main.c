#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char Dizi[99];
    char *p;
    char dlt;

    printf("Bir karakter dizisi giriniz;\n");
    gets(Dizi);
    printf("\n");
    printf("Dizinizden silmek istediginiz harf nedir?\n");
    scanf("%c",&dlt);
    printf("\n");
    for(p=Dizi;*p;p++)
    {
        if(*p == dlt)
        {
            strcpy(p,p+1);
        }
        if(*p == dlt-32)
        {
            strcpy(p,p+1);
        }
    }

    printf("Dizinizin son hali; \n\n%s",Dizi);
    printf("\n");
    printf("\n");

}
