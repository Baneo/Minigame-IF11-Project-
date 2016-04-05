#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int memoire ()
{
    int i, choix,u = 1;
    do{
    system("cls");
    printf("Bienvenue dans ce jeu ou votre m%cmoire va %ctre mise a l'%cpreuve\n", 130, 136,130);
    printf("Choisissez un niveau de difficult%c\n", 130);
    printf("\n1. Niveau P%ccore\n", 130);
    printf("2. Niveau Jacky\n");
    printf("3. Niveau Dieu\n", 130);
    printf("4. Trop dur pour moi j'arr%cte...", 136);
    scanf("%d", &choix);
    while (choix < 1 || choix > 5)
    {
        printf("Choix incorrect, r%cessayez\n", 130);
        color(15,0);
        scanf("%d", &choix);
    }

    switch (choix)
    {
        case 1 : u = memoirelvl1(u);
            break;
        case 2: u = memoirelvl2(u);
            break;
        case 3 : u = memoirelvl3(u);
            break;
        case 4 : u = 0;
            i = 1;
            break;
    }
    }while (u == 1);
    return i;
}
