#include <stdio.h>
#include <stdlib.h>

int plusmoins2j(int u)
{
    int nb_choisi, nb_entre, choix, i = 0, k =0;
    do
    {
    system("cls");

    printf("Le joueur 1 va devoir entrer un nombre que le joueur 2 devra deviner.\n");
    printf("Joueur 1 : entrez un nombre\n");
    scanf("%d", &nb_choisi);
    system("cls");
    printf("Joueur 2 : Essayez de trouver le nombre myst%cre\n", 138);
   do
    {
    printf("Quel est le nombre myst%cre ?\n", 138);
    scanf("%d", &nb_entre);
    if (nb_entre < nb_choisi)
    {
        printf("C'est plus !\n");
    }
    else if (nb_entre > nb_choisi)
    {
        printf("C'est moins !\n");
    }
    else
    {
        printf("Vous avez trouv%c le nombre myst%cre\n", 130, 138);
    }
    i = i+1;
    }
    while (nb_entre != nb_choisi);
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
