#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct ogrenci
    {
        int no;
        char name[20];
        char surname[20];
        int age;
    };

    struct ogrenci ogrenci1,ogrenci2;

    ogrenci1.no=522;
    strcpy(ogrenci1.name,"Can");
    strcpy(ogrenci1.surname,"Boz");
    ogrenci1.age=18;

    ogrenci2=ogrenci1;

    printf("%d %s %s %d",ogrenci2.no,ogrenci2.name,ogrenci2.surname,ogrenci2.age);

}
