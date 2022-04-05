#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,gecici,N,dizi[100];

    printf("N :");
    scanf("%d",&N);
    srand(time(NULL));

    for(i=0;i<N;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }

    for(i=0;i<N;i++)
    {
        printf("\nKONTROL\n");
        for(j=N;j>i;j--)
        {
            if(dizi[i]>dizi[j])
            {
                gecici=dizi[j];
                dizi[j]=dizi[i];
                dizi[i]=gecici;
            }

            for(int c=0;c<N;c++)
                printf("%d ",dizi[c]);
            printf("\n");
        }
    }
    printf("\n\n\nSON HAL\n\n\n");
    for(int c=0;c<N;c++)
        printf("%d ",dizi[c]);
}
