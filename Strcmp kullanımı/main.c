#include <stdio.h>
#include <stdlib.h>

int main()
{
        char a[]="kismetogullari";
        char b[]="kalkevlenkizlari";
        int x;

        printf("%d tane harf var.\n",strlen(a));

        printf("\n");
        printf("\n");

        x=strcmp(a,b);

        if(a<b)
        {
            printf("%s in harf degeri buyuktur %s den.\n",b,a);
        }
        else if(a>b)
        {
           printf("%s in harf degeri kucuktur %s den.\n",b,a);
        }
        else if(a==b)
        {
           printf("ikisinin de harf degeri esittir.\n");
        }
}
