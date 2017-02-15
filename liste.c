

#include "liste.h"
#include <stdlib.h>


liste* nouvelleListe(int entier){
	liste* l = malloc(sizeof(liste));
    l->valeur = entier; //remplir le premier élément de la liste
    l->suivant = NULL ; // le premier élément à pour suivant NULL
    return l;
}

void afficher(liste *l) {
	//printf("in afficher()\n");
	liste* courant = l;
	while (courant != NULL) {
		printf("%d ", courant->valeur);
		courant = courant->suivant;
	}
	printf("\n");
}

liste* ajoute_fin(liste *l, int entier) {

	// on crée un nouveau maillon
	liste* new = malloc(sizeof(liste));
	new->suivant = NULL;
	new->valeur = entier;

	// on parcourt la liste jusqu'à la fin
	liste* courant = l;
	while (courant->suivant != NULL) {
		courant = courant->suivant;
	}
	
	// on ajoute le nouveau maillon à la fin
	courant->suivant = new;

	return l;
}

liste* ajoute_debut(liste *l, int entier) {

	// on crée un nouveau maillon
	liste* new = malloc(sizeof(liste));
	new->valeur = entier;

	// on le place au début en faisant le chaînage
	new->suivant = l;

	// le nouveau maillon est maintenant le premier élément de la liste
	return new;
}

liste* ajoute_position(liste *l, int entier, unsigned int position) {

	// cas particulier
	if (position == 1) {
		return ajoute_debut(l, entier); 
	}

	liste* courant = l;

	// on parcourt la liste, jusqu'à l'endroit voulu, tout en 
	//  faisant attention à la fin de la liste
	unsigned int i = 1;
	while (i < position-1 && courant->suivant != NULL) {
		courant = courant->suivant;
		i++;
	}

	if (i < position-1) {
		// on est arrivé à la fin de la liste avant la position voulue
		printf("La liste a moins d'éléments que la position demandée. L'élément sera ajouté en fin de liste.\n");
	}

	// on crée le nouveau maillon
	liste* new = malloc(sizeof(liste));
	new->valeur = entier;

	// on fait le chaînage avec le précédent et le suivant
	liste* suivant = courant->suivant;
	courant->suivant = new;
	new->suivant = suivant;

	return l;
}

liste* remplir(liste *l, int tab[], unsigned int nb) {

	// on va à la fin de la liste
	liste* courant = l;
	while (courant->suivant != NULL) {
		courant = courant->suivant;
	}

	unsigned int i = 0;
	// pour chaque élément du tableau
	while (i < nb) {

		// on crée un nouveau maillon
		liste* new = malloc(sizeof(liste));
		new->valeur = tab[i];
		new->suivant = NULL;

		courant->suivant = new;

		courant = new;
		i++;
	}

	return l;
}


int rechercher(liste* l , int entier) {
    int i = 1;
    liste* courant = l ;// pointeur pour parcourir la liste
    while (courant->valeur != entier && courant != NULL) // tant que la valeur n'as pas été trouvée et que la fin de liste n'est pas atteinte
    {
        i++ ; // on incrémente le rang
        courant = courant->suivant ; // on avance de 1 élément
    }

    if(courant == NULL) // si la valeur n'a pas été trouvée on renvoie -1
    {
    	printf("La liste ne contient pas l'élément %d\n", entier);
        return -1 ;
    }
    return i  ;
}

liste* supprimer(liste *l, int entier) {
	int i = 1;

	// pointeur pour parcourir la liste
    liste* courant = l ;
    liste* precedent = NULL;
    
    while (courant->valeur != entier && courant != NULL) // tant que la valeur n'as pas été trouvée et que la fin de liste n'est pas atteinte
    {
        i++; // on incrémente le rang
        precedent = courant; // on retient l'élément précédent
        courant = courant->suivant; // on avance de 1 élément
    }

    if(courant == NULL) // si la valeur n'a pas été trouvée on renvoie -1
    {
    	printf("La liste ne contient pas l'élément %d\n", entier);
        return l;
    }

    if (i == 1) {
    	// cas particulier : c'est le premier élément
    	l = l->suivant;
    } else {
    	precedent->suivant = courant->suivant;
    }
    
    free(courant);

    return l;
}

void vider(liste* l){

    liste* tmpSuppr = l ;

    while(l != NULL)
    {
        tmpSuppr = l ; //l'élément qui va être supprimé
        l = l->suivant ; //on avance le pointeur pour sortir le premier élément de la liste
        
        free(tmpSuppr); // on libère la mémoire de l'élément à supprimer
    }

}
