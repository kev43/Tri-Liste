//
// Created by kevin on 15/02/17.
//

#include "tri-liste.h"
#include <stdlib.h>

void eclatement(liste* l , liste* l1 ,liste* l2){

    int numero_liste=1 ;
    Liste * courant  , courant1 , courant2;
    courant = l;
    precedent = NULL;
    courant1 = l1;
    courant2 = l2;

    while (courant != NULL)
    {
        if (numero_liste%2 == 1 )
        {
            l1 = ajoute_fin(l1 , courant->valeur);
            courant1 = courant1->suivant ;
        }
        else
        {
            l2 = ajoute_fin(l2 , courant->valeur);
            courant2 = courant2->suivant ;
        }
        precedent = courant;
        courant = courant->suivant;

        if (courant->valeur < precedent->valeur)
        {
            numero_liste++;
        }
    }
}