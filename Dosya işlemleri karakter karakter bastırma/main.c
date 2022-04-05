#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char karakter;
    dosya=fopen("karaktersiz.txt","r");
    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi!");
    }
    else
    {
        do
        {
            karakter=getc(dosya);
            putchar(karakter);
        }while(karakter!=EOF);
    }
    fclose(dosya);
}
