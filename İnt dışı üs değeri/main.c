#include <stdio.h>
#include <stdlib.h>

int ust(int a,int b)
{
    int c=1;
    while(b!=0)
    {
        c=c*a;
        b--;
    }
    return c;
}

int main()
{
    int a,b;

    printf("Give two number,first big number than upside's number.\n");
    scanf("%d%d",&a,&b);
    printf("a^b = %d",ust(a,b));
}
