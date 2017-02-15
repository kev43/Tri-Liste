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

    liste *maListe = nouvelleListe(8);
    int tab[]={5,6,8,2,3,4,8,5,4,6};

    maListe = remplir(maListe ,tab ,10);

    //maListe = trier(maListe) ;

	vider(maListe);

    return  0;
}