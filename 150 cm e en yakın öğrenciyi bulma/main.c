#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        int b;
        int boy,no,boyy,noy,fark;
        char f;

        printf("Sifirdan buyuk bir ogrenci no giriniz.\n");
        scanf("%d",&no);
        if(no>0)
        {
            printf("%d nolu ogrencinin boyunu giriniz.\n",no);
            scanf("%d",&boy);

            if(boy>0)
            {
                boyy=boy;
                noy=no;
                fark=abs(boy-150);

                do
                {
                printf("Sifirdan buyuk bir ogrenci no giriniz.\n");
                scanf("%d",&no);
                if(no<=0)
                {
                    printf("Hatali ogrenci no!\n");
                    break;
                }
                printf("%d nolu ogrencinin boyunu giriniz.\n",no);
                scanf("%d",&boy);
                if(boy<=0)
                {
                    printf("Hatali boy!\n");
                    break;
                }

                else if((boy!=boyy)&&(no==noy))
                {
                    printf("Ayni ogrencinin 2 farkli boyu olamaz!\n");
                    break;
                }
                if((abs(boy-150)<fark)&&(no>0))
                {
                    fark=abs(boy-150);
                    noy=no;
                    boyy=boy;
                }
                }while(no>0);
                if(((boy==boyy)&&(no==noy))||(no!=noy))
                {
                printf("150cm e en yakin boy, %d cm boyuyla %d nolu ogrencidir.",boyy,noy);
                }
            }

            else if(boy<=0)
            {
                printf("Hatali boy!");
            }
        }
        else if(no<=0)
        {
            printf("Hatali ogrenci no!");
        }
}
