/*
 * Fonction_pour_projet.cxx
 *
 *  Created on: 4 déc. 2019
 *      Author: Marc-Antoine
 */

#include "Fonction_pour_projet.h"
#include "constant.h"

//A retirer plus tard
#include "affichage.h"

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

void creation_nom_fichier(string &emplacement_fichier, int nom, string date[5],
		int &date_deja_rentrer) {
	string emplacement_fichier_concatenation;
	if (date_deja_rentrer == 0 || date_deja_rentrer == 1) {
		cout << endl << endl << "La date sous ce format YYYY MM JJ : ";
		cin >> date[0] >> date[2] >> date[4];
		date_deja_rentrer++;
	}
	for (int i = 0; i < 5; i++) {
		//int posi[3] = { 0, 2, 4 };
		emplacement_fichier_concatenation += date[i];
	}

	//emplacement_fichier_concatenation += date[i];
	emplacement_fichier = "Analyse/";
	emplacement_fichier += nom_fichier_tab[nom];
	emplacement_fichier += emplacement_fichier_concatenation;
	emplacement_fichier += ".txt";
	cout << endl << emplacement_fichier;
}

unsigned long long int analyse_grosseur(string emplacement) {
	ifstream tailleFichier(emplacement);
	tailleFichier.seekg(0, ios::end);
	unsigned long long int taille = tailleFichier.tellg();
	cout << endl << taille << endl;
	tailleFichier.close();
	return taille;
}

void lecture_fichier(int choix_fichier, double tableau[40],
		int &quantite_chiffre, string date[5], int &date_deja_rentrer) {
	string b;
	string emplacement;
	string nb[50];
	int nb_chiffre = 0;
	int position_nb = 0;
	unsigned long long int taille = 0;
	//for (int c = 0; c < 3; c++) {

	creation_nom_fichier(emplacement, choix_fichier, date, date_deja_rentrer);

	taille = analyse_grosseur(emplacement);

	ifstream lectureFichier(emplacement);
	if (lectureFichier) {
		cout << "\n Fichier ouvert";
	} else {
		cout << "\n Fichier non ouvert";
	}
	for (double i = 0; i < taille; i++) {
		char a;
		lectureFichier.get(a);

		if (a == 59 || a == 40 || a == 41 || a == 0 || a == 44 || a == 10) {
			switch (a) {
				case 0:
					b.clear();
					break;
				case 10:
					if (choix_fichier == 2) {
						nb[position_nb] = b;
						nb_chiffre++;
					}
					b.clear();
					break;
				case 59:
					//cout << endl << "Point virgule atteint" << endl;
					position_nb++;
					nb[position_nb] = b;
					nb_chiffre++;
					break;
				case 40:
					//cout << endl << "Paranthese atteint" << endl;
					position_nb++;
					nb[position_nb] = b;
					nb_chiffre++;
					b.clear();
					break;
				case 41:
					//cout << endl << "Paranthese atteint" << endl;
					position_nb++;
					nb[position_nb] = b;
					nb_chiffre++;
					b.clear();
					break;
				case 44:
					//cout << endl << "Virgule atteint" << endl;
					b += ".";
					break;
			}

		} else {
			switch (a) {
				case 48:
					b += a;
					//cout << endl << b;
					break;
				case 49:
					b += a;
					//cout << endl << b;
					break;
				case 50:
					b += a;
					//cout << endl << b;
					break;
				case 51:
					b += a;
					//cout << endl << b;
					break;
				case 52:
					b += a;
					//cout << endl << b;
					break;
				case 53:
					b += a;
					//cout << endl << b;
					break;
				case 54:
					b += a;
					//cout << endl << b;
					break;
				case 55:
					b += a;
					//cout << endl << b;
					break;
				case 56:
					b += a;
					//cout << endl << b;
					break;
				case 57:
					b += a;
					//cout << endl << b;
					break;
				default:
					b.clear();
					break;
			}
		}
	}
	pre_filtrage(nb, nb_chiffre, tableau, quantite_chiffre);
}
//}

void pre_filtrage(string nb[50], int quantite, double tableau[40],
		int &quantite_chiffre) {
	//int nb_correct = 0;
	for (int i = 0; i < quantite + 2; i++) {
		//double b = 0;
		//cout << endl << endl << "Le nombre recu : " << nb[i];
		if (nb[i].size() != 0) {
			tableau[i] = Conversion_string(nb[i]);
			cout << endl << "Conversion de : " << tableau[i];
			quantite_chiffre++;
		}
	}
//cout << endl << endl << "La quantite de nb correct : " << nb_correct;
}

/*
 * Fonction qui convertie un string en entrer en un double.
 */
double Conversion_string(string nb_recu) {
	double cast;
	stringstream a(nb_recu);
	a >> (cast);
	return cast;
}
