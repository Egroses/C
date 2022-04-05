#include <stdio.h>
#include <stdlib.h>

int tekorcift(int a,int b)
{
    if(a%2==1)
    {
        if(b%2==1)
        {
            return 1;
        }
        else
        {
            return 2;

        }
    }

    else
    {
        if(b%2==1)
        {
            return 3;
        }
        else
        {
            return 4;
        }
    }
}

int main()
{
        int a,b,c;
        printf("Numbers?\n");
        scanf("%d %d",&a,&b);
        c=tekorcift(a,b);

        if(c==1)
        {
            printf("iki sayida tek");
        }
        if(c==2)
        {
            printf("ilk sayi tek ikinci cift");
        }
        if(c==3)
        {
            printf("ilk sayi cift ikinci tek");
        }
        if(c==4)
        {
            printf("iki sayida cift");
        }
}
