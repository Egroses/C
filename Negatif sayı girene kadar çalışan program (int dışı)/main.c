#include <stdio.h>
#include <stdlib.h>

void sayiiste()
{
     int a;
     printf("Negatif olmayan sayilari giriniz,aksi takdirde calismayacaktir.\n");
    while(1)
    {
        scanf("%d",&a);
        if(a<0)
        {
            break;
        }
    }
}

int main()
{
    sayiiste();
}
/*
int pozitifs(int b)
{
    int a;
    while(b>=0)
    {
        scanf("%d",&a);
        b=a;
    }
}

int main()
{
    int a;
    printf("Negatif olmayan sayilari giriniz,aksi takdirde calismayacaktir.\n");
    scanf("%d",&a);
    pozitifs(a);
}
*/
