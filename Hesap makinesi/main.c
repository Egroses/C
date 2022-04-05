#include <stdio.h>
#include <stdlib.h>

int main()
{

        char poc;

        float c,k;

        printf("What do you want do?\n");
        scanf("%c",&poc);

        printf("What is your numbers?\n");
        scanf("%f %f",&c,&k);

        switch(poc)
        {

    //        case '%':printf("The Remainder is %d.",c % k);
    //        break; //yanlis oldu

            case '*':printf("Their multiplication is %f.",c*k);
            break;

            case '/':printf("Their division is %f.",c/k);
            break;

            case '+':printf("Their addition is %f.",c+k);
            break;

            case '-':printf("Their subtraction is %f.",c-k);
            break;
        }
}
