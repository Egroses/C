#include <stdio.h>
#include <stdlib.h>
#define pi 3

union blala{
float alan;
float cevre;
}/*daire*/;

int main()
{
    float r;
    union blala daire;
    printf("Dairenin yaricapini giriniz : ");
    scanf("%f",&r);
    daire.alan=pi*pow(r,2);
    printf("Alan : %.2f |||",daire.alan);
    daire.cevre=2*pi*r;
     printf("Cevre : %.2f",daire.cevre);
}
