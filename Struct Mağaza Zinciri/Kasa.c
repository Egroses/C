#include <stdio.h>
#include <stdlib.h>
#include "Magaza.h"
#define isci 3
#define N 1
#define M 5

int main()
{

    struct magaza avm[N];

    for(int i=0;i<N;i++)
    {
        printf("MAGAZA %d\n---------------\n",i+1);
        doldur_magaza(&avm[i]);
    }

    printf("\n\n __________________________________\n|                                  |\n");
    printf("|        ISTATIKSEL ANALIZ         |\n|__________________________________|\n\n\n");

    for(int i=0;i<N;i++)
        bastir_magaza(&avm[i]);

    rakam_satis(avm);


}
