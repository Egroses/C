#include <stdio.h>
#include <stdlib.h>

int fakt(int sayi)
{
    int sonuc;
    if(sayi!=0)
        sonuc=sayi*fakt(sayi-1);
    else
        sonuc=1;
    return sonuc;
}

int main()
{
    int sayi;
    printf("Bir N dogalsayisi giriniz :");
    scanf("%d",&sayi);
    printf("%d! =%d",sayi,fakt(sayi));
}
