#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *metin;
    metin=(char *)malloc(sizeof(char));
    printf("lutfen bir cumle giriniz\n-");
    gets(metin);
    printf("%s",metin);
}
