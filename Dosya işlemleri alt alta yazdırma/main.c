#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char isim[30];
    int N,i;
    dosya=fopen("Ogrenci.txt","w");
    if(dosya==NULL)
    {
        printf("Dosya olusturulamadi!");
    }
    else
    {
        printf("Listede kac ogrenci bulunacak :");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            printf("Ogrenci ismi :");
            scanf("%s",&isim);
            fprintf(dosya,"Ogrenci No :%d | isim :%s\n",i,isim);
        }
    }
    fclose(dosya);

}
