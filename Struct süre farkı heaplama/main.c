#include <stdio.h>
#include <stdlib.h>

struct zilean{
    int saat;
    int dk;
    int saniye;
};

void fark(struct zilean t1,struct zilean t2,struct zilean *farki)
{
    if(t1.saniye< t2.saniye)
    {
        --t1.dk;
        t1.saniye+=60;
    }

    farki->saniye=t1.saniye-t2.saniye;

    if(t1.dk< t2.dk)
    {
        --t1.saat;
        t1.dk+=60;
    }

    farki->dk=t1.dk-t2.dk;
    farki->saat=t1.saat-t2.saat;
    if(farki->saat<0)
    {
        farki->saat-=2*(farki->saat);
    }

    printf("Fark; \n %d:%d:%d",farki->saat,farki->dk,farki->saniye);
}

int main()
{
    struct zilean t1,t2,frk;

    printf("Birinci zaman ;\n");
    scanf("%d %d %d",&t1.saat,&t1.dk,&t1.saniye);

    printf("ikinci zaman ;\n");
    scanf("%d %d %d",&t2.saat,&t2.dk,&t2.saniye);

    fark(t1,t2,&frk);
}
