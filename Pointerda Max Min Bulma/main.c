#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,dizi[100];
    int i,max,min;

    printf("Kac elemanli bir dizi istersiniz?\n");
    scanf("%d",&n);
    srand(time(0));
    printf("\n");
    printf("Dizinin elemanlari;\n");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%3d",*(dizi+i));
    }

    max=min=*dizi;

    for(i=0;i<n;i++)
    {
        if(*(dizi+i)>max)
        {
            max=*(dizi+i);
        }
        if(*(dizi+i)<min)
        {
            min=*(dizi+i);
        }
    }
    printf("\n");
    printf("\n");

    printf("Sirali hali;\n");

    printf("Max deger= %d, Min deger= %d",max,min);

}
