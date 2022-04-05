#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *sayi,*num,hokus[100],n,degistirici,i;

    printf("Dizinin eleman sayisini giriniz;\n");
    scanf("%d",&n);

    srand(time(0));

    printf("\n");
    printf("Dizinin ilk hali ;\n");
    for(sayi=hokus;sayi<hokus+n;sayi++)
    {
        *sayi=rand()%1000;
        printf("%4d",*sayi);
    }

    printf("\n");
    printf("\n");

    for(num=hokus;num<hokus+n-1;num++);

    for(sayi=hokus;sayi<num;sayi++,num--)
    {
        degistirici=*sayi;
        *sayi=*num;
        *num=degistirici;
    }
    printf("Dizinin son hali;\n");

    for(i=0;i<n;i++)
    {
        printf("%4d",hokus[i]);
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

}
