#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	//afficher tableau de 20
	int tableau[20];

	//init chaque case à 1
	for (int i = 0; i < 20; i++) {
		tableau[i] = 1;
		std::cout << tableau[i] << " ";
	}
	std::cout << std::endl;

	//ajouter 5 à chaque case
	for (int i = 0; i < 20; i++) {
		tableau[i] = tableau[i] + 5;
		std::cout << tableau[i] << " ";
	}
	std::cout << std::endl;

	/*
	//ajouter 3 dans les index paires
	for (int i = 0; i < 20; i += 2) {
		tableau[i] += 3;
	}
	std::cout << std::endl;
	*/

	/*
	//ajouter 3 dans les cases paires
	for (int i = 1; i < 20; i += 2) {
		tableau[i] += 3;
	}
	*/

	//ajouter 5 toutes les 5 cases
	for (int i = 0; i < 20; i += 5) {
		tableau[i] += 5;
	}
		
	for (int i = 0; i < 20; i++) {
		std::cout << tableau[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}