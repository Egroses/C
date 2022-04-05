#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,gecici,aranan,N,dizi[100];

    printf("N :");
    scanf("%d",&N);
    srand(time(NULL));

    for(i=0;i<N;i++)
    {
        dizi[i]=rand()%100;
    }

    for(i=0;i<N;i++)
    {
        for(j=N;j>i;j--)
        {
            if(dizi[i]>dizi[j])
            {
                gecici=dizi[j];
                dizi[j]=dizi[i];
                dizi[i]=gecici;
            }
        }
    }

    for(int c=0;c<N;c++)
        printf("%d ",dizi[c]);
    printf("\nAranan :");
        scanf("%d",&aranan);
    while(aranan)
    {
        if(aranan==dizi[N/2])
        {
            printf("%d sayisi %d. siradadir.",aranan,N/2+1);
            break;
        }

        else if(aranan > dizi[N/2])
        {
            N=N+1;
        }

        else if(aranan <dizi[N/2])
        {
            N=N/2;
        }
    }
}
