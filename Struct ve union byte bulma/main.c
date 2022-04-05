#include <stdio.h>
#include <stdlib.h>
struct kontrol1
{
    int x;
    char y;
    long z;
};

union kontrol2
{
    int a;
    char b;
    long c;
};

int main()
{
    printf("Struct : %d\n",sizeof(struct kontrol1));

    printf("Union : %d",sizeof(union kontrol2));

}
