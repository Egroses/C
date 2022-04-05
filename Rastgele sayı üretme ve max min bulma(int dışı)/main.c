#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("Sayi adedini giriniz:\n");
    scanf("%d",&a);
    int dizi[a];
    srand(time(0));
    for(i=0;i<a;i++)
    {
        dizi[a]=rand()%100;
        printf("%d\n",dizi[a]);
    }


}
