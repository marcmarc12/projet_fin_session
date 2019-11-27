#include <iostream> //pour utiliser des éléments du c++
#include <string>   //pour utiliser des "string".
#include <math.h>   //permet des calculs plus poussés.
#include <stdlib.h> //pour utiliser : NULL, EXIT_FAILURE, etc.
#include <fstream>

#include "affichage.h"
#include "FC_de_base.h"
#include "ecriture_lecture_fichier.h"
#include "menu.h"
#include "constant.h"
#include "input.h"

using namespace std;

int main(int argc, char **argv) {

	string emplacement_fichier_inventaire;
	int valide = 0;
	string emplacement_fichier_achat;
	int valide2 = 0;
	string emplacement_fichier_vente;
	int valide3 = 0;
	double choix = 0;

	logo();

	while (choix != 5) {

		menu();
		input("Votre choix : ", choix);

		switch (int(choix)) {

			case 1: {
				double choix2 = 0;
				if (valide == 0) {
					emplacement_fichier_inventaire = creation_fichier(0);
					valide++;
				}
				menu_inventaire();
				input("Votre choix : ", choix2);

				switch (int(choix2)) {

					case 1:
						input_simple(emplacement_fichier_inventaire);
						break;
					case 2:
						input_paquet(emplacement_fichier_inventaire, 1);
						break;
				}

				break;
			}

			case 2: {
				double choix2 = 0;
				if (valide2 == 0) {
					emplacement_fichier_achat = creation_fichier(1);
					valide2++;
				}
				menu_inventaire();
				input("Votre choix : ", choix2);

				switch (int(choix2)) {

					case 1:
						input_simple(emplacement_fichier_achat);
						break;
					case 2:
						input_paquet(emplacement_fichier_achat, 0);
						break;
				}

				break;
			}

			case 3: {
				if (valide3 == 0) {
					emplacement_fichier_vente = creation_fichier(2);
					valide3++;
				}

				input_vente(emplacement_fichier_vente);
			}

			case 4:
				lecture_fichier(emplacement_fichier_inventaire);
				break;

			default:
				break;

		}

	}

	return 0;
}

