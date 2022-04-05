#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float islem(float a,float b,char c)
{

    if(c=='+')
    {
        return a+b;
    }
    else if(c=='-')
    {
        return a-b;
    }
    else if(c=='/')
    {
        return a/b;
    }
    else if(c=='*')
    {
        return a*b;
    }
}

int main()
{
    int a;
    int b;
    char c;

    printf("What is your want.\n");
    scanf("%c",&c);
    printf("Give me two number and I make your wish is real.\n");
    scanf("%d %d",&a,&b);
    printf("Islem sonucu %f",islem(a,b,c));

}
