#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi1[10], dizi2[10], i, j, tekrar, n = 10;

    printf("Hos geldiniz, bu programin amaci girilen dizilerdeki tekrar eden sayilari bulup diziden cikartmaktir ;\n\n");

    srand(time(0));

    printf("Dizinin ilk hali;\n");

    for (i = 0; i < n; i++)
    {
        dizi1[i] = + rand() % 20 + 1;
        printf(" %d ", dizi1[i]);
    }


    for (j = 0; j < n; j++)
    {
        for (i = j+1; i < n; i++)
        {
            if (dizi1[i] == dizi1[j])
            {
                for (i=i ; i < n;i++)
                {
                    dizi1[i] = dizi1[i + 1];
                }
                n--;
            }
        }
    }

    printf("\n\nDizinin tekrarsiz hali;\n");

    for (j = 0; j < n; j++) {
        printf(" %d ", dizi1[j]);
    }

    printf("\n\n\nBizi tercih ettiginiz icin tesekkur eder iyi gunler dileriz.");
    printf("\n\n\-Emirhan Gul\n\n\n\n");
}
