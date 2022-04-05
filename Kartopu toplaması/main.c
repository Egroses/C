#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int sonuc;

        printf("Please enter a number for the know snowball addition;\n");
        scanf("%d",&a);

        while(a!=0)
        {

            sonuc=sonuc+a;
            a=a-1;

        }

        printf("Snowball Addition is %d.",sonuc);
}
