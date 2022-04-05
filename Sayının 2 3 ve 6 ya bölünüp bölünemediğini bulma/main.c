#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int i=0;

    printf("Lutfen bi sayi giriniz ve 2,3 veya 6 ya bolunup bolunemedigini gorunuz.\n");
    scanf("%d",&sayi);

    printf("\n");

    while(i<7)
    {
        if(i==2)
        {
            if(sayi%2==0)
            {
                printf("Sayi ikiye tam bolunebilir.\n");
            }
            else
            {
                printf("Sayi ikiye tam bolunemez.\n");
            }
            printf("\n");
        }

        if(i==3)
        {
            if(sayi%i==0)
            {
                printf("Sayi uce tam bolunebilir.\n");
            }
            else
            {
                printf("Sayi uce tam bolunemez.\n");
            }
            printf("\n");
        }
        if(i==6)
        {
            if(sayi%i==0)
            {
                printf("Sayi altiya tam bolunebilir.\n");
            }
            else
            {
                printf("Sayi altiya tam bolunemez.\n");
            }
            printf("\n");
        }
        i++;

    }

}
