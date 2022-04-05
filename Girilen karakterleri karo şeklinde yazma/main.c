#include <stdio.h>
#include <stdlib.h>

void karo(char harf1,char harf2)
{
    int yatayuzunluk,n,i,a,bosluk,c,d,e;

    printf("Karonun yatayi kac harf uzunlugunda olsun(tek sayi)?\n");
    scanf("%d",&yatayuzunluk);

    n=yatayuzunluk;
    d=n;
    a=n;
	bosluk=(n-1)/2;
	c=bosluk;
    if(n%2!=0)
    {

        for(i=n;i>=1;i=i-2)
        {

        	while(bosluk>=1)
        	{
        		printf(" ");
        		bosluk--;
			}
			c=c-1;
			bosluk=c;


			while(a<=n)
			{
				printf("%c",harf1);
				a++;
			}

			d=d-2;
			a=d;
			printf("\n");
		}

		n=yatayuzunluk;
   		d=n;
   		a=n;
		bosluk=(n-1)/2;
		c=bosluk;
		e=bosluk;

		for(i=n-2;i>=1;i=i-2)
        {

        	while(bosluk>=c)
        	{
        		printf(" ");
        		c++;
			}
			e=e-1;
			c=e;

			n=n-2;
			while(n>=1)
			{
				printf("%c",harf2);
				n--;
			}
			d=d-2;
			n=d;
			printf("\n");
		}
    }

    else
    {
        printf("Hatali yatay uzunlugu girdiniz!\n");
    }

}

int main()
{
    char harf1,harf2;

    printf("Karonun ust ve alt tarafinda olmasini istediginiz harfi giriniz;\n");
    scanf("%c %c",&harf1,&harf2);

    karo(harf1,harf2);
}
