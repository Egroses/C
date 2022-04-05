#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("color A");
    char c;
    int gozlem;
    int dizi[100];
    int i,j,sinir,degisken;

    scanf("%c",&c);

    srand(time(0));
    for(i=0;i>=0;i++)
    {
        dizi[i]=rand()%10;
        printf("%3d",dizi[i]);
    }
    printf("\n");
    printf("\n");

    while(i>-5)
    {
        if(i%2==0 && i%3!=0)
        {
            printf("%9d",dizi[i]);
        }
        else if(i%3==0 && i%2!=0)
        {
            printf("%9d",dizi[i]);
        }
        if(i%2==0 && i%3==0)
        {
            printf("%9d",dizi[i]);
        }
        if(i%2!=0 && i%3!=0)
        {
            printf("%d",dizi[i]);
        }
        i++;
    }

}
