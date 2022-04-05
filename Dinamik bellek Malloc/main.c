#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n=5;

    ptr=(int *)malloc(n*sizeof(int));

    printf("Girdigimiz sayi degeri : %d\n",n);

    if(ptr==NULL)
        printf("Hafiza bolunemedi!");

    else
    {
        for(int i=0;i<n;i++)
            ptr[i]=i+1;

        printf("Elemanlarimiz ;\n");

        for(int i=0;i<n;i++)
            printf("%d, ",ptr[i]);
    }
}
