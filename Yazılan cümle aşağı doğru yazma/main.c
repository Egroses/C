#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b=0;
    float c;
    float d;
    char f[1000];
    char e;
    int i;

    printf("Bir cumle giriniz.\n");
    gets(f);

    printf("Hangi harfi aramak istersiniz.\n");
    scanf("%c",&e);

    for(i=0;i<strlen(f);i++)
    {
        if(f[i]==(int)e)
        {
            b++;
        }
    }

    printf("%d",b);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int a;
    int b;
    float c;
    float d;
    char f[1000];
    char e;
    int i;

    printf("Bir cumle giriniz.\n");
    gets(f);

    for(i=0;f[i];i++)
    {
        printf("%c\n",f[i]);

    }


}
