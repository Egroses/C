#include <stdio.h>
#include <stdlib.h>

void voi(int buyukluk,char basilan)
{
    int i;
    int bosluk=4;
    int n;
    int tayin=buyukluk;
    int devam=buyukluk;
    int a;
    for(i=buyukluk;i>0;i=i-2)
    {
        n=0;
        while(n<bosluk)
        {
            printf(" ");
            n++;
        }
        bosluk++;

        while(buyukluk>0)
        {
            printf("%c",basilan);
            buyukluk--;
        }
        tayin=tayin-2;
        buyukluk=tayin;
        printf("\n");
        a=i;
    }

    buyukluk=buyukluk+2;
    tayin=buyukluk;


    for(i=a;i<=devam;i=i+2)
    {
        bosluk=n;
        while(bosluk>0)
        {
            printf(" ");
            bosluk--;
        }
        n--;
        while(buyukluk>0)
        {
            printf("%c",basilan);
            buyukluk--;
        }
        tayin=tayin+2;
        buyukluk=tayin;
        printf("\n");
    }
    printf("\n\n\n");
}
int main()
{
    int buyukluk;
    char basilan;

    printf("Lutfen kelebegin buyuklugunu ve kullanmak istediginiz karakteri giriniz;\n");
    scanf("%d %c",&buyukluk,&basilan);
    printf("\n\n\n");
    voi(buyukluk,basilan);
}
