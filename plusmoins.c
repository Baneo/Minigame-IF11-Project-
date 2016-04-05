#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int plusmoins (int i)
{
    system("cls");
    int choix, u = 1;
    printf("Bienvenue dans ce jeu du plus ou du moins\n\n");
    do
    {
    printf("Choisissez votre niveau de difficult%c\n", 130);
    printf("1. Niveau P%con\n", 130);
    printf("2. Niveau Wesh\n");
    printf("3. Niveau Dieu\n");
    printf("4. Mode Deux Joueurs\n");
    printf("5. Quitter\n");
    scanf("%d", &choix);
    while (choix < 1 || choix > 5)
    {
        printf("Choix incorrect, r%cessayez\n", 130);
        color(15,0);
        scanf("%d", &choix);
    }

    switch (choix)
    {
        case 1 : u = plusmoinslvl1(u);
            break;
        case 2: u = plusmoinslvl2(u);
            break;
        case 3 : u = plusmoinslvl3(u);
            break;
        case 4 : u = plusmoins2j(u);
            break;
        case 5 : u = 0;
            i = 1;
            break;
    }
    }while (u == 1);
    return i;
}
