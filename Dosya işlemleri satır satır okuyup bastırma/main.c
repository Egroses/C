#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char karakter,satir[100];
    dosya=fopen("gorevlikayit.txt","r");
    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi!");
    }
    else
    {
        do
        {
            karakter=fgets(satir,100,dosya);
            if(karakter!=NULL)
                printf("%s",satir);

        }while(karakter!=NULL);
    }
    fclose(dosya);
}
