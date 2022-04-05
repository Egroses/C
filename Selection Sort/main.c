#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,gecici,N,Konum,dizi[100],c;

    srand(time(0));
    printf("N :");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }

    for(i=0;i<N-1;i++)
    {
        Konum=i;
        printf("\nKontrol\n");
        for(c=0;c<N;c++)
        {
            printf("%d ",dizi[c]);
        }
        for(j=i+1;j<N;j++)
        {
            if(dizi[Konum]>dizi[j])
            {
                Konum =j;
            }
        }
        if(Konum!=i)
        {
            gecici=dizi[Konum];
            dizi[Konum]=dizi[i];
            dizi[i]=gecici;
        }

    }
    printf("\nElemanlar ;\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",dizi[i]);
    }
}
