#include <stdio.h>
#include <stdlib.h>

int main()
{

        char a[]="Bone";
        char b[]="Journey";
        char c[33];
        char d[155];

        strcpy(c,a);
        strncpy(c+3,b,4);
        strcat(c,"! ");

        printf("Who is your favorite?\n");
        gets(d);

        strcat(c, d);

        printf("%s",c);

}
