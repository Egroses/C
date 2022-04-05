#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sayi;
    printf("Pozitif bir sayi giriniz;\n");
    do
    {
        scanf("%f",&sayi);

        if(sayi<0)
        {
            printf("\n");
            printf("Lutfen pozitif bir sayi giriniz;\n");
        }

        if(sayi<0)continue;
        printf("Sayinizin karekoku = %f\n",sqrt(sayi));
        printf("\n");
        if(sayi>0)
        {
            printf("Ogrenmek istediginiz bir diger sayiyi giriniz;\n");
        }
    }
    while(sayi);
    printf("Hatali girdiniz!");
}
