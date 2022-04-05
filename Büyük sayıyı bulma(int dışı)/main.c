#include <stdio.h>
#include <stdlib.h>

int bigger(int a,int b)
{
    if(a<b)
    {
        return 1;
    }
    else if(a>b)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    int a,b,c;

    printf("Give me two number and I tell you which one is bigger.\n");
    scanf("%d%d",&a,&b);
    bigger(a,b);
    c=bigger(a,b);
    printf("\n");
     if(c==1)
    {
        printf("%d buyuktur %d sayisindan.\n\n",b,a);
    }
    else if(c==2)
    {
        printf("%d buyuktur %d sayisindan.\n\n",a,b);
    }
    else if(c==3)
    {
        printf("%d ile %d sayisi ayni sayidir.\n\n",a,b);
    }
}
