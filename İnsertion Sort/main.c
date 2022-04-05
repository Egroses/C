    #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,N,dizi[100],c,gecici;

    printf("N :");
    scanf("%d",&N);
    srand(time(0));
    for(i=0;i<N;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }

    for(i=1;i<N;i++)
    {
        j=i;
        while(j>0 && dizi[j-1]>dizi[j])
        {
            gecici=dizi[j-1];
            dizi[j-1]=dizi[j];
            dizi[j]=gecici;
            j--;
            printf("\nKontrol\n");
            for(c=0;c<N;c++)
            {
                printf("%d ",dizi[c]);
            }
        }

    }
        printf("\nKontrol\n");
        for(c=0;c<N;c++)
        {
            printf("%d ",dizi[c]);
        }
}
