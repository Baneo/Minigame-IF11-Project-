#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void aleatoire (int TAB [])
{
    int i;
    srand(time(NULL));
    for (i = 0;i <= 9;i = i+ 1)
    {
        TAB[i] = rand()%10000;
        printf("%d\n",TAB[i]);
    }

}
