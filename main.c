#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "header.h"

int main()
{

    int choix = 0,i,x;
    system("cls");
    color(11,0);
    printf("Bienvenue dans ce programme de mini jeux.\n\n");
    system("pause");
    system("cls");
    color(15,0);
    system("cls");
    do
    {
    system("cls");
    color(15,0);
    printf("                                =====  MENU  =====");

    color(10,0);
    printf("\n\n\n                              1. Jeu du Pendu\n");
    color(11,0);
    printf("\n                              2. Jeu du plus ou du moins\n");
    color(12,0);
    printf("\n                              3. Jeu de m%cmoire\n",130);
    color(13,0);
    printf("\n                              4. Quitter\n\n");
    color(15,0);
    scanf("%d", &choix);
    while (choix < 1 || choix > 4)
    {
        printf("Choix incorrect, recommencez\n");
        color(15,0);
        scanf("%d", &choix);
    }
    switch (choix)
    {
    case 1 : color(10,0);
        i = pendumenu();
        break;
    case 2: color(11,0);
        i = plusmoins();
        break;
    case 3 : color(12,0);
        i = memoire();
        break;
    case 4 : color(10,0);
        system("cls");
            printf("\nMerci d'avoir jou%c :)\n\n",130);
            i = 0;
        break;
    }
    }
    while (i != 0);
    color(10,0);
    return 0;
}
