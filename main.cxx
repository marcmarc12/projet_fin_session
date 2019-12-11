#include "affichage.h"
#include "menu.h"
#include "constant.h"
#include "Fonction_pour_projet.h"

using namespace std;

int main(int argc, char **argv) {

	/*string emplacement_fichier_inventaire;
	 int valide = 0;
	 string emplacement_fichier_achat;
	 int valide2 = 0;
	 string emplacement_fichier_vente;
	 int valide3 = 0;*/
	double choix = 0;
	string date[5] = { "", "_", "", "_", "" };
	int date_rentrer = 0;

	double inventaire[40];
	int taille_inventaire = 0;
	double achat[40];
	int taille_achat = 0;
	double vente[40];
	int taille_vente = 0;

	logo();

	while (choix != 2) {

		menu();
		input("Votre choix : ", choix);

		switch (int(choix)) {

			/*case 1: {
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
			 }*/

			case 1:
				lecture_fichier(0, inventaire, taille_inventaire, date,
						date_rentrer);
				//cout << endl << "Taille inventaire : " << taille_inventaire;
				lecture_fichier(1, achat, taille_achat, date, date_rentrer);
				//cout << endl << "Taille achat : " << taille_achat;
				lecture_fichier(2, vente, taille_vente, date, date_rentrer);
				//cout << endl << "Taille vente : " << taille_vente;
				test_affichage(inventaire, taille_inventaire);
				test_affichage(achat, taille_achat);
				test_affichage(vente, taille_vente);

				traitement(inventaire, taille_inventaire, achat, taille_achat,
						vente, taille_vente);
				break;

			default:
				break;

		}

	}

	return 0;
}

