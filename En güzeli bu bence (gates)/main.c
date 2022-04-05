#include <stdio.h>
#include <stdlib.h>

int main()
{

        int k;

        printf("You have 3 gates,Which one is your chose?\n");
        scanf("%d",&k);

        switch(k)
        {
            case 1:printf("You got a duck,you can open a pet store.(first pet store in the history) ");
            break;
            case 2:printf("You are walking in the darkness with the monsters and.. You find a pony,The Queen of The Unicorns.She helping to you and you being happy.");
            break;
            case 3:printf("You dying for you were stupid because there is no one or something and you chose that gate.You can die now.");
            break;
        }
}
