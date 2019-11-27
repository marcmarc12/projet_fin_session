/*
 * FC_de_base.cxx
 *
 *  Created on: 21 oct. 2019.
 *      Author: Marc-Antoine
 */

#include "FC_de_base.h"
//#include "Ligne.h"

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
 * Fonction qui permet un affichage de base des resultats
 */
/*string affichage_de_base(long double nb_a_afficher) {
 cout << endl << "Le resultat est " << nb_a_afficher << endl;
 return "";
 }*/

/*
 * Fonction qui permet de choisir l<emplacement ou le fichier sera enregistrer
 */
/*string emplacement_fichier() {
 int nb_repetition_pour_emplacement_fichier = 0;
 nb_repetition_pour_emplacement_fichier++;
 string emplacement_fichier;
 if (nb_repetition_pour_emplacement_fichier != 1) {

 //cout <<  << endl;
 //Color(14, 0);
 cout << emplacement_fichier << endl;
 //Color(0, 0);
 return emplacement_fichier;
 //std :: exit;
 }

 cout << endl
 << "Entrer l'emplacement ou le fichier de resultat sera enregistrer."
 << endl
 << "Par exemple : C:/Users/User/Desktop/Resultat_Dev_2019-10-04.txt "
 << endl << endl << "Votre emplacement : ";
 cin >> emplacement_fichier;

 return emplacement_fichier;

 }*/

/*
 * FOnction qui permet de faire afficher un messsage et de renvoyer un la variable entrer
 */
void input(string message, double &variable) {
	//int valide = 0;
	//long double variable = 0;
	//while (valide != 1) {
	cout << endl << message;
	cin >> variable;

	//verification(valide);

	//}
	//return variable;
}

/*
 * Fonction qui permet de verifier si le nombre entrer est valide
 */
void verification(int &valide) {
	//Color(14, 0);

	if (cin.fail()) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << endl << "Vous avez rentrer un nombre non valide" << endl
				<< endl;
		valide = 0;
	} else {
		valide++;
	}
}
