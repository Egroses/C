
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

//Constantes
#define TAILLE_TABLEAU 8 //Taille de tableua
#define NORMALE 3  //Nombre de mine qu'on peut changer comme notre volonté
#define GAGNER 1   //Quant on gange le jeux
#define PERDU -1  //Quant om perde le jeux
#define CONTINUE 0   //On continue le jeux

//Variables globales
char tab[TAILLE_TABLEAU+2][TAILLE_TABLEAU+2];    //le caractere qu'on se voit
int soustab[TAILLE_TABLEAU+2][TAILLE_TABLEAU+2];   //il ya des mines et voisine de mines
int nb_mine,y=0;    //nombre de mines
int d_count = 0;

//Fontions utilisÃ©es
void creer_soustableau();
void initialiser_tableau();
void afficher_soustableau();
void afficher_tableau();
void placer_mines();
int verifiermatchgagner();
void explorer(int ligne,int colonne);
int creuser(int ligne,int colonne);




int main(void)
{
  int ligne,colonne;
    int ilerleme;
    int yeniden;
    char action;//Hangi harf

    printf("Mayin Tarlasi oyunumuza hosgeldiniz\n");
    creer_soustableau();
    initialiser_tableau();
    do
    {
        afficher_tableau();
        printf("\n");
        printf("Lutfen su formatta giriniz: c,ligne,colonne veya d,ligne,colonne veya e,ligne,colonne\n");
        scanf("%c,%d,%d",&action,&ligne,&colonne);
        printf("\n");

        if(action == 'c')
        {

            ilerleme=creuser(ligne,colonne);
        }
        else if(action == 'd')
        {
            if(nb_mine >d_count)
            {
                d_count++;
                tab[ligne][colonne]='D';
                ilerleme=verifiermatchgagner();
            }
        }
        else if(action == 'e')
        {
            if(d_count>0)
            {
                d_count--;
            }
            tab[ligne][colonne]='#';
            ilerleme=creuser(ligne,colonne);
        }


        if(ilerleme==PERDU)
        {
            printf("Arkadasim oyunu kaybettin \n");
            afficher_soustableau();
            printf("Oyunu yendiden oynamak istiyorusunuz? [1-Evet][0-Hayir] \n");
            scanf("%d",&yeniden);
            switch(yeniden)
            {
            case 0:
                printf("Tesekkürler Gorusuruz\n");
                return 0;
                break;
            case 1:
                d_count=0;
                ilerleme=CONTINUE;
                creer_soustableau();
                initialiser_tableau();
                break;
            default: printf("Yanlis bir deger girdiniz\n");
                break;
            }
        }

        if(ilerleme==GAGNER)
        {
            printf("Bravo Harika bir is cikardin\n");
            afficher_soustableau();
            printf("Oyunu yendiden oynamak istiyorusunuz? [1-Evet][0-Hayir] \n");
            scanf("%d",&yeniden);
            switch(yeniden)
            {
            case 0:
                printf("Tesekkürler Gorusuruz\n");
                return 0;
                break;
            case 1:
                d_count=0;
                ilerleme=CONTINUE;
                creer_soustableau();
                initialiser_tableau();
                break;
            default:
                printf("Yanlis bir deger girdiniz\n");
                break;
            }

        }

    }
    while(1);
    return 0;

}

void creer_soustableau()
{
	int i,j,nb_mine;


	//CrÃ©ation du sous-tableau
	for(i=0;i<=TAILLE_TABLEAU+1;i++)
	{
		for(j=0;j<=TAILLE_TABLEAU+1;j++)
		{
			soustab[i][j]= 0;
		}
	}
	for(i=0;i<=TAILLE_TABLEAU;i++)//Encadrement du sous-tableau
	{
		soustab[i][0]= 1;
		soustab[i][TAILLE_TABLEAU+1]= 1;
	}
	for(j=0;j<=TAILLE_TABLEAU;j++)
	{
		soustab[0][j]= 1;
		soustab[TAILLE_TABLEAU+1][j]= 1;
	}
    nb_mine =NORMALE;
	placer_mines();

}

void initialiser_tableau()
{
	int i,j;

	//CrÃ©ation du tableau
	for(i=0;i<=TAILLE_TABLEAU+1;i++)
	{
		for(j=0;j<=TAILLE_TABLEAU+1;j++)

			tab[i][j]= '#';
		}
	for(i=0;i<=TAILLE_TABLEAU;i++)
		{
			tab[i][0]= '*';
			tab[i][TAILLE_TABLEAU+1]= '*';
		}
	for(j=0;j<=TAILLE_TABLEAU;j++)
		{
			tab[0][j]= '*';
			tab[TAILLE_TABLEAU+1][j]= '*';
		}

}

void afficher_tableau(){
	int i,j;

	printf("\n");
	//On numÃ©rote les colonnes
	for(i=1;i<=TAILLE_TABLEAU;i++){
		printf("%3d",i);
	}
	printf("\n");

	//On dÃ©limite le haut du tableau
	for(i=1;i<=TAILLE_TABLEAU;i++){
		printf("---");
	}
	printf("\n");

	//On imprime le tableau sur l'Ã©cran
	for(i=1;i<=TAILLE_TABLEAU;i++){
		for(j=1;j<=TAILLE_TABLEAU;j++){
			printf("%3c",tab[i][j]);
		}
		printf(" |%d",i);	//On numÃ©rote les lignes
		printf("\n");
	}

	//On dÃ©limite le bas du tableau
	for(i=1;i<=TAILLE_TABLEAU;i++){
		printf("___");
	}
}

void afficher_soustableau(){
	int i,j;

	printf("\n");
	//On numÃ©rote les colonnes
	for(i=1;i<=TAILLE_TABLEAU;i++){
		printf("%3d",i);
	}
	printf("\n");

	//On dÃ©limite le haut du tableau
	for(i=1;i<=TAILLE_TABLEAU;i++){
		printf("---");
	}
	printf("\n");

	//On imprime le tableau sur l'Ã©cran
	for(i=1;i<=TAILLE_TABLEAU;i++){
		for(j=1;j<=TAILLE_TABLEAU;j++){
			printf("%3d",soustab[i][j]);
		}
		printf(" |%d",i);	//On alphabÃ©tise les lignes
		printf("\n");
	}

	//On dÃ©limite le bas du tableau
	for(i=1;i<=TAILLE_TABLEAU;i++){
		printf("___");
	}
	printf("\n");
}


void placer_mines()
{
	srand(time(NULL)); //Randoma tohum ver verki her çaly?tyrmada farkly sayylar üretsin
	int i,j,k,p,ligne,colonne;
	nb_mine = NORMALE;

		//Implantation des mines aleatoirement en fonction du niveau de difficultÃ©
		for(i=1;i<=nb_mine;i++)
		{
			ligne=1+rand()%TAILLE_TABLEAU;//On choisit la ligne de maniere aleatoire  //Rastgele bir tamsayynyn tablo boyuna göre kalanyny bulluyor
			colonne=1+rand()%TAILLE_TABLEAU;//On choisit la colonne de maniere aleatoire
			if(soustab[ligne][colonne]== -1) i--;//On fait un tour de plus si la case n'est pas libre //Burada mayyn varsa önceki adyma dön
			soustab[ligne][colonne]= -1;
                            for(k=-1;k<=1;k++){//Sol Orta Sa?
                                for(p=-1;p<=1;p++){//Üst Orta Alt
                                    if(soustab[ligne][colonne]==-1){//Bombaysa
                                    if(soustab[ligne+k][colonne+p]!=-1)//Kom?usu bomba de?ilse
                                    {
                                    soustab[ligne+k][colonne+p]++;//Çevresindeki bomba sayysyny 1 arttyr
                                    }
                            }
                        }
                    }

                }



        }









int verifiermatchgagner()
{
	int i,j,y=0,statut;
	for(i=1;i<=TAILLE_TABLEAU;i++)
	{
        for(j=1;j<=TAILLE_TABLEAU;j++)
        {
            if(tab[i][j]=='D')//On compte le nombre de drapeau posÃ©  //Bayraksa say
			{
                if(soustab[i][j]==-1)
                {
                    y++;
                }
			}

        }
	}
	if(y==NORMALE)//La somme des drapeaux posÃ©s et des cases non dÃ©couvertes est Ã©gale au nombre de mine //Bayraklaryn sayysyyla açylmamy?laryn
                                                                                    //sayysynyn toplamy bomba sayysyna e?itse
	{
		statut=GAGNER;
	}
	else
		statut=CONTINUE;

	return statut;
}

void explorer(int ligne, int colonne) {
	int i, j;


	tab[ligne][colonne] = '0' + soustab[ligne][colonne];//On dÃ©couvre la case sÃ©lectionnÃ©e //Alt tablodaki de?eri üst tabloya karakter olarak atyyoruz(açma operasyonu)
  //Tüm kom?ular için
	for (i = -1; i <= 1; i++) {
		for (j = -1; j <= 1; j++) {
			//Sayy varsa (kom?usu mayynlyysa)ve açyk de?ilse
			if (soustab[ligne + i][colonne + j] > 0 && tab[ligne + i][colonne + j] == '#')//On dÃ©couvre les cases adjacentes Ã  au moins une mine et non dÃ©couvertes
			{
				tab[ligne + i][colonne + j] = '0'+ soustab[ligne + i][colonne + j];//Kom?uyu aç
			}
			//Sayy 0 sa (kom?usu mayynsyzsa)
			else if (soustab[ligne + i][colonne + j] == 0 && tab[ligne + i][colonne + j] == '#')//On dÃ©couvre toutes les cases n'Ã©tant adjacentes Ã  aucune mine et non dÃ©couvertes
			{
				explorer(ligne + i, colonne + j);//Kom?uya geç ayny i?lemi tekrar  rekürsif olarak yap
			}
		}
	}
}


int creuser(int ligne, int colonne)
{
	int x=0;
    if (soustab[ligne][colonne] == -1)//Si il y a une mine dans la case creusÃ©e le joueur a perdu //Bomba my
    {
    	x=PERDU;//Öldün
    }

    else if (soustab[ligne][colonne] > 0)//Si il y a une case adjacente a une mine dans la case creusÃ©e on affiche cette case//Sayy  my (kom?usu mayynlyysa)
    {
        tab[ligne][colonne] = ('0' + soustab[ligne][colonne]);//Aç
    //	x=verifiermatchgagner();//On vÃ©rifie si cette case Ã©tait la derniere avant que le joueur gagne//Bittimi
        x=CONTINUE;
	}
    else//Bo?sa(Kom?usu bossa)
    {
    	explorer(ligne, colonne);//Si il n'y a rien du tout dans la case creusÃ©e alors on explore autour  //Kom?ularyny açarak ilerle
    	//x=verifiermatchgagner();////On vÃ©rifie si cette case Ã©tait la derniere avant que le joueur gagne  // Bittimi diye bak
    }

    return x;// cette fonctyon retourne CONTINUE OU PERDU
}





