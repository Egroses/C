#include <stdio.h>
#include <stdlib.h>

int toplama(int sayi)
{
    if(sayi==1)
        return 1;
    else
        return sayi+toplama(sayi-1);
}

int main()
{
    int sayi;
    printf("Bir N dogalsayisi giriniz :");
    scanf("%d",&sayi);
    printf("1+2+3+...+N =%d",toplama(sayi));
}









/*
void toplama(int dogal,int sonuc)
{


    sonuc=dogal+sonuc;
    printf("\t%d\n",sonuc);

    if(dogal!=0)
        toplama(dogal-1,sonuc);

    if(dogal==0)
        printf("1+2+3+...+N =%d",sonuc);
}

int main()
{

    int dogal;
    int sonuc=0;
    printf("Bir N dogalsayisi giriniz :");
    scanf("%d",&dogal);
    toplama(dogal,sonuc);


}
*/
