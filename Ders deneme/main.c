#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* rakamlar[] = {"", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};
char* basamaklar[] = {"", "bin", "milyon", "milyar", "trilyon", "katrilyon"};
char* onluklar[] = {"","on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan"};


void yuzluk_bul(char* string)// gelen sayýnýn yüzlük, onluk ve birlik deðerlerini buldurma.
{
  int basamak = strlen(string);
  if(basamak == 4)
  {
        int bir, on, yuz;
        yuz = string[0] - '0';// tip dönüþümü yapýlýyor. char karakter int hale getiriliyor.
        on = string[1] - '0';// tip dönüþümü yapýlýyor. char karakter int hale getiriliyor.
        bir = string[2] - '0';// tip dönüþümü yapýlýyor. char karakter int hale getiriliyor.
        char str1[20];
        if(yuz != 1) // Deðer eðer yüz ise 1 yüz yazdýrmamak için kontrol saðlanýyor.
        {
          strcpy(str1, rakamlar[yuz]);// 1 deðilse rakamlardan ilgili rakamýn kelime karþýtý kopyalanýyor. Ardýndan "yüz" ifadesi kopyalanýyor.
          strcat(str1, " yuz");
        }

        else
        {
          strcpy(str1, "yuz");// deðer 1 ise direk yazdýrýlýyor.
        }

        printf("%s %s %s", str1,  onluklar[on], rakamlar[bir]);// str1 içerisinde yüzler basamaðýna ait bilgi mevcut. Diðer deðerler ilgili dizilerden çekilip yazdýrýlýyor.
  }

  else if(basamak == 2)
  {
        int on, bir;
        on = string[0] - '0';// tip dönüþümü yapýlýyor. char karakter int hale getiriliyor.
        bir = string[1] - '0';// tip dönüþümü yapýlýyor. char karakter int hale getiriliyor.
        printf("%s %s", onluklar[on], rakamlar[bir]);// deðerler ilgili dizilerden çekilip yazdýrýlýyor.
  }

  else if(basamak == 1)// gelen sayý tek basamaklý ise Örn 1234567 sayýsýndaki 1 deðeri.
  {
        int bir;
        bir = string[0] - '0';
        printf("%s", rakamlar[bir]);// deðerler ilgili dizilerden çekilip yazdýrýlýyor.
  }

}

void bul(char* string)
{
  int i, j;
  char tmp[3];
  int basamak = strlen(string);

  int ucluk_adet = basamak / 3;// sayýdaki 3 karakterden oluþan bölümler bulunur.
  if(ucluk_adet == 0)// eðer sayý tam 3 basamaklý ise direk yazdýrýlýr.
  {
    yuzluk_bul(string);
  }

  else// deðilse parçalanarak iþlemlere sokulur.4567
  {
    for(i = 0; i < ucluk_adet; i++)
    {
      if(i == 0 && basamak == 4)// sayý 4 basamaklý ise direk ekrana bin deðeri yazdýrýlýr.
      {
        ucluk_adet++;
        if(string[0] - '0'!=1)
        {
            printf("%d",rakamlar[string[0] - '0']);
            printf("bin ");
		}

		else
        {
            printf("bin ");
		}

        continue;
      }

      if(i == 0 && basamak % 3 != 0)// basamak sayýsý 3 ün katý deðil ve ilk iþlem.
      {
        ucluk_adet++;
        strncpy(tmp, string, (basamak % 3)); // Örn 1234567 , basamak sayýsý=7 , 3 e bölümünden kalan =1, i=0 ==> string + (0*3),1, Yani 0 dan baþla 1 karakter git. Alýnan deðer 1 tmp içine at.
      }

      else if(basamak % 3 != 0)// basamak sayýsý 3 ün katý deðilse.
      {
        strncpy(tmp, string + (i * 3) - (3 - basamak % 3), 3);// i=1, 1*3-(3-1)=1'den itibaren 3 karakter ==> 1234567 için 234 deðerleri alýnýr.
																// i= 2, 2*3-(3-1)=4'ten itibaren 3 karakter==> 1234567 için 567 deðerleri alýnýr.
      }

      else
      {
        strncpy(tmp, string + (i * 3), 3);
      }

      yuzluk_bul(tmp);
      printf(" %s ", basamaklar[ucluk_adet - i - 1]);// basamak deðeri yazdýrýlýr. Örn sayý = 1234567 ise ucluk adet=2
	  												// 1 deðeri ile iþlem yapýlýrken uclukadet++; 1 artýrýlýr.
													  //i=0 için = 3-0-1=2, basamaklar dizisinin 2 numaralý elemaný "milyon" ekrana yazdýrýlýr. Bir "milyon"
													  //i=1 için =3-1-1=1, basamaklar dizinin 1 numaralý elemaný "bin ekrana yazdýrýlýr." iki yüz otuz dört "bin"
													  //i=2 için =3-2-1=0, basamaklar dizisinin 0 numaralý elemaný ""(boþ)". beþ yüz altmýþ yedi."" ekrana yazdýrýlýr.
													  // sonuçta ekranda Bir "milyon" iki yüz otuz dört "bin" beþ yüz altmýþ yedi. yazar.
    }
  }

  printf("\n");
}

int main()
{
  char* sayi = (char*)malloc(sizeof(char) * 20);
  printf("%s", "Bir sayi giriniz: ");
  gets(sayi);
  bul(sayi);
  return 0;
}
