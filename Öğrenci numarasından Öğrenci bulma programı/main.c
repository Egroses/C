#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;

        printf("What is your student number?\n");
        scanf("%d",&a);

        if(a==93)
        {
            printf("Welcome Emirhan Gul.");
        }
        else if(a==124)
        {
            printf("Welcome Emirhan Kaya.");
        }
        else
        {
            printf("Error!We couldn't find you.");
        }

}
