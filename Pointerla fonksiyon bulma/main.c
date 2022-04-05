#include <stdio.h>
#include <stdlib.h>

int fak(int *n)
{
    int faker;
    int i;

    faker=*n-1;

    for(i=0;i<faker+1;i++)
    {
        *n=*n*faker;
        faker--;
    }
    return *n;

}

int main()
{
    int n,oricinal;

    printf("Faktoriyelini merak ettiginiz sayiyi giriniz;\n");
    scanf("%d",&n);

    oricinal=n;

    printf("%d! = %d",oricinal,fak(&n));
}
