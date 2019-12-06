/*
 * affichage.cxx
 *
 *  Created on: 23 nov. 2019..
 *      Author: Marc-Antoine.
 */

#include "affichage.h"
#include "FC_de_base.h"
#include "constant.h"

/*void logo() {
 cout
 << "\n                          888                        888     888 \n";
 cout
 << "                          888                        888     888 \n";
 cout
 << "                          888                        888     888 \n";
 cout
 << "88888b.d88b.  .d8888b .d88888 .d88b. 88888b.  8888b. 888 .d88888 \n";
 cout
 << "888 '888 '88bd88P'   d88' 888d88''88b888 '88b    '88b888d88' 888 \n";
 cout
 << "888  888  888888     888  888888  888888  888.d888888888888  888 \n";
 cout
 << "888  888  888Y88b.   Y88b 888Y88..88P888  888888  888888Y88b 888 \n";
 cout
 << "888  888  888 'Y8888P 'Y88888 'Y88P' 888  888'Y888888888 'Y88888 \n";
 }*/

void logo() {

	for (int i = 0; i < 8; i++) {
		system("CLS");

		int tableauCouleur[4];
		tableauCouleur[0] = 1;	// Bleu
		tableauCouleur[1] = 5;	// Violet
		tableauCouleur[2] = 10;	// Vert
		tableauCouleur[3] = 11; // Turquoise
		tableauCouleur[4] = 12; // Rouge.
		int couleur_text = 0;

		couleur_text = tableauCouleur[(i % 5)];

		Color(couleur_text, 0);
		cout
				<< "\n                          888                        888     888 \n";

		Color(couleur_text, 0);
		cout
				<< "                          888                        888     888 \n";

		Color(couleur_text, 0);
		cout
				<< "                          888                        888     888 \n";

		Color(couleur_text, 0);
		cout
				<< "88888b.d88b.  .d8888b .d88888 .d88b. 88888b.  8888b. 888 .d88888 \n";

		Color(couleur_text, 0);
		cout
				<< "888 '888 '88bd88P'   d88' 888d88''88b888 '88b    '88b888d88' 888 \n";

		Color(couleur_text, 0);
		cout
				<< "888  888  888888     888  888888  888888  888.d888888888888  888 \n";

		Color(couleur_text, 0);
		cout
				<< "888  888  888Y88b.   Y88b 888Y88..88P888  888888  888888Y88b 888 \n";

		Color(couleur_text, 0);
		cout
				<< "888  888  888 'Y8888P 'Y88888 'Y88P' 888  888'Y888888888 'Y88888 \n";

		Sleep(0.2 * 1000);

	}
	Color(15, 0);
}

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

void Color(int couleurDuTexte, int couleurDeFond) // fonction d'affichage de couleurs
		{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}

/*void test_affichage(string tab[500], unsigned long long int taille) {
 for (int i = 0; i < taille; i++) {
 cout << tab[i] << endl;
 }
 }*/

void test_affichage(string tab[50], int quantite) {
	for (int i = 0; i < quantite + 2; i++) {
		//for (int j = 0; j < 15; j++) {
		cout << tab[i] << endl;
		//}
	}
}
