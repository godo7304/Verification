#include <stdio.h>
#include <stdlib.h>


int verification_0(int tab[], int nbVal, int x)
{
    int i;
    for (i = 1; i<= nbVal; i++)
    {
        if(tab[i] ==x)
        {
            return 1 ;

        }
    }
    return 0;
}

int verificationWhile_0(int tab[], int nbVal, int x)
{
    int i = 1;
    while (i <= nbVal)
    {
        if(tab[i] == x)
        {
            return 1;
        }
        i++;
    }
    return 0;
}


int verification_1(int tab[], int nbVal, int x)
{
    int i;
    int trouve;

    for( i=1 ; i<= nbVal; i++)
    {
        if(tab[i]== x)
        {
            trouve = 1;
        }
        else
        {
            trouve = 0;
        }
    }
    return trouve;
}

int verificationWhile_1(int tab[], int nbVal, int x)
{
    int i = 1;
    int trouve;

    while (i <= nbVal)
    {
        if(tab[i] == x)
        {
            trouve = 1;
        }
        else
        {
            trouve = 0;
        }
        i++;
    }
    return trouve;
}

int main()
{
    int tab[] = {0,8,9,7,4};

    const int  nbVal = sizeof(tab)/sizeof(tab[0]);
    int resultat,resultat_1,resultat_2,resultat_3;

    resultat = verification_0(tab, nbVal, 8);
    resultat_1 = verificationWhile_0(tab, nbVal, 8);
    resultat_2 = verification_1(tab, nbVal, 8);
    resultat_3 = verificationWhile_1(tab, nbVal, 8);

    printf("\nresultat = %d", resultat);
    printf("\nresultat = %d", resultat_1);
    printf("\nresultat = %d", resultat_2);
    printf("\nresultat = %d", resultat_3);

    return 0;
}
