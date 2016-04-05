#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int pendu (int u)
{
    int k,choix = 0, *lettreTrouvee = NULL, vie = 10, i = 0, tailleMot = 0;
    char lettre = 0, motSecret[100] = {0};

    do
    {
    system("cls");

    if (!piocherMot(motSecret))
        exit(0);

    tailleMot = strlen(motSecret);

    lettreTrouvee = malloc(tailleMot * sizeof(int));
    if (lettreTrouvee == NULL)
        {
        exit(0);
        }
    for (i = 0 ; i < tailleMot ; i++)
        {
        lettreTrouvee[i] = 0;
        }


    while (vie > 0 && !gagne(lettreTrouvee, tailleMot))
    {
        printf("\n\nIl vous reste %d Vies", vie);
        printf("\nQuel est le mot secret ? ");

        for (i = 0 ; i < tailleMot ; i++)
        {
            if (lettreTrouvee[i])
            {
                printf("%c", motSecret[i]);
            }
            else
            {
                printf("*");
            }
        }

        printf("\nVeuillez entrer une Lettre : ");
        lettre = lireCaractere();

        if (!rechercheLettre(lettre, motSecret, lettreTrouvee))
        {
            vie--;
        }
    }

    if (gagne(lettreTrouvee, tailleMot))
    {
        printf("\n\nGagn%c ! Vous avez trouvé le mot : %s\n",130, motSecret);
    }
    else
    {
        printf("\n\nPerdu ! Le mot myst%cre %ctait : %s\n",138, 130, motSecret);
    }
    free(lettreTrouvee);

    printf("Voulez vous rejouer ?\n");
    printf("1. OUI\n");
    printf("2. NON\n");
    printf("3. Retour au choix du niveau\n");
    scanf("%d", &choix);
    while (choix < 1 || choix > 3)
    {
        printf("Choix non conforme, entrez 1, 2 ou 3\n");
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







