/*
 * constant.h
 *
 *  Created on: 26 nov. 2019.
 *      Author: Marc-Antoine
 */

#include <iostream> //pour utiliser des éléments du c++
#include <string>   //pour utiliser des "string"
#include <math.h>   //permet des calculs plus poussés.
#include <stdlib.h> //pour utiliser : NULL, EXIT_FAILURE, etc.
#include <fstream>

using namespace std;

const string ingredients_tab[9] = { "Boeuf", "Pain", "Laitue", "Cheddar jaune",
		"Cheddar blanc", "Cornichons", "Oignons", "Tomate", "Sauce" };

const string unite_tab[4] = { "Kg", "Unite", "Feuille", "Tranche" };

const string nom_fichier_tab[4] = { "Inventaire_", "Achat_", "Vente_",
		"Analyse_" };

const string produit_tab[5] = { "Big Mac", " 2 Cheese burger",
		"Quart de livre avec fromage", "Double Quart de livre avec fromage",
		"Bacon Club House" };

#ifndef CONSTANT_H_
#define CONSTANT_H_

#endif /* CONSTANT_H_ */
