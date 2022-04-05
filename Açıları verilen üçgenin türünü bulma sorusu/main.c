#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int c;
        int d;

        printf("Ucgenin ic acilarini giriniz.\n");
        scanf("%d %d %d",&a,&b,&c);

        if(a==b)
        {
            if(a==c)
            {
                printf("Esitkenar ucgendir.");

            }

            else
            {
                printf("Ikizkenar ucgendir.");
            }
        }

        else if(a==c)
        {
            if(c!=b)
            {
                printf("Ikizkenar ucgendir.");

            }
        }

        else if(b==c)
        {
            if(a!=b)
            {
                printf("Ikizkenar ucgendir.");

            }

        }

        else
        {
            printf("Cesitkenar ucgendir.");
        }
}
