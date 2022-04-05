#include <stdio.h>
#include <stdlib.h>
double kok(double N)
{
    int yardimci;
    double karekok;
    karekok=N/2;
    for(yardimci=0;yardimci<=50;yardimci++)
    {
        karekok=(karekok*karekok+N)/(2*karekok);
    }
    return karekok;
}
int main()
{
    double N;
    printf("Karekokunu ogrenmek istediginiz sayiyi giriniz;\n");
    scanf("%lf",&N);
    printf("kok icindeki %lf , %lf ye esittir",N,kok(N));
}
