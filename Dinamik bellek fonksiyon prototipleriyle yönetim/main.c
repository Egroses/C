#include <stdio.h>
#include <stdlib.h>

void dizi_olustur(int *p,int N)
{
    printf("Dizi elemanlari ;\n");
    for(int i=0;i<N;i++)
    {
        *(p+i)=rand()%100;
        printf("%d ",*(p+i));
    }
}

void dizi_sirala(int *p,int N)
{
    int degistir;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                degistir=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=degistir;
            }
        }
    }
    printf("\nSiralanmis hali ;\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",*(p+i));
    }
}

void dizi_buyuk(int *p,int N)
{
    int enb=0;
    for(int i=0;i<N;i++)
    {
        if(enb<*(p+i))
        {
            enb=*(p+i);
        }
    }
    printf("\n\nDizinin en buyuk elemani : %d",enb);
}

int main()
{
    int N,*p;

    printf("Kac adet sayi istersiniz :");
    scanf("%d",&N);
    srand(time(NULL));

    p=(int *)malloc(N*sizeof(int));

    dizi_olustur(p,N);
    dizi_sirala(p,N);
    dizi_buyuk(p,N);
    free(p);
}
