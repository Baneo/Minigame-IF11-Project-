#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int test1 (int repo, int TAB[])
{
    int faux= 0,nombre = 0,j = 0,i = 0,k = 0,rep[10],reponse = 0;
    for (j = 0;j <= 10; j = j+1)
    {
        rep[j] = 0;
    }

    for (k = 1;k <= 10 ; k = k+1)
    {

    scanf("%d", &nombre);
    faux = 0;
    for (i = 0;i <= 9; i = i + 1 )
    {

        if (nombre == TAB[i] && rep[i] == 0)
        {
        printf("Bravo! Vous avez trouve la bonne reponse! \n");
        rep[i] = rep[i] + 1;
        reponse = reponse +1;

        }
        else if (nombre == TAB[i] && rep[i] != 0)
        {
            printf("Correct mais vous avez deja entre ce nombre %d fois\n", rep[i]);
            rep[i] = rep [i] + 1;
        }
        else if (nombre != TAB[i])
        {
            faux = faux + 1;
        }

    }
    if (faux == 10)
    {
        printf("reponse incorrecte\n");
    }
    }

return reponse;
}
