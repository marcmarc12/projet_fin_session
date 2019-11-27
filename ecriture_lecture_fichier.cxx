/*
 * ecriture_lecture_fichier.cxx
 *
 *  Created on: 25 nov. 2019.
 *      Author: Marc-Antoine Boisvert
 */

#include "ecriture_lecture_fichier.h"
#include "constant.h"

/*
 * Cette fonction permet de créer le fichier utiliser.
 * Elle ne recoit rien en parametre.
 * Elle renvoie la string qui possede le nom et l'emplacement du fichier
 */
string creation_fichier(int nom) {
	string enplacement_fichier_concatenation;
	string emplacement_fichier;

	//Ouverture du fichier en mode ecriture

	cout << endl << endl << "La date sous ce format YYYY_MM_JJ : ";
	cin >> emplacement_fichier;

	enplacement_fichier_concatenation = emplacement_fichier;
	emplacement_fichier = "Rapport_finale/";
	//emplacement_fichier += "Inventaires_";
	emplacement_fichier += nom_fichier_tab[nom];
	emplacement_fichier += enplacement_fichier_concatenation;
	emplacement_fichier += ".txt";

	ofstream fichier(emplacement_fichier);

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

void lecture_fichier(string emplacement) {
	string c;
	string b;
	ifstream lectureFichier(emplacement);
	if (lectureFichier) {
		cout << "\n Fichier ouvert";
	} else {
		cout << "\n Fichier non ouvert";
		//manque qqch
	}
	for (int i = 0; i < 100; i++) {
		char a;

		lectureFichier.get(a);
		if (a == 59) {
			cout << endl << "Point virgule atteint" << endl;
		} else {
			//cout << a << endl;
			switch (a) {
				case 48:
					b += a;
					break;
				case 49:
					b += a;
					break;
				case 50:
					b += a;
					break;
				case 51:
					b += a;
					break;
				case 52:
					b += a;
					break;
				case 53:
					b += a;
					break;
				case 54:
					b += a;
					break;
				case 55:
					b += a;
					break;
				case 56:
					b += a;
					break;
				case 57:
					b += a;
					break;
				default:
					c = b;
					cout << endl << c;
					b.clear();
					break;
			}
		}
		//cout << endl << c;
	}
}
