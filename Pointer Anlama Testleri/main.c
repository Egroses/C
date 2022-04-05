#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,a,b;

    a=5;
    p1=&a;
    printf("%d\n",p1);
    printf("%d\n",&a);
    printf("%d\n",a);

    for(p2=&a;*p2;p2++)
    {
        printf("%d\n",p2);
        printf("%d\n",*p2);
    }

}
