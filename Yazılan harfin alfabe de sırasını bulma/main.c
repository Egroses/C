#include <stdio.h>
#include <stdlib.h>

int main()
{
        char a;
        int b;
        char c;
        int d;

        printf("Sirasini ogrenmek istediginiz harfi giriniz.\n");
        scanf("%c",&a);

        if((a>='A')&&(a<='Z'))
        {
            b=(int)a-(int)'A'+1;
            printf("%c harfi alfabede %d. siradadir.",a,b);
        }
        else if((a>='a')&&(a<='z'))
        {
            b=(int)a-(int)'a'+1;
            printf("%c harfi alfabede %d. siradadir.",a,b);
        }
        else
        {
            printf("Boyle bir harf bulunmamaktadir.");
        }
}
