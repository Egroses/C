#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,*p,c;

    p=(int *)malloc(N*sizeof(int));
    srand(time(NULL));

    printf("Bir N sayisi giriniz :");
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        *(p+i)=rand()%100;
    }

    FILE *dosya;
    dosya=fopen("Deneme.txt","w");

    for(int i=0;i<N;i++)
    {
        fprintf(dosya,"%d ",*(p+i));
        printf("%d ",*(p+i));
    }
    printf("\n");
    fclose(dosya);

    dosya=fopen("Deneme.txt","r");

    do
    {
        c=getc(dosya);
        if(c!=EOF)
            putchar(c);
    }while(c!=EOF);

    fclose(dosya);

}
