#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b=0;
        float c;
        float d;
        char f[100];
        int i=0;

        printf("Bir cumle giriniz ve biz de size kac kelime oldugunu soyleyelim.\n");
        gets(f);

        while(f[i])
        {
            if(f[i]==32)
            {
                b++;
            }
            i++;
        }

        printf("Cumlede %d tane kelime vardir",b+1);
}
