#include <stdio.h>
#include <stdlib.h>
int fonk(int max)
{
    int dizi[100];
    int terim;
    int sinir;
    int i,j;
    int degistirici;


    printf("Lutfen dizinizin kac elamanli olmasini istediginizi giriniz;\n");
    scanf("%d",&sinir);
    printf("\n");
    srand(time(0));
    for(i=0;i<sinir;i++)
    {
        dizi[i] = rand()%10+15;
    }
    for(j=0;j<sinir;j++)
    {
        for(i=0;i<sinir;i++)
        {
            if(dizi[i]>dizi[i+1])
            {
                degistirici=dizi[i];
                dizi[i]=dizi[i+1];
                dizi[i+1]=degistirici;
            }
        }
    }
    printf("\n");
    printf("Yeni dizi;\n");
    for(i=0;i<sinir;i++)
    {

        printf("%d",dizi[i]);
        if(i!=sinir-1)
        {
           printf(" < ");
        }
    }
    max=dizi[i];
    return max;
}
int main()
{
    int max;
    int value;
    value =fonk(max);
    printf("\n");
    printf("\n");
    printf("Maksimum deger = %d\n",value);
    printf("\n");
    printf("\n");
    printf("\n");

}
