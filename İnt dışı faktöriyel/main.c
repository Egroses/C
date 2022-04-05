#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int a)
{
    int b=1;
    while(a!=0)
    {
        b=a*b;
        a--;
    }
    return b;
}

int main()
{
    int a,b,c,d;
    char e,f,g,h;

    printf("Give me one number and I tell you that number's 'faktoriyel'.\n");
    scanf("%d",&a);
    printf("%d! = %d",a,faktoriyel(a));
}
