#include <stdio.h>
#include <stdlib.h>
#define A 20
int main()
{
    int i,j,terim;
    int carpim[A][A];

    printf("Carpim tablosu kac sayilik olsun (n<21)?\n");
    scanf("%d",&terim);

    if(terim<0||terim>20)
    {
        terim=20;
    }
    for(i=0;i<terim;i++)
    {
        printf("%3d",i);
    }
    printf("\n");
    for(i=0;i<terim;i++)
    {
        for(j=0;j<terim;j++)
        {
            carpim[i][j]=(i)*(j);
        }
    }

    for(i=1;i<terim;i++)
    {
        printf("%3d",i);
        for(j=1;j<terim;j++)
        {
            printf("%3d",carpim[i][j]);
        }
        printf("\n");
    }
}
