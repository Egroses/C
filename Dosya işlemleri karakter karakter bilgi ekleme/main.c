#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("bilgi.txt","a");
    char cumle[100],karakter;

    printf("Lutfen bir cumle giriniz ;\n-");
    gets(cumle);

    for(int i=0;cumle[i];i++)
    {
        putc(cumle[i],dosya);
    }
    putc('\n',dosya);

    fclose(dosya);
}
