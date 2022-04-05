#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int alan[119][30]={0};
int kuyruksatir[300];
int kuyruksutun[300];
int beatx,beaty;


void gotoxy(short x,short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_Pos={x-1,y-1};
    hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,Cursor_Pos);
}

void ekran(int x1,int y1,int x2,int y2,int tip)
{
    for(int i=x1;i<=x2;i++)
    {
        alan[i][y1]=tip;
        alan[i][y2]=tip;
    }
    for(int i=y1;i<=y2;i++)
    {
        alan[x1][i]=tip;
        alan[x2][i]=tip;
    }
}

void ekranYaz()
{
    int x,y;

    for(x=0;x<119;x++)
    {
        for(y=0;y<30;y++)
        {
            gotoxy(x+1,y+1);
            if(alan[x][y]==2)
                printf("%c",176);
        }
    }
}

int yem()
{
    srand(time(NULL));
    beatx=2+rand()%115;
    beaty=2+rand()%27;
}

void main()
{

    yem();
    ekran(0,0,118,29,2);
    ekranYaz();
    int dx=55,dy=15;
    unsigned char tus;
    int gx=0,gy=0;
    int kuyruk=0;
    int devam=0;

    do
    {
        if(kbhit())
        {
            tus=getch();
            if(tus==224)
            {
                tus=getch();
                switch(tus)
                {
                    case 72:gy=-1; gx=0;
                    break;
                    case 80: gy=1;gx=0;
                    break;
                    case 77:gy=0; gx=1;
                    break;
                    case 75: gy=0; gx=-1;
                    break;
                    case 97: gy=0; gx=0;
                    break;
                }
            }
        }
        dx=dx+gx;
        dy=dy+gy;

        if(dx>118)
            dx=2;
        if(dx<2)
            dx=118;
        if(dy>29)
            dy=2;
        if(dy<2)
            dy=29;

        kuyruksatir[0]=dx;
        kuyruksutun[0]=dy;

        if(dx==beatx&&dy==beaty)
        {
            yem();
            kuyruk++;
        }
        gotoxy(beatx,beaty);
        printf("%c",36);

        for(int i=0;i<=kuyruk;i++)
        {
            gotoxy(kuyruksatir[i],kuyruksutun[i]);
            printf("O");
        }
        Sleep(60);

        for(int i=0;i<=kuyruk;i++)
        {
            gotoxy(kuyruksatir[i],kuyruksutun[i]);
            printf(" ");
        }
        for(int a=1;a<=kuyruk;a++)
        {
            if(dx==kuyruksatir[a]&&dy==kuyruksutun[a])
            {
                gotoxy(55,15);
                printf("GAME OVER");
                devam=1;
                getch();
            }
        }
        if(kuyruk==18)
        {
            gotoxy(55,15);
            printf("WIN");
            for(int k=0;k<30;k++)
            {
                yem();
                gotoxy(beatx,beaty);
                printf("%c",36);
                Sleep(1000);
            }
            devam=1;
        }

        for(int i=kuyruk;i>0;i--)
        {
            kuyruksatir[i]=kuyruksatir[i-1];
            kuyruksutun[i]=kuyruksutun[i-1];
        }


    }while(devam==0);

    getch();
}
