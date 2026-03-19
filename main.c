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
int main()
{
    int tab[] = {0,8,9,7,4};

    const int  nbVal = sizeof(tab)/sizeof(tab[0]);
    int resultat;

    resultat = verification_0(tab, nbVal, 8);
    resultat = verification_1(tab, nbVal, 8);


    printf("\nresultat = %d", resultat);

    return 0;
}
