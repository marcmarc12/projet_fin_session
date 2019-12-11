/*
 * Fonction_pour_projet.h
 *
 *  Created on: 4 déc. 2019
 *      Author: Marc-Antoine
 */

#include <iostream> //pour utiliser des éléments du c++
#include <string>   //pour utiliser des "string"
#include <math.h>   //permet des calculs plus poussés.
#include <stdlib.h> //pour utiliser : NULL, EXIT_FAILURE, etc.
#include <fstream>
#include <cstring>
#include <sstream>

using namespace std;

#ifndef FONCTION_POUR_PROJET_H_
#define FONCTION_POUR_PROJET_H_

/*
 * FOnction qui permet de faire afficher un messsage et de renvoyer un la variable entrer
 */
void input(string message, double &variable);

void lecture_fichier(int choix_fichier, double tableau[40],
		int &quantite_chiffre, string date[5], int &date_deja_rentrer);

unsigned long long int analyse_grosseur(string emplacement);

void creation_nom_fichier(string &emplacement_fichier, int nom, string date[5],
		int &date_deja_rentrer);

void pre_filtrage(string nb[50], int quantite, double tableau[40],
		int &quantite_chiffre);

/*
 * Fonction qui convertie un string en entrer en un long double.
 */
double Conversion_string(string nb_recu);

void traitement(double inventaire[40], int taille_inventaire, double achat[40],
		int taille_achat, double vente[40], int taille_vente);

#endif /* FONCTION_POUR_PROJET_H_ */
