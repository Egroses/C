#include <stdio.h>
#include <stdlib.h>

int main()
{
        char a[]="Kerrem";
        char b[]="Fenasi";
        int y;

        printf("Please enter a number for y;\n");
        scanf("%d",&y);

    //    strcpy(b,a);

        strncpy(a,b,y);

        printf("%s",a);

}
