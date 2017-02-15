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

    liste *maListe = nouvelleListe(5);

	vider(maListe);

    return  0;
}