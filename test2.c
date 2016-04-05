#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int test2 (int repo, int TAB[])
{
    int faux= 0,nombre = 0,j = 0,i = 0,k = 0,rep[20],reponse = 0,faux2=0;
    for (j = 0;j <= 20; j = j+1)
    {
        rep[j] = 0;
    }

    for (k = 1;k <= 20 ; k = k+1)
    {

    scanf("%d", &nombre);
    faux = 0;
    for (i = 0;i <= 19; i = i + 1 )
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
    if (faux == 20)
    {
        printf("reponse incorrecte\n");
        faux2++;
        if (faux2 == 5)
        {
            return reponse;
        }
    }
    }
return reponse;

}
