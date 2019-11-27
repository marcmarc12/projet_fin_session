/*
 * input.h
 *
 *  Created on: 25 nov. 2019....
 *      Author: Marc-Antoine Boisvert
 */

#include <iostream> //pour utiliser des éléments du c++
#include <string>   //pour utiliser des "string"
#include <math.h>   //permet des calculs plus poussés.
#include <stdlib.h> //pour utiliser : NULL, EXIT_FAILURE, etc.
#include <fstream>

using namespace std;

#ifndef INPUT_H_
#define INPUT_H_

void input_paquet(string emplacement, int param1);

void input_simple(string emplacement);

void input_vente(string emplacement);

#endif /* INPUT_H_ */
