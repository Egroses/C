#include <stdio.h>
#include <stdlib.h>

struct point{
int x;
int y;
int z;
};

int main()
{
    struct point gost;

    gost.x=3;
    gost.y=4;
    gost.z=5;
    printf("%d %d %d\n",gost.x,gost.y,gost.z);

    struct point *gosd;
    gosd=(int *)malloc(sizeof(int));
    gosd->x=6;
    gosd->y=7;
    gosd->z=8;
    printf("%d %d %d",gosd->x,gosd->y,gosd->z);
}
