#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sil(int dizi[],int sira,int terim)
{

    int i;
    for(i=0;i<terim;i++)
    {
        if(dizi[i]!=dizi[sira-1])
        {
            printf("%d\n",dizi[i]);
        }
    }
}
int main()
{
    int a,b,i,c;
    int d;
    printf("Terim sayisini giriniz;\n");
    scanf("%d",&a);
    printf("\n");
    int dizi[a];
    srand(time(0));
    for(i=0;i<a;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }

    printf("Kacinci terimi silmek istersiniz?\n");
    scanf("%d",&d);

	printf("\n");

    sil(dizi,d,a);

}
