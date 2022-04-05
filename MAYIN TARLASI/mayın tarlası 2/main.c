#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#define Tarla_boyutu 8
#define Mayin_sayisi 3
#define kazandirici 1
#define kaybettirici -1
#define devam_ettirici 0


int alt_tablo_global[Tarla_boyutu][Tarla_boyutu];
char tablo_global[Tarla_boyutu][Tarla_boyutu];
int bayrak=0;
int bayrak_sayaci=0;

int main()
{
    int satir,yeniden,kolon,ilerleme;
    char aksiyon;


    printf("    MAYIN TARLASINDAN GECMEK UZERESINIZ!\n");
    alt_tablo_olustur();
    tablo_olustur();
    do
    {
        printf("\n\n");
        tablo_bastirici();
        printf("\n\nLutfen su formatta giriniz: (a,b,c),satir,kolon ;");
        scanf("%c,%d,%d",&aksiyon,&satir,&kolon);
        satir--;
        kolon--;
        if(aksiyon=='a')
        {
            ilerleme=kazici(satir,kolon);
        }
        else if(aksiyon=='b')
        {
            if(Mayin_sayisi>=bayrak_sayaci)
            {
                bayrak_sayaci++;
                tablo_global[satir][kolon]='B';
                ilerleme=oyun_kontrol();
            }
        }
        else if(aksiyon=='c')
        {
            if(bayrak_sayaci>0)
            {
                bayrak_sayaci--;
            }
            tablo_global[satir][kolon]='#';
            ilerleme=oyun_kontrol();
        }

        if(ilerleme==kaybettirici)
        {
            printf("\n\nOYUN KAYBEDILDI\n");
            alt_tablo_bastir();
            printf("\nOyunu yeniden oynamak istiyor musunuz (evet=1,hayir=0)?");
            scanf("%d",&yeniden);
            switch(yeniden)
            {
                case 0:printf("iyi gunler.");
                    return 0;
                    break;
                case 1:bayrak_sayaci=0;
                    ilerleme=devam_ettirici;
                    alt_tablo_olustur();
                    tablo_olustur();
                    break;
                default:printf("Yanlis bir deger girdiniz!");
                    break;
            }
        }
        else if(ilerleme==kazandirici)
        {
            printf("\n\nOYUN KAZANILDI\n");
            printf("\nOyunu yeniden oynamak istiyor musunuz (evet=1,hayir=0)?");
            scanf("%d",&yeniden);
            switch(yeniden)
            {
                case 0:printf("iyi gunler.");
                    return 0;
                    break;
                case 1:bayrak_sayaci=0;
                    ilerleme=devam_ettirici;
                    alt_tablo_olustur();
                    tablo_olustur();
                    break;
                default:printf("Yanlis bir deger girdiniz!");
                    break;
            }
        }


    }while(1);
    return 0;
}

void alt_tablo_olustur()
{
    for(int i=0;i<=Tarla_boyutu;i++)
    {
        for(int j=0;j<=Tarla_boyutu;j++)//+2
        {
            alt_tablo_global[i][j]=0;
        }
    }
//    for(int i=0;i<=Tarla_boyutu+1;i++)
//    {
//        alt_tablo_global[i][0]=1;
//        alt_tablo_global[i][Tarla_boyutu+1]=1;
//    }
//    for(int j=0;j<=Tarla_boyutu+1;j++)
//    {
//        alt_tablo_global[j][0]=1;
//        alt_tablo_global[j][Tarla_boyutu+1]=1;
//    }
    mayin_yerlestir();

}


void tablo_olustur()
{
    for(int i=0;i<=Tarla_boyutu;i++)
    {
        for(int j=0;j<=Tarla_boyutu;j++)//+2
        {
            tablo_global[i][j]='#';
        }
    }
//    for(int i=0;i<=Tarla_boyutu+1;i++)
//    {
//        tablo_global[i][0]='*';
//        tablo_global[i][Tarla_boyutu+1]='*';
//    }
//    for(int j=0;j<=Tarla_boyutu+1;j++)
//    {
//        tablo_global[j][0]='*';
//        tablo_global[j][Tarla_boyutu+1]='*';
//    }

}


void tablo_bastirici()
{
    printf("\t");
    for(int i=1;i<Tarla_boyutu+1;i++)
        printf("  %d",i);
    printf("\n\t");
    for(int i=1;i<Tarla_boyutu+1;i++)
        printf("----");

    for(int i=0;i<Tarla_boyutu;i++)
    {
        printf("\n\t|");
        for(int j=0;j<Tarla_boyutu;j++)
        {
            printf("%3c",tablo_global[i][j]);
        }
        printf("  |%d   |",i+1);
    }
    printf("\n\t");
    for(int i=1;i<Tarla_boyutu+1;i++)
        printf("----");
}

void alt_tablo_bastir()
{
    printf("\t");
    for(int i=1;i<Tarla_boyutu+1;i++)
        printf("  %d",i);
    printf("\n\t");
    for(int i=1;i<Tarla_boyutu+1;i++)
        printf("----");

    for(int i=0;i<Tarla_boyutu;i++)
    {
        printf("\n\t|");
        for(int j=0;j<Tarla_boyutu;j++)
        {
            printf("%3d",alt_tablo_global[i][j]);
        }
        printf("  |%d   |",i);
    }
    printf("\n\t");
    for(int i=1;i<Tarla_boyutu+1;i++)
        printf("----");
}

void mayin_yerlestir()
{
    int mayin_satir;
    int mayin_kolon;

    srand(time(NULL));
    for(int mine=0;mine<Mayin_sayisi;mine++)
    {
        mayin_kolon=1+rand()%Tarla_boyutu;
        mayin_satir=1+rand()%Tarla_boyutu;
        if(alt_tablo_global[mayin_satir][mayin_kolon]==-1)
        {
            mine--;
        }
        alt_tablo_global[mayin_satir][mayin_kolon]=-1;
        for(int k=-1;k<=1;k++)
        {
            for(int p=-1;p<=1;p++)
            {
                if(alt_tablo_global[mayin_satir][mayin_kolon]==-1)
                    if(alt_tablo_global[mayin_satir+k][mayin_kolon+p]!=-1)
                        alt_tablo_global[mayin_satir+k][mayin_kolon+p]++;
            }
        }
    }
}





void arastirma(int satir,int kolon)
{
    tablo_global[satir][kolon]='0'+alt_tablo_global[satir][kolon];
    for(int k=-1;k<=1;k++)
    {
        for(int p=-1;p<=1;p++)
        {
            if(alt_tablo_global[satir+k][kolon+p]>0&&tablo_global[satir+k][kolon+p]=='#')
            {
                tablo_global[satir+k][kolon+p]='0'+alt_tablo_global[satir+k][kolon+p];
            }
            else if(alt_tablo_global[satir+k][kolon+p]==0&&tablo_global[satir+k][kolon+p]=='#')
            {
                arastirma(satir+k,kolon+p);
            }

        }
    }
}


int kazici(int satir,int kolon,int durum)
{
    durum=0;
    if(alt_tablo_global[satir][kolon]==-1)
        durum=kaybettirici;

    else if(alt_tablo_global[satir][kolon]>0)
    {
        tablo_global[satir][kolon]='0'+alt_tablo_global[satir][kolon];
        durum=oyun_kontrol();
        durum=devam_ettirici;
    }
    else
    {
        arastirma(satir,kolon);
    }

    return durum;
}

void oyun_kontrol()
{
    int statu;
    for(int i=0;i<Tarla_boyutu;i++)
    {
        for(int j=0;j<Tarla_boyutu;j++)
        {
            if(tablo_global[i][j]=='B')
            {
                if(alt_tablo_global[i][j]==-1)
                {
                    bayrak++;
                }
            }
        }
    }
    if(bayrak==Mayin_sayisi)
    {
        statu=kazandirici;
    }

    else
        statu=devam_ettirici;

    bayrak=0;
    return statu;
}

