#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<unistd.h>

int main(){
	int i,j=0,k=0,x,a=0,b=0,sayac=0,hak;
	int memory[12];
	char welcome[100]="Adam Asmacaya Hosgeldiniz...";
	char tahmin[12];
	char hafiza[12];
	for(i=0;welcome[i]!='\0';i++)
		printf("%c",welcome[i]);
	sleep(2);
	system("cls");
	for(i=0;i<12;i++)
		memory[i]=-1;
	bool control=false;
	char kontrol;
	char names[20][12]={{"ankara"},{"muhittin"},{"zencefil"},{"edirne"},{"timsah"},{"lamba"},{"bilgisayar"},{"semsettin"}
	,{"patates"},{"adana"},{"klavye"},{"araba"},{"antalya"},{"hipopotam"},{"ayakkabi"},{"kulaklik"},{"recai"},{"fare"}
	,{"anahtar"},{"istanbul"}};
	srand(time(NULL));
	x=rand()%20;
	for(i=0;names[x][i]!='\0';i++)
	sayac++;
	hak=sayac*2;
	for(i=0;i<sayac;i++)
		printf("_");
	printf(" (%d hakkiniz kaldi eger tahmin etmek istiyorsaniz 1'e basin.)\n",hak);
	while(hak>0&&control==false){
		kontrol=getch();
		if(kontrol=='1'){
			gets(tahmin);
			for(i=0;i<sayac;i++){
				if(names[x][i]==tahmin[i])
					a++;
				k++;
			}
		}
		system("cls");
		if(a!=sayac){
			for(i=0;i<sayac;i++){
				if(memory[i]==i){
					printf("%c",hafiza[i]);
				}else if(names[x][i]==kontrol){
					printf("%c",kontrol);
					memory[i]=i;
					hafiza[i]=kontrol;
					b++;
				}else{
					printf("_");
					k++;
				}
			}
		}
		if(b==0)
			hak--;
		if(k==0||a==sayac){
			system("cls");
			printf("%s\n\nTEBRIKLER==>BULDUNUZ!!",names[x]);
			control=true;
		}else
			printf(" (%d hakkiniz kaldi eger tahmin etmek istiyorsaniz 1'e basin.)\n",hak);
		k=0;
		a=0;
		b=0;
	}
	if(control==false)
		printf("\nMaalesef...%s kelimesini bulamadiniz.",names[x]);
}
