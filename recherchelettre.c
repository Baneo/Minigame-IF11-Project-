#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[])
{
    int i = 0;
    int bonneLettre = 0;

    for (i = 0 ; motSecret[i] != '\0' ; i++)
    {
        if (lettre == motSecret[i])
        {
            bonneLettre = 1;
            lettreTrouvee[i] = 1;
        }
    }

    return bonneLettre;
}
