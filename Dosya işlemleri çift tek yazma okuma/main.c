#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    FILE *blal;
//    blal=fopen("tek cift.txt","w");
//    int i,N;
//    char bilgi[100],*bastirma;
//    printf("Bir N dogal sayisi giriniz :");
//    scanf("%d",&N);
//    for(i=0;i<=N;i++)
//    {
//        if(i%2==0)
//            fprintf(blal,"%d = cift\n",i);
//        else
//            fprintf(blal,"%d = tek\n",i);
//    }
//    fclose(blal);
//    printf("Bilgiler kaydediliyor...\nDoysalar okunuyor...\n");
//    blal=fopen("tek cift.txt","r");
//    do
//    {
//        bastirma=fgets(bilgi,100,blal);
//        if(bastirma!=NULL)
//            printf("%s",bastirma);
//    }while(bastirma!=NULL);
//    fclose(blal);
//}

int main()
{
    FILE *blal;

    int i,N;
    char bilgi[100],*bastirma,kullanici_adi[20];

    printf("kullanici :");
    scanf("%s",&kullanici_adi);
    printf("Bilgiler kaydediliyor...\nDoysalar okunuyor...\n");
    blal=fopen("tek cift.txt","r");
    bastirma=fgets(bilgi,100,blal);
    printf("%s\n",bastirma);
    printf("%s\n",kullanici_adi);
    if(kullanici_adi=='esma')
        printf("dogru");
    else
        printf("yanlis");

    fclose(blal);
}
