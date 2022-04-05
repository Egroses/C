#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float a,b;
}karisik;

int main()
{
    karisik sayi1,sayi2,sonuc;
    char op;

    printf("Lutfen yapmak istediginiz islemi giriniz;\n");
    scanf("%c",&op);

    printf("Birinci karmasik sayinizi giriniz ;\n");
    scanf("%f%f",&sayi1.a,&sayi1.b);

    printf("Ikinci karmasik sayinizi giriniz ;\n");
    scanf("%f%f",&sayi2.a,&sayi2.b);

    if(op == '+')
    {
        sonuc.a=sayi1.a+sayi2.a;
        sonuc.b=sayi1.b+sayi2.b;
    }

    else if(op == '-')
    {
        sonuc.a=sayi1.a-sayi2.a;
        sonuc.b=sayi1.b-sayi2.b;
    }

    printf("Sonuc:\n");
    printf("%.2f",sonuc.a);

    if(sonuc.b<0)
    {
        printf("%.2fi",sonuc.b);
    }

    else if(sonuc.b>0)
    {
        printf("+ %.2fi",sonuc.b);
    }


}
