#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;

        for(a=0;a<25;a++)

        {
            if(a==8)
            {
                continue;
            }
            if(a==18)
            {
                break;
            }
            printf("%d",a);
        }
}
