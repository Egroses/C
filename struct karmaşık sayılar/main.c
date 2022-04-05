#include <stdio.h>
#include <stdlib.h>

typedef struct a{
    float sanal,reel;
}karmasik;

void topla(karmasik k1,karmasik k2,karmasik *toplam)
{
    toplam->reel=k1.reel+k2.reel;
    toplam->sanal=k1.sanal+k2.sanal;
    printf("\n\nSonuc = %.2f + %.2fi",toplam->reel,toplam->sanal);
}

int main()
{
    karmasik n1,n2,bursa;

    printf("1. karmasik sayinin once reel sonra sanal kismini giriniz ; \n");
    scanf("%f%f",&n1.reel,&n1.sanal);

    printf("2. karmasik sayinin once reel sonra sanal kismini giriniz ; \n");
    scanf("%f%f",&n2.reel,&n2.sanal);

    topla(n1,n2,&bursa);

}
