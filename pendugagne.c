#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int gagne(int lettreTrouvee[], int tailleMot)
{
    int i = 0;
    int joueurGagne = 1;

    for (i = 0 ; i < tailleMot ; i++)
    {
        if (lettreTrouvee[i] == 0)
            joueurGagne = 0;
    }

    return joueurGagne;
}
