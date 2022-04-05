#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *giris,*cikis;
    char kaynak[100],hedef[100],karakter;

    printf("Yedeklenecek dosyanin adini giriniz :");
    gets(kaynak);
    giris=fopen(kaynak,"r");

    if(giris==NULL)
    {
        printf("Yedeklenecek dosya bulunamadi!");
        exit(1);
    }

    printf("Yedeklemek istediginiz dosyanin adini giriniz :");
    gets(hedef);

    cikis=fopen(hedef,"w");

    if(cikis==NULL)
    {
        printf("Dosya olusturulamadi!");
        exit(1);
    }

    for(karakter=getc(giris);karakter!=EOF;karakter=getc(giris))
    {
        putc(karakter,cikis);
    }
    fclose(giris);
    fclose(cikis);
}
