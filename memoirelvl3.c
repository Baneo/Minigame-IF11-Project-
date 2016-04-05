#include <stdio.h>
#include <stdlib.h>

int memoirelvl3(int u)
{

    int choix,nombre[19], repo = 0, repf = 0,k;
    do{
        system("cls");

    srand(time(NULL));
    aleatoire(nombre);
    printf("Apprenez ces nombres par coeur et quand vous avez fini \n");
    system("PAUSE");
    system("cls");
    printf("Entrez maintenant les dix nombres un par un \n");
    repo = test3(repo,nombre);
    system("cls");
    if (repo == 20)
    {
        printf("Bravo vous avez trouv%c tous les nombres vous %ctes un g%cnie\n", 130, 136, 130);

    }
    else
    {
        printf("\nDieu ne fait pas d'erreurs, vous %ctes un imposteur !!\n\n\n", 136);
    }

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
