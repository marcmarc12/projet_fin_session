/*
 * menu.h
 *
 *  Created on: 26 nov. 2019...
 *      Author: Marc-Antoine
 */

#include <iostream> //pour utiliser des �l�ments du c++
#include <string>   //pour utiliser des "string"
#include <math.h>   //permet des calculs plus pouss�s.
#include <stdlib.h> //pour utiliser : NULL, EXIT_FAILURE, etc.
#include <fstream>

using namespace std;

#ifndef MENU_H_
#define MENU_H_

/*
 * Cette fonction permet d'afficher le menu principale
 * Elle ne recoit rien.
 * Elle renvoit rien.
 */
void menu();

/*
 * Cette fonction permet d'afficher le menu pour l'enregistrement des quantitees restant.
 * Elle ne recoit rien.
 * Elle renvoit rien.
 */
void menu_inventaire();

/*
 * Cette fonction permet d'afficher tout les ingredients.
 */
void ingredients();

/*
 * Cette fonction permet d'afficher toutes les unites
 */
void unite();

/*
 * Cette fonction permet d'afficher tout les produit disponnible a la vente
 */
void produit();
#endif /* MENU_H_ */
