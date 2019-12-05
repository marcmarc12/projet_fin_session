/*
 * ecriture_lecture_fichier.cxx
 *
 *  Created on: 25 nov. 2019.
 *      Author: Marc-Antoine Boisvert
 */

#include "ecriture_lecture_fichier.h"
#include "constant.h"
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
/*
 * Cette fonction permet de cr�er le fichier utiliser.
 * Elle ne recoit rien en parametre.
 * Elle renvoie la string qui possede le nom et l'emplacement du fichier
 */
string creation_fichier(int nom) {

	string emplacement_fichier;

	//Ouverture du fichier en mode ecriture
	creation_nom_fichier(emplacement_fichier, nom);

	ofstream fichier(emplacement_fichier, ios::app);

	//Verification si le fichier est ouvert

	if (fichier) {
		cout << "\n Fichier ouvert";
	} else {
		cout << "\n Fichier non ouvert";
		//manque qqch
	}
	return emplacement_fichier;
}

/*
 * Cette fonction permet de faire l'ecriture des donnees pour des quntiter simple
 * Elle recoit en parametre : un string pour le nom du produit, un double pour sa masse, un string pour l'uniter de la masse, et un string pour l'emplacement du fichier
 * Elle ne renvoie rien
 */
void ecriture_fichier_produit_simple(string nom_produit, double masse,
		string unite, string emplacement) {

	ofstream ecritureInventaire(emplacement, ios::app);

	if (ecritureInventaire) {
		cout << "\n Fichier ouvert";
	} else {
		cout << "\n Fichier non ouvert";
		//manque qqch
	}

	ecritureInventaire << nom_produit << ";" << masse << ";" << unite << endl;
}

/*
 * Cette fonction permet de faire l'ecriture des donnees pour des quantite en paquet..
 * Elle recoit en parametre : un string pour le nom du produit, un double pour la quantiter de paquet, un double pour la quantiter dans un paquet,
 * 		double pour les quantitees, un string pour l'uniter et un string pour l'emplacement du fichier.
 * 	Elle ne renvoie rien.
 */
void ecriture_fichier_paquet(string nom_produit, double quantite_paquet,
		double quantite_dans_paquet, double quantite_individuelle, string unite,
		string emplacement, int param1) {

	ofstream ecritureInventaire(emplacement, ios::app);

	if (ecritureInventaire) {
		cout << "\n Fichier ouvert";
	} else {
		cout << "\n Fichier non ouvert";
		//manque qqch
	}
	if (param1) {
		ecritureInventaire << nom_produit << ";" << quantite_paquet << "("
				<< quantite_dans_paquet << ")" << "+" << quantite_individuelle
				<< ";" << unite << endl;
	} else {
		ecritureInventaire << nom_produit << ";" << quantite_paquet << "("
				<< quantite_dans_paquet << ")" << ";" << unite << endl;
	}

}

void ecriture_vente(string produit, double montant, string emplacement) {

	ofstream ecritureAchat(emplacement, ios::app);
	if (ecritureAchat) {
		cout << "\n Fichier ouvert";
	} else {
		cout << "\n Fichier non ouvert";
		//manque qqch
	}

	ecritureAchat << produit << ";" << montant << endl;
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
}
