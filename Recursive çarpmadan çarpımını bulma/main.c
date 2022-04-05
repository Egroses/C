#include <stdio.h>
#include <stdlib.h>

int carpim(int sayi1,int sayi2)
{
    if(sayi1==0)
        return 0;
    else
        return sayi2+carpim(sayi1-1,sayi2);
}

int main()
{
    int sayi1,sayi2;
    printf("A ve B dogalsayilarini giriniz ;\n");
    printf("A :");
    scanf("%d",&sayi1);
    printf("B :");
    scanf("%d",&sayi2);
    printf("%d * %d =%d",sayi1,sayi2,carpim(sayi1,sayi2));
}
