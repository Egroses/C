#include <stdio.h>
#include <stdlib.h>

void tekorcift(int a,int b)
{
    if(a%2==1)
    {
        if(b%2==1)
        {
            printf("iki sayida tek");
        }
        else
        {
            printf("ilk sayi tek ikinci cift");

        }
    }

    else
    {
        if(b%2==1)
        {
            printf("ilk sayi cift ikinci tek");
        }
        else
        {
            printf("iki sayida cift");
        }
    }
}


int main()
{

        int a,b;
        printf("Number?\n");
        scanf("%d %d",&a,&b);
        tekorcift(a,b);

}
