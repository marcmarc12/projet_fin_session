/*
 * menu.cxx
 *
 *  Created on: 26 nov. 2019.....
 *      Author: Marc-Antoine
 */

#include "FC_de_base.h"
#include "constant.h"

/*
 * Cette fonction permet d'afficher le menu principale
 * Elle ne recoit rien.
 * Elle renvoit rien.
 */
void menu() {

	cout << endl << "1* -Faire l'inventaire des produits restants" << endl
			<< "2* -Faire l'inventaire des achats" << endl
			<< "3* -Faire l'inventaire des recettes de la journee" << endl
			<< "4* -Faire l'analyse" << endl << "5* -Quitter" << endl;
}

/*
 * Cette fonction permet d'afficher le menu pour l'enregistrement des quantitees restant.
 * Elle ne recoit rien.
 * Elle renvoit rien.
 */
void menu_inventaire() {

	cout << endl << "1* -Les produits n'ont qu'une masse" << endl
			<< "2* -Les produits sont emballer dans des paquets" << endl;
}

/*
 * Cette fonction permet d'afficher tout les ingredients.
 */
void ingredients() {
	for (int i = 0; i < 9; i++) {
		cout << endl << i << "* -" << ingredients_tab[i];
	}
}

/*
 * Cette fonction permet d'afficher toutes les unites
 */
void unite() {
	for (int i = 0; i < 4; i++) {
		cout << endl << i << "* -" << unite_tab[i];
	}
}

/*
 * Cette fonction permet d'afficher tout les produit disponnible a la vente
 */
void produit() {
	for (int i = 0; i < 4; i++) {
		cout << endl << i << "* -" << produit_tab[i];
	}
}
