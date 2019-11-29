/*
 * FC_de_base.cxx
 *
 *  Created on: 21 oct. 2019......
 *      Author: Marc-Antoine.
 */

#include "FC_de_base.h"

/*
 * Fonction qui convertie un string en entrer en un long double.
 */
long double Conversion_string(string nb_recu) {
	long double cast;
	stringstream a(nb_recu);
	a >> (cast);
	return cast;
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

/*
 * FOnction qui permet de faire afficher un messsage et de renvoyer un la variable entrer
 */
void input(string message, double &variable) {
	//int valide = 0;
	//long double variable = 0;
	//while (valide != 1) {
	cout << endl << message;
	cin >> variable;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << endl << "Vous avez rentrer un nombre non valide" << endl
				<< endl;

	}

	//verification(valide);

	//}
	//return variable;
}

