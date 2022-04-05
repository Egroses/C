#include <stdio.h>
#include <stdlib.h>

int islem(int a)
{
    int b=0;
    int i;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            b=b+i;
        }
    }
    if(b==a)
    {
        return 1;
    }
    else if(b!=a)
    {
        return 0;
    }
}

int main()
{
    int a,i;
    printf("Give me one number and I tell you is it perfect or not.\n");
    scanf("%d",&a);
    printf("\n\n");
    islem(a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            printf("+%1d",i);
        }
    }
    printf("=%d\n",a);

    if(islem(a)==1)
    {
        printf("\n");
        printf("That's number is perfect!\n\n\n");
    }
    else if(islem(a)==0)
    {
        printf("\n");
        printf("That's number is not perfect!\n\n\n");
    }

}
