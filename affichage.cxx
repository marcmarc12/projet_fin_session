/*
 * affichage.cxx
 *
 *  Created on: 23 nov. 2019..
 *      Author: Marc-Antoine
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
