#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    int *p=(int *)malloc(N*sizeof(int));
    printf("Bir n sayisi giriniz :");
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        printf("%d. sayi :",i+1);
        scanf("%d",&(*(p+i)));
    }

    for(int i=0;i<N;i++)
    {
        printf("%d ",*(p+i));
    }
}
