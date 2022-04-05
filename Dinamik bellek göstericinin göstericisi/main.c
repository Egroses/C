#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **m=(int **)malloc(3*sizeof(int *));

    for(int i=0;i<3;i++)
    {
        m[i]=(int *)malloc(4*sizeof(int));
        for(int j=0;j<4;j++)
        {
            m[i][j]=i*10+j+1;
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }
}
