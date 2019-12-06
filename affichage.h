/*
 * affichage.h
 *
 *  Created on: 23 nov. 2019
 *      Author: Marc-Antoine Boisvert.....
 */

#include <iostream> //pour utiliser des éléments du c++
#include <string>   //pour utiliser des "string"
#include <math.h>   //permet des calculs plus poussés
#include <stdlib.h> //pour utiliser : NULL, EXIT_FAILURE, etc.
#include <fstream>

using namespace std;

#ifndef AFFICHAGE_H_
#define AFFICHAGE_H_

void logo();

/*
 * Fonction qui permet d'afficher des couleur
 * Color(Couleur du texte, Couleur de Fond
 * Source : https://www.developpez.net/forums/d309614/c-cpp/c/couleurs-c/
 * Code de Couleur:
 * 0 = Noir
 * 1 = Bleu Fonce
 * 2 = Vert fonce
 * 3 = Turquoise
 * 4 = Rouge Fonce
 * 5 = Violet
 * 6 = Vert caca d'oie
 * 7 = Gris claire
 * 8 = Gris fonce
 * 9 = Bleu Fluo
 * 10 = Vert fluo
 * 11 = Turquoise
 * 12 = Rouge Fluo
 * 13 = Violet 2
 * 14 = Jaune
 * 15 = Blanc
 */
void Color(int couleurDuTexte, int couleurDeFond);

//void test_affichage(string tab[500], unsigned long long int taille);
void test_affichage(string tab[50], int quantite);

#endif /* AFFICHAGE_H_ */
