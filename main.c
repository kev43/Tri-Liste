/************************************************************************/
/*** VIVIER David													    */
/*** VARAGNAT Kévin													    */
/*** 14/02/2017											                */
/*** Implémentation d'une liste dans une liste chaînée					*/
/*** Exécuter ./main pour utiliser le programme 					    */
/*** Exécuter "make clean" pour nettoyer							    */
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include "tri-liste.h"


int main(void)
{

    liste *maListe = nouvelleListe(3);
    int tab[]={5,6,2,8,9,11,7,4,10,12,15,20,1,19,13,17};

    maListe = remplir(maListe, tab, 16);

    printf("avant tri:\n");
    afficher(maListe);

    maListe = triEclatementFusion(maListe);
    
    printf("après tri:\n");
    afficher(maListe);

	vider(maListe);

    return  0;
}