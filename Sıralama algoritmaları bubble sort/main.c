#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,dizi[100];
    int degistir;

    printf("Kac adet sayi istersiniz :");
    scanf("%d",&N);
    srand(time(NULL));

    printf("Elemanlar ;\n");
    for(int i=0;i<N;i++)
    {
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }

    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                degistir=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=degistir;
            }
        }
    }
    printf("\n\nBubble Sort kullanilmis hali ile ;\n");

    for(int i=0;i<N;i++)
    {
        printf("%d ",dizi[i]);
    }
}
