#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;

    char satir[100],karakter,dosyaadi[100];
    printf("Lutfen dosyanin adini giriniz ;\n-");
    gets(dosyaadi);

    dosya=fopen(dosyaadi,"r");

    do
    {
        karakter=fgets(satir,100,dosya);
        if(karakter!=NULL)
            printf("%s",satir);
    }while(karakter!=NULL);

    fclose(dosya);
}
