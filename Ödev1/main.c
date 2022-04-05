#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bosluk=-1;
    int yildiz=12;
    int n=0;//checkpoint olarak kullaniyorum
    int tayin=bosluk;//checkpoint olarak kullaniyorum

    printf("\n\n\n");// goze guzel gelmesi icin bosluk birakiyor

    for(int i=0;i<=11;i=i+1)//11 satir olacagi icin
    {
        printf("\t");// goze guzel gelmesi icin bosluk birakiyor

        while(yildiz<10)
        {
            printf("*");
            yildiz++;
        }
        yildiz=n;// hata duzeltme kodu

        while(bosluk>0)
        {
            printf(" ");
            bosluk--;
        }

        if(i==0)
            yildiz=9;

        while(bosluk<21-tayin-(11-yildiz))//satirda kalan bosluklar icin
        {
            printf("*");
            bosluk++;
        }

        yildiz=n;
        n++;//yildiz sayisi her seferinde 1 dusecegi icin
        tayin=tayin+2;//bosluk sayisi 1 3 5 seklinde gittigi icin
        bosluk=tayin;//checkpoint
        printf("\n");
    }
    printf("\n\n\n-Emirhan Gul\n\n\n");
}
