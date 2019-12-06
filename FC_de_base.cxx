/*
 * FC_de_base.cxx
 *
 *  Created on: 21 oct. 2019......
 *      Author: Marc-Antoine.
 */

#include "FC_de_base.h"

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

