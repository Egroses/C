#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[40];
    int b=0;

    printf("Bir karakter dizisi giriniz;\n");
    gets(a);

    while((int)a!=32)
    {
        b=b+1;
        a++;
    }
    printf("Diziniz %d elamanlidir.",b);


/*
    printf("Dizinizin bosluksuz hali;\n");
    while(d!=32)
    {
        printf("%c",d);
    }
*/


}
