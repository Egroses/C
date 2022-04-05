#include <stdio.h>
#include <stdlib.h>

int main()
{

    //KESÝRLÝ DÝZÝ SORUSU 1/X2+3/X4...
        int a;
        float b;
        int c;
        float d;
        char f;

        do
        {
        printf("Dizinin kac terimli olmasini istersiniz?\n");
        scanf("%d",&a);
        printf("\n");
        printf("X'e bir deger atayiniz.\n");
        scanf("%f %c",&d,&f);

        b=0;
        for(c=1;c<=2*a-1;c+=2)
        {
            b+=c/pow(d,c+1);
        }

        printf("Dizinin %d. terime kadar olan degerlerin toplami = %f.",a,b);
        }while((f=='E')||(f=='e'));
        printf("Hoscakalin!");

}
