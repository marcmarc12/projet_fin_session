/*
 * Fonction_pour_projet.cxx
 *
 *  Created on: 4 déc. 2019
 *      Author: Marc-Antoine
 */

#include "Fonction_pour_projet.h"
#include "constant.h"
#include "FC_de_base.h"

//A retirer plus tard
#include "affichage.h"

void creation_nom_fichier(string &emplacement_fichier, int nom) {
	string emplacement_fichier_concatenation;
	cout << endl << endl << "La date sous ce format YYYY_MM_JJ : ";
	cin >> emplacement_fichier;

	emplacement_fichier_concatenation = emplacement_fichier;
	emplacement_fichier = "Analyse/";
	emplacement_fichier += nom_fichier_tab[nom];
	emplacement_fichier += emplacement_fichier_concatenation;
	emplacement_fichier += ".txt";
}

unsigned long long int analyse_grosseur(string emplacement) {
	ifstream tailleFichier(emplacement);
	tailleFichier.seekg(0, ios::end);
	unsigned long long int taille = tailleFichier.tellg();
	cout << endl << taille << endl;
	tailleFichier.close();
	return taille;
}

void lecture_fichier(int choix_fichier, double tableau[40]) {
	string b;
	string emplacement;
	string nb[50];
	int nb_chiffre = 0;
	int position_nb = 0;
	unsigned long long int taille = 0;
	//for (int c = 0; c < 3; c++) {

	creation_nom_fichier(emplacement, choix_fichier);

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

		if (a == 59 || a == 40 || a == 41 || a == 0 || a == 44) {
			switch (a) {
				case 0:
					b.clear();
					break;
				case 59:
					cout << endl << "Point virgule atteint" << endl;
					position_nb++;
					nb[position_nb] = b;
					nb_chiffre++;
					break;
				case 40:
					cout << endl << "Paranthese atteint" << endl;
					position_nb++;
					nb[position_nb] = b;
					nb_chiffre++;
					b.clear();
					break;
				case 41:
					cout << endl << "Paranthese atteint" << endl;
					position_nb++;
					nb[position_nb] = b;
					nb_chiffre++;
					b.clear();
					break;
				case 44:
					cout << endl << "Virgule atteint" << endl;
					b += ".";
					break;
			}

		} else {
			switch (a) {
				case 48:
					b += a;
					cout << endl << b;
					break;
				case 49:
					b += a;
					cout << endl << b;
					break;
				case 50:
					b += a;
					cout << endl << b;
					break;
				case 51:
					b += a;
					cout << endl << b;
					break;
				case 52:
					b += a;
					cout << endl << b;
					break;
				case 53:
					b += a;
					cout << endl << b;
					break;
				case 54:
					b += a;
					cout << endl << b;
					break;
				case 55:
					b += a;
					cout << endl << b;
					break;
				case 56:
					b += a;
					cout << endl << b;
					break;
				case 57:
					b += a;
					cout << endl << b;
					break;
				default:
					b.clear();
					break;
			}
		}
	}
	pre_filtrage(nb, nb_chiffre, tableau);
}
//}

void pre_filtrage(string nb[50], int quantite, double tableau[40]) {
	int nb_correct = 0;
	for (int i = 0; i < quantite + 2; i++) {
		//double b = 0;
		//cout << endl << endl << "Le nombre recu : " << nb[i];
		if (nb[i].size() != 0) {
			tableau[i] = Conversion_string(nb[i]);
			cout << endl << "Conversion de : " << tableau[i];
			nb_correct++;
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
