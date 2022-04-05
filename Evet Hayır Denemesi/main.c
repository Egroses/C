#include <stdio.h>
#include <stdlib.h>

int main()
{
    char soru[100];
    char soru2;

    printf("are you yes?\n");
    gets(soru);
    soru2=soru;

    if(soru2=='yes')
    {
        printf("oki");
    }
    else if(soru2=='no')
    {
        printf("okey");
    }
}
