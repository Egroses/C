#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a[6],i,t;


        i=0;

        while(i<6)

        {
            if(i==0)
            {
                printf("Please enter a number;\n");
                scanf("%d",&a[i]);
            }
            else
            {
                printf("Please enter one more number\n");
                scanf("%d",&a[i]);
            }
            i++;
        }

        t=0;

        for(i=0;i<6;i++)

        {
            t=t+a[i];
        }

        printf("Your numbers addition is %d",t);
}
