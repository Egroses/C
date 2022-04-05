#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int c;
        int d;
        float x;

        printf("f(x)=x^3+13x^2+47x+5 fonksiyonu icin;\n");
        printf("x degerini giriniz.\n");
        scanf("%f",&x);

        printf("f(%.2f) degerinin cevabi = %.3f",x,(float)x*x*x+13*x*x+47*x+5);
}
