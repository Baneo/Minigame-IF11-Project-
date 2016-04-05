#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int pendumenu ()
{
    int i = 0, choix,u = 1;
    do{
    system("cls");
    printf("Bienvenue dans ce jeu du pendu\n\n");
    printf("Choisissez un mode de jeu\n\n");
    printf("1. Mode (Han) Solo\n");
    printf("2. Mode Duo\n\n");
    scanf("%d", &choix);
    while (choix < 1 || choix > 2)
    {
        printf("Choix incorrect, r%cessayez\n", 130);
        color(15,0);
        scanf("%d", &choix);
    }

    switch (choix)
    {
        case 1 : u = pendu(u);
            break;
        case 2: u = pendu2(u);
            break;
    }
    }while (u == 1);
    return i;
}
