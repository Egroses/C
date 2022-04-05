#include <stdio.h>
#include <stdlib.h>

void floyd()
{
    int a,b,c=0,d=0,f=1;
    printf("Floyd kac satir olsun?\n");
    scanf("%d",&b);
    printf("\n\n");
    while(c!=b)
    {
        c=d+c;
        c++;
        for(a=1;a<=c;a++)
        {
            printf("%4d",f);
            f++;
        }
        printf("\n");
    }

}
int main()
{
    floyd();
}
