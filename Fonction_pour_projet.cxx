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
	//emplacement_fichier += "Inventaires_";
	emplacement_fichier += nom_fichier_tab[nom];
	emplacement_fichier += emplacement_fichier_concatenation;
	emplacement_fichier += ".txt";
}

void lecture_fichier() {
	string c;
	string b;
	string emplacement;
	string nb[50];
	int nb_chiffre = 0;
	//string test[600];
	int position_nb = 0;

	creation_nom_fichier(emplacement, 0);

	ifstream tailleFichier(emplacement);
	tailleFichier.seekg(0, ios::end);
	double taille = tailleFichier.tellg();
	cout << endl << taille << endl;
	tailleFichier.close();

	ifstream lectureFichier(emplacement);
	if (lectureFichier) {
		cout << "\n Fichier ouvert";
	} else {
		cout << "\n Fichier non ouvert";
		//manque qqch
	}
	for (double i = 0; i < taille; i++) {
		char a;

		lectureFichier.get(a);
		//test[pointeur_test] = a;
		if (a == 59 || a == 40 || a == 41 || a == 0 || a == 44) {
			switch (a) {
				case 0:
					c.clear();
					b.clear();
				case 59:
					cout << endl << "Point virgule atteint" << endl;
					position_nb++;
					nb[position_nb] = b;
					nb_chiffre++;
					//b.clear();
					break;
				case 40:
					cout << endl << "Paranthese atteint" << endl;
					position_nb++;
					;
					nb[position_nb] = b;
					//c = b;
					nb_chiffre++;
					b.clear();
					break;
				case 41:
					cout << endl << "Paranthese atteint" << endl;
					position_nb++;
					nb[position_nb] = b;
					nb_chiffre++;
					//c = b;
					b.clear();
					break;
				case 44:
					cout << endl << "Virgule atteint" << endl;
					//pointeur_test = pointeur_test + 1;
					b += ".";
					//test[pointeur_test] = b;
					//c = b;
					//b.clear();
					break;
			}

		} else {
			//cout << a << endl;
			switch (a) {
				case 48:
					b += a;
					//test[pointeur_test] = a;
					cout << endl << b;
					break;
				case 49:
					b += a;
					//test[pointeur_test] = a;
					cout << endl << b;
					break;
				case 50:
					b += a;
					//test[pointeur_test] = a;
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
					/*case 44:
					 cout << endl << "Virgule atteint" << endl;
					 pointeur_test = pointeur_test + 1;
					 b += ".";
					 //c = b;
					 b.clear();
					 break;*/
				default:
					c = b;

					cout << endl << b;
					b.clear();
					//c.clear();
					break;
			}
		}
		//cout << endl << c;
	}
	cout << endl << endl << nb_chiffre;
	test_affichage(nb, nb_chiffre);
	pre_filtrage(nb, nb_chiffre);
}

void pre_filtrage(string nb[50], int quantite) {
	for (int i = 0; i < quantite; i++) {
		double b = 0;
		//int a = nb[i].size();
		//cout << endl << endl << "Size : " << a;
		if (nb[i].size() != 0) {
			b = Conversion_string(nb[i]);
			cout << endl << "Conversion de : " << b;
		}

	}
}

/*
 * Fonction qui convertie un string en entrer en un long double.
 */
double Conversion_string(string nb_recu) {
	double cast;

	stringstream a(nb_recu);
	a >> (cast);

	return cast;
}
