#include <stdio.h>
#include <stdlib.h>

int fakt(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fakt(n-2)+fakt(n-1);
}

int main()
{
    int N;
    printf("Kac adet fibonacci sayisi istiyorsunuz :");
    scanf("%d",&N);
    for(int i=1;i<=N ;i++)
    {
        printf("%d ",fakt(i));
    }
}




























//#include <stdio.h>
//#include <stdlib.h>
//
//void fibo(int N,int sayi,int asil,int tutucu)
//{
//    if(N!=0)
//    {
//        sayi=sayi+tutucu;
//        tutucu=asil;
//        asil=sayi;
//        printf("%d ",sayi);
//
//        fibo(N-1,sayi,asil,tutucu);
//
//    }
//}
//
//int main()
//{
//    int N;
//    int sayi=1;
//    int asil=0;
//    int tutucu=0;
//
//    printf("Kac adet fibonacci sayisi istiyorsunuz :");
//    scanf("%d",&N);
//    fibo(N,sayi,asil,tutucu);
//}
