#include <stdio.h>
#include <stdlib.h>

int mahmut(int a,int d)
{
    int c;
    int b;
    c = a;

    for(b=1;b<d;b++)
    {
        c=a*c;
    }

    return c;



}

int main()
{
    int a;
    int d;
    int f;

    printf("Please enter two number like down and top?\n");
    scanf("%d %d",&a,&d);


    f=mahmut(a,d);

    printf("%d",f);
}
