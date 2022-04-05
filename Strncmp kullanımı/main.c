#include <stdio.h>
#include <stdlib.h>

int main()
{
        char a[]="kismetogullari";
        char b[]="kalkevlenkizlari";
        int x;
        int y;

        printf("Please enter a number for y;\n");
        scanf("%d",&y);

        x=strncmp(a,b,y);

        if(x<0)
        {
            printf("%s in ilk %d  harfinin degeri buyuktur %s den.\n",b,y,a);
        }
        else if(x>0)
        {
           printf("%s in ilk %d  harfinin degeri kucuktur %s den.\n",b,y,a);
        }
        else if(x==0)
        {
           printf("ikisinin de ilk %d  harfinin degeri esittir.\n",y);
        }
}
