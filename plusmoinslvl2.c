#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int plusmoinslvl2(int u)
{
    int nb_myst,nb_entre,i = 0,choix,k;
    do{
    system("cls");

    srand(time(NULL));
    nb_myst = rand()%100000;
    printf("Vous allez avoir a deviner un nombre entre 1 et 100 000\n");
    do
    {
    printf("Quel est le nombre myst%cre ?\n", 138);
    scanf("%d", &nb_entre);
    if (nb_entre < nb_myst)
    {
        printf("C'est plus !\n");
    }
    else if (nb_entre > nb_myst)
    {
        printf("C'est moins !\n");
    }
    else
    {
        printf("Vous avez trouv%c le nombre myst%cre\n", 130, 138);
    }
    i = i+1;
    }
    while (nb_entre != nb_myst);
    printf("Vous avez trouv%c en %d coups\n", 130, i);
    printf("Voulez vous rejouer ?\n");
    printf("1. OUI\n");
    printf("2. NON\n");
    printf("3. Retour au choix du niveau\n");
    scanf("%d", &choix);
    while (choix < 1 || choix > 3)
    {
        printf("Choix non conforme, entrez 1, 2 ou 3");
        scanf("%d", & choix);
    }
    if (choix == 1)
    {
        k = 1;
    }
    else if (choix == 2)
    {
        k = 0;
        u = 0;
    }
    else if (choix == 3)
    {
        k = 0;
        u = 1;
    }
    }while(k != 0);
return u;
}
