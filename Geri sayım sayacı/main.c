#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;

        printf("Please enter a number for cooldown;\n");
        scanf("%d",&a);

        while(a!=0)
        {
            a=a-1;
            printf("%d \n",a);

        }
}
