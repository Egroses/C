#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[150];
    int i=0;
    int encok;
    char harf;
    int kucukharf[26]= {0};
    printf("Lutfen bir cumle giriniz.\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]>='a' && cumle[i]<='z')
        {
            kucukharf[cumle[i]-'a']++;
        }
        i++;
    }
    encok=kucukharf[0];
    for(i=1;i<26;i++)
    {
        if(kucukharf[i] != 0)
        {
            if(kucukharf[i]>encok)
            {
               encok=kucukharf[i];
               harf=i+'a';
            }
        }
    }
    printf("En fazla kullanýnlan harf : %c",harf);

    printf("Cumlede en fazla bulunan harf :%s ",harf);
}
*********************************************** hatalý
