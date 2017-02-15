//
// Created by kevin on 15/02/17.
//

#include "tri-liste.h"
#include <stdlib.h>


liste* triEclatementFusion(liste* l) {

	liste* l1 = NULL, l2 = NULL;

	eclatement(l, l1, l2);

	while (l2 != NULL) {
		l = fusion(l1, l2);
		eclatement(l, l1, l2);
	}
	
	return l;
}

void eclatement(liste* l , liste* l1 ,liste* l2) {

    int numero_liste=1 ;
    liste * courant  , courant1 , courant2;
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

liste* fusion(liste *l1, liste* l2) {

	// la nouvelle liste, cible de la fusion
	liste* l = NULL;

	while (l1 != NULL && l2 != NULL) {
		if (l2 == NULL || ((l1 != NULL && l2) && strcmp(l1.valeur, l2.valeur) < 0 )) {
			ajoute_fin(l, l1.valeur);
			supprimer(l1, l2.valeur);
			l1 = l1.suivant;
		} else {
			ajoute_fin(l, l2.valeur);
			supprimer(l2, l2.valeur);
			l2 = l2.suivant;
		}
	}

	return l;
}