#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define VRAI  1
#define FAUX 0
#define NBC  30

int pendu2(int u)
{
    int choix = 0,q,nb_lettres,j,trouve,i=0,k=0,vie=10;
    char mot[NBC],masque [NBC],lettre;

    do
    {
    system("cls");
    printf("Joueur un -> Entrez un mot : \n");
    scanf("%s", mot);

    nb_lettres = strlen(mot);

    for (i=0 ; i<=nb_lettres ; i++ )
    {
      mot [i] = toupper (mot[i]);
    }

    j = 0;

    while (j < nb_lettres)
        {
        masque[j] = '*';
        j++;
        }

    masque[j] = '\0';

    system("cls");
    printf("Joueur Deux -> A vous de jouer\n\n");
    printf("%s", masque);

    trouve = FAUX;

    while ((vie > 0) && !trouve)
            {
                printf ("\nEntrez un caract%cre : ", 138);
                scanf (" %c", &lettre);
                lettre = toupper(lettre);
                k = 0;
                j = 0;
            while ((j < nb_lettres) && !trouve)
                {
                    if (mot[j] == lettre)
                        {
                            masque[j]=lettre;
                            k = 1;
                            if (strchr(masque,'*') == NULL)
                                {
                                    trouve = VRAI;
                                }
                        }
    j++;

    if ( j == nb_lettres && k == 0)
        {
            vie=vie-1;
            printf("Il vous reste %d vies \n",vie);
        }
        }

    printf("%s", masque);
        }
    if (!trouve)
    {
        printf("\nVous avez perdu. Dommage.\n");
    }
    else
    {
        printf("\nVous avez gagn%c! F%clicitations!\n", 130, 130);
    }

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
        q = 1;
    }
    else if (choix == 2)
    {
        q = 0;
        u = 0;
    }
    else if (choix == 3)
    {
        q = 0;
        u = 1;
    }
    }while(q != 0);
    return u;
}
