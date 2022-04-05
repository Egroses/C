#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* rakamlar[] = {"", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};
char* basamaklar[] = {"", "bin", "milyon", "milyar", "trilyon", "katrilyon"};
char* onluklar[] = {"","on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan"};


void yuzluk_bul(char* string)// gelen say�n�n y�zl�k, onluk ve birlik de�erlerini buldurma.
{
  int basamak = strlen(string);
  if(basamak == 4)
  {
        int bir, on, yuz;
        yuz = string[0] - '0';// tip d�n���m� yap�l�yor. char karakter int hale getiriliyor.
        on = string[1] - '0';// tip d�n���m� yap�l�yor. char karakter int hale getiriliyor.
        bir = string[2] - '0';// tip d�n���m� yap�l�yor. char karakter int hale getiriliyor.
        char str1[20];
        if(yuz != 1) // De�er e�er y�z ise 1 y�z yazd�rmamak i�in kontrol sa�lan�yor.
        {
          strcpy(str1, rakamlar[yuz]);// 1 de�ilse rakamlardan ilgili rakam�n kelime kar��t� kopyalan�yor. Ard�ndan "y�z" ifadesi kopyalan�yor.
          strcat(str1, " yuz");
        }

        else
        {
          strcpy(str1, "yuz");// de�er 1 ise direk yazd�r�l�yor.
        }

        printf("%s %s %s", str1,  onluklar[on], rakamlar[bir]);// str1 i�erisinde y�zler basama��na ait bilgi mevcut. Di�er de�erler ilgili dizilerden �ekilip yazd�r�l�yor.
  }

  else if(basamak == 2)
  {
        int on, bir;
        on = string[0] - '0';// tip d�n���m� yap�l�yor. char karakter int hale getiriliyor.
        bir = string[1] - '0';// tip d�n���m� yap�l�yor. char karakter int hale getiriliyor.
        printf("%s %s", onluklar[on], rakamlar[bir]);// de�erler ilgili dizilerden �ekilip yazd�r�l�yor.
  }

  else if(basamak == 1)// gelen say� tek basamakl� ise �rn 1234567 say�s�ndaki 1 de�eri.
  {
        int bir;
        bir = string[0] - '0';
        printf("%s", rakamlar[bir]);// de�erler ilgili dizilerden �ekilip yazd�r�l�yor.
  }

}

void bul(char* string)
{
  int i, j;
  char tmp[3];
  int basamak = strlen(string);

  int ucluk_adet = basamak / 3;// say�daki 3 karakterden olu�an b�l�mler bulunur.
  if(ucluk_adet == 0)// e�er say� tam 3 basamakl� ise direk yazd�r�l�r.
  {
    yuzluk_bul(string);
  }

  else// de�ilse par�alanarak i�lemlere sokulur.4567
  {
    for(i = 0; i < ucluk_adet; i++)
    {
      if(i == 0 && basamak == 4)// say� 4 basamakl� ise direk ekrana bin de�eri yazd�r�l�r.
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

      if(i == 0 && basamak % 3 != 0)// basamak say�s� 3 �n kat� de�il ve ilk i�lem.
      {
        ucluk_adet++;
        strncpy(tmp, string, (basamak % 3)); // �rn 1234567 , basamak say�s�=7 , 3 e b�l�m�nden kalan =1, i=0 ==> string + (0*3),1, Yani 0 dan ba�la 1 karakter git. Al�nan de�er 1 tmp i�ine at.
      }

      else if(basamak % 3 != 0)// basamak say�s� 3 �n kat� de�ilse.
      {
        strncpy(tmp, string + (i * 3) - (3 - basamak % 3), 3);// i=1, 1*3-(3-1)=1'den itibaren 3 karakter ==> 1234567 i�in 234 de�erleri al�n�r.
																// i= 2, 2*3-(3-1)=4'ten itibaren 3 karakter==> 1234567 i�in 567 de�erleri al�n�r.
      }

      else
      {
        strncpy(tmp, string + (i * 3), 3);
      }

      yuzluk_bul(tmp);
      printf(" %s ", basamaklar[ucluk_adet - i - 1]);// basamak de�eri yazd�r�l�r. �rn say� = 1234567 ise ucluk adet=2
	  												// 1 de�eri ile i�lem yap�l�rken uclukadet++; 1 art�r�l�r.
													  //i=0 i�in = 3-0-1=2, basamaklar dizisinin 2 numaral� eleman� "milyon" ekrana yazd�r�l�r. Bir "milyon"
													  //i=1 i�in =3-1-1=1, basamaklar dizinin 1 numaral� eleman� "bin ekrana yazd�r�l�r." iki y�z otuz d�rt "bin"
													  //i=2 i�in =3-2-1=0, basamaklar dizisinin 0 numaral� eleman� ""(bo�)". be� y�z altm�� yedi."" ekrana yazd�r�l�r.
													  // sonu�ta ekranda Bir "milyon" iki y�z otuz d�rt "bin" be� y�z altm�� yedi. yazar.
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
