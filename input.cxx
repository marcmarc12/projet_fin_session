/*
 * input.cxx
 *
 *  Created on: 25 nov. 2019..
 *      Author: Marc-Antoine Boisvert
 */

#include "input.h"
#include "FC_de_base.h"
#include "ecriture_lecture_fichier.h"
#include "constant.h"
#include "affichage.h"
#include "menu.h"

void input_paquet(string emplacement, int param1) {

	double choix = 0;
	double choix2 = 0;
	double quantite = 0;
	double quantite2 = 0;
	double quantite3 = 0;
	//string ingredients;

	ingredients();
	input("Votre choix comme ingredients : ", choix);

	input("La quantite de paquet : ", quantite);

	input("La quantite dans chaque paquet : ", quantite2);

	if (param1) {
		input("La quantite hors paquet : ", quantite3);
	}

	unite();
	input("Votre choix d'unite : ", choix2);

	//ingredients = ingredients_tab[choix];

	ecriture_fichier_paquet(ingredients_tab[int(choix)], quantite, quantite2,
			quantite3, unite_tab[int(choix2)], emplacement, param1);
}

void input_simple(string emplacement) {

	double choix = 0;
	double choix2 = 0;
	double quantite = 0;

	ingredients();
	input("Votre choix comme ingredients : ", choix);

	input("La quantite : ", quantite);

	unite();
	input("Votre choix d'unite : ", choix2);

	ecriture_fichier_produit_simple(ingredients_tab[int(choix)], quantite,
			unite_tab[int(choix2)], emplacement);
}

void input_vente(string emplacement) {

	double montant = 0;
	double choix = 0;

	produit();
	input("Votre choix : ", choix);

	input("Le total des recettes : ", montant);

	ecriture_vente(produit_tab[int(choix)], montant, emplacement);
}
