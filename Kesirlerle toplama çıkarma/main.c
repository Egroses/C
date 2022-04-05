#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int c;
        int d;
        char f;

        printf("Yapmak istediginiz islemin oparetorunu giriniz.\n");
        scanf("%c",&f);
        printf("\n");
        printf("Islem yapmak istediginiz ilk kesrin once payini sonra paydasini giriniz.\n");
        scanf("%d%d",&a,&b);
        printf("\n");
        printf("Islem yapmak istediginiz ikinci kesrin once payini sonra paydasini giriniz.\n");
        scanf("%d%d",&c,&d);

        if((b!=0)&&(d!=0))
        {
        if(f=='+')
        {
            printf("%d/%d+%d/%d isleminin sonucu = %d/%d",a,b,c,d,a*d+c*b,b*d);
        }
        else if(f=='-')
        {
            printf("%d/%d-%d/%d  isleminin sonucu = %d/%d",a,b,c,d,a*d-c*b,b*d);
        }
        else
        {
            printf("Sadece toplama cikarma yapilabilir.");
        }
        }

         if(((b==0)&&(d!=0))||((b==0)&&(d==0))||((b!=0)&&(d==0)))
        {
            printf("Islem tanimsizdir.");
        }
}
