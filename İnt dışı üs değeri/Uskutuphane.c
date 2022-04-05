#include <stdlib.h>
#include <stdio.h>
#include "Uskutuphane.h"
int ust(int a,int b)
{
    int c=1;
    while(b!=0)
    {
        c=c*a;
        b--;
    }
    return c;
}


