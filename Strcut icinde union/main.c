#include <stdio.h>
#include <stdlib.h>

struct degerTip{
int tur;
union{

char karakter;
float reel;

}bir;
};

int main()
{
    struct degerTip degerler[20];
    int i = -1;
    float ort=0;
    do{
        i++;
        printf("Bir tamsayi giriniz ; ");
        scanf("%d",&degerler[i].tur);
        printf("\n");

        if(degerler[i].tur== 1)
        {
            printf("bir karakter giriniz ; ");
            scanf("%s",&degerler[i].bir.karakter);
            printf("\n");
        }

        else if(degerler[i].tur== 0)
        {
            printf("bir reel sayi giriniz ; ");
            scanf("%f",&degerler[i].bir.reel);
            ort += degerler[i].bir.reel;
            printf("\n");
        }

    }while(degerler[i].tur == 0 || degerler[i].tur == 1);

    ort = ort / i;
    printf("Reel sayilarin ortalamasi : %f",ort);
}
