#include <stdio.h>
#include <stdlib.h>
#define N 3

typedef struct eczane{
    char ilac_adi[20];
    int adet;
    int fiyat;
}data;

int main()
{
    data bilgi[N];

    for(int i=0;i<N;i++)
    {
        printf("%d. ilacin adini, adedini ve fiyatini giriniz ;\n",i+1);
        scanf("%s %d %d",&bilgi[i].ilac_adi,&bilgi[i].adet,&bilgi[i].fiyat);
    }
    int a =0;
    printf("\n\n\n\t\t\tILAC ADI\n________________________________________________________________________\n");
    for(int i=0;i<N;i++)
    {

        if(bilgi[i].adet<=20)
        {
            ++a;
            printf("%d-)%s\n",a,bilgi[i].ilac_adi);
        }
    }
}
