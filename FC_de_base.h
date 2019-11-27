/*
 * FC_de_base.h
 *
 *  Created on: 21 oct. 2019..
 *      Author: Marc-Antoine
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

#ifndef FC_DE_BASE_H_
#define FC_DE_BASE_H_

/*
 * Fonction qui convertie un string en entrer en un long double.
 */
long double Conversion_string(string nb_recu);

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

/*
 * Fonction qui permet un affichage de base des resultats
 */
string affichage_de_base(long double nb_a_afficher);

/*
 * Fonction qui permet de choisir l<emplacement ou le fichier sera enregistrer
 */
//string emplacement_fichier();
/*
 * FOnction qui permet de faire afficher un messsage et de renvoyer un la variable entrer
 */
void input(string message, double &variable);

/*
 * Fonction qui permet de verifier si le nombre entrer est valide
 */
void verification(int &valide);

#endif /* FC_DE_BASE_H_ */
