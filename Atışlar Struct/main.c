#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct kordinat{
    float x,y;
};

int main()
{
    struct kordinat top;
    float t=0;
    printf("     X     ||       Y       \n_________________________\n");
    while(t<10)
    {
        top.x=20-6*cos(t);
        top.y=15+2*sin(t);
        t=t+0.1;
        printf(" %f  ||  %f \n",top.x,top.y);
    }
}
