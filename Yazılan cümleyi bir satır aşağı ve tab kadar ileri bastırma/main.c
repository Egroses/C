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

    printf("Bir cumle giriniz biz de sekilli sukullu yazalim.\n");
    gets(f);

    for(i=0;i<strlen(f);i++)
    {
        printf("%c",f[i]);
        if(f[i]==32)
        {
            printf("\n");
            b++;
            for(a=0; a<b; a++)
            {
                printf("\t");
            }
        }
    }
}
