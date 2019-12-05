/*
 * Fonction_pour_projet.h
 *
 *  Created on: 4 d�c. 2019
 *      Author: Marc-Antoine
 */

#include <iostream> //pour utiliser des �l�ments du c++
#include <string>   //pour utiliser des "string"
#include <math.h>   //permet des calculs plus pouss�s.
#include <stdlib.h> //pour utiliser : NULL, EXIT_FAILURE, etc.
#include <fstream>
#include <cstring>

using namespace std;

#ifndef FONCTION_POUR_PROJET_H_
#define FONCTION_POUR_PROJET_H_

void lecture_fichier();

void creation_nom_fichier(string &emplacement_fichier, int nom);

void pre_filtrage(string nb[50], int quantite);

/*
 * Fonction qui convertie un string en entrer en un long double.
 */
double Conversion_string(string nb_recu);

#endif /* FONCTION_POUR_PROJET_H_ */
