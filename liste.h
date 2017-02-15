
#ifndef TP_LISTE1_LISTE_H
#define TP_LISTE1_LISTE_H

#include <stdio.h>
#include <stdlib.h>


typedef struct _liste liste;

struct _liste {
	int valeur;
	liste *suivant;
};

/*
	Crée une nouvelle liste avec un élément

	entrée : entier, la valeur du premier élément

	return liste* : pointeur sur le premier élément
*/
liste* nouvelleListe(int entier);

/* 
	Affiche les éléments de la liste sur une ligne.

	entrée : l, la liste à afficher
*/
void afficher(liste *l);

/*
	Ajoute un nouvel élément à la fin de la liste

	entrée : l, la liste à modifier
	entrée : entier, la valeur du nouvel élément
	sortie : la liste modifiée
*/
liste* ajoute_fin(liste *l, int entier);

/*
	Ajoute un nouvel élément au début de la liste
	entrée : l, la liste à modifier
	entrée : entier, la valeur du nouvel élément
	sortie : la liste modifiée
*/
liste* ajoute_debut(liste *l, int entier);

/*
	Ajoute un nouvel élément à une certaine position dans la liste,
	entrée : l, la liste à modifier
	entrée : entier, la valeur du nouvel élément
	entrée : la position (débute à 1) souhaitée
	sortie : la liste modifiée
*/
liste* ajoute_position(liste *l, int entier, unsigned int position);

/*
	Ajoute les éléments d'un tableau à la fin de la liste
	entrée : l, la liste à modifier
	entrée : tab, le tableau d'entiers
	entrée : nb, le nombre d'éléments du tableau à ajouter à la liste
	sortie : la liste modifiée
*/
liste* remplir(liste *l, int tab[], unsigned int nb);

/*
	Recherche la première occurence d'une valeur dans la liste.
	entrée : l, la liste dans laquelle chercher
	entrée : entier, la valeur à rechercher
	sortie : la position (débute à 1) de la première occurence,
				-1 si la valeur n'est pas présente dans la liste.
*/
int rechercher(liste* l , int entier);

/*
	Supprime la première occurence d'un élément de la liste.
	entrée : l, la liste à modifier
	entrée : entier, la valeur à supprimer
	sortie : la liste modifiée
*/
liste* supprimer(liste *l, int entier);

/*
	libère tous les éléments de la liste de la mémoire.
	entrée : l, la liste à vider
*/
void vider(liste* l);



#endif //TP_LISTE1_LISTE_H
