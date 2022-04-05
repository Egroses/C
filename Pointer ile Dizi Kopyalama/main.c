#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Dizi[6]={'b','u','m','b','u','m'};
    char Copy[6];
    char *p1,*p2;
    int i;

    p2=Copy;


    for(p1=Dizi;*p1;p1++)
    {
        *p2=*p1;
        *p2++;
    }

    printf("Dizinin kopyalanmadan onceki ve sonraki hali;\n");

    for(i=0;i<6;i++)
    {
        printf("%c",Dizi[i]);
    }
    printf(" = ");
    for(i=0;i<6;i++)
    {
        printf("%c",Copy[i]);
    }
    printf(" ????");
    printf("\n");
}
