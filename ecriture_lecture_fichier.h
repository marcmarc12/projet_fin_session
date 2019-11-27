/*
 * ecriture_lecture_fichier.h
 *
 *  Created on: 25 nov. 2019.....
 *      Author: Marc-Antoine
 */

#include <iostream> //pour utiliser des éléments du c++
#include <string>   //pour utiliser des "string"
#include <math.h>   //permet des calculs plus poussés.
#include <stdlib.h> //pour utiliser : NULL, EXIT_FAILURE, etc.
#include <fstream>

using namespace std;

#ifndef ECRITURE_LECTURE_FICHIER_H_
#define ECRITURE_LECTURE_FICHIER_H_

/*
 * Cette fonction permet de créer le fichier utiliser.
 * Elle recoit le debut du nom du fichier en parametre avec un int
 * Elle renvoie la string qui possede le nom et l'emplacement du fichier
 */
string creation_fichier(int nom);

/*
 * Cette fonction permet de faire l'ecriture des donnees pour des quantiter simple
 * Elle recoit en parametre : un string pour le nom du produit, un double pour sa masse, un string pour l'uniter de la masse, et un string pour l'emplacement du fichier
 * Elle ne renvoie rien
 */
void ecriture_fichier_produit_simple(string nom_produit, double masse,
		string unite, string emplacement);

/*
 * Cette fonction permet de faire l'ecriture des donnees pour des quantite en paquet
 * Elle recoit en parametre : un string pour le nom du produit, un double pour la quantiter de paquet, un double pour la quantiter dans un paquet,
 * 		double pour les quantitees, un string pour l'uniter et un string pour l'emplacement du fichier, un int pour le parametre 1 (as-t'il des restant).
 * 	Elle ne renvoie rien.
 */
void ecriture_fichier_paquet(string nom_produit, double quantite_paquet,
		double quantite_dans_paquet, double quantite_individuelle, string unite,
		string emplacement, int param1);

void ecriture_vente(string produit, double montant, string emplacement);

void lecture_fichier(string emplacement);

#endif /* ECRITURE_LECTURE_FICHIER_H_ */
