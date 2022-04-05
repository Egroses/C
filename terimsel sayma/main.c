#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int c;


        printf("Ilk terimi ve sonuncu terimi giriniz.\n");
        scanf("%d %d",&a,&b);

        printf("Terimler arasi farkin kac olmasini istersiniz?\n");
        scanf("%d",&c);

        while(a<=b)
        {
            printf("%3d",a);
            a=a+c;
        }
}
