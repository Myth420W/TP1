#include <iostream>
#include <vector>

#include "Animal.h"
#include "singe.h"
#include "tigre.h"
#include "rhinoceros.h"

int menu() {
	int choix=1;
	std::cout << "[[ MENU ANIMAUX ]]" << "\n-------------------\n\t1. Ajouter un tigre\n\t2. Ajouter un singe\n\t3. Ajouter un rhinocéros\n\t4. Afficher les informations des animaux\n\t0. Quitter\n-------------------\n\tChoix: ";
	std::cin >> choix;
	while (choix < 0 || choix > 4) {
		std::cout << "\nErreur d'entré, veuillez réessayer.\n\n[[ MENU ANIMAUX ]]" << "\n-------------------\n\t1. Ajouter un tigre\n\t2. Ajouter un singe\n\t3. Ajouter un rhinocéros\n\t4. Afficher les informations des animaux\n\t0. Quitter\n-------------------\n\tChoix: ";
		std::cin >> choix;
	} ;
	return choix;
}

int main() {
	int choix;
	typedef Animal* animal_ptr;
	animal_ptr* animals = new animal_ptr[250];	// 250 maximum pour les animaux
	
	int i = 0;									// Incrémentation pour les animaux
	int nb1 = 1;								// Incrémentation pour les tigres
	int nb2 = 1;								// Incrémentation pour les singes
	int nb3 = 1;								// Incrémentation pour les rhinocéros

	do {
		std::cout << std::endl;
		choix = menu();
		std::cout << std::endl;
		
		if (choix == 1) {	// Tigres
			if (i <= 250) {
				std::cout << "Animal #" << i + 1 << std::endl;

				std::cout << "Tigre #" << nb1 << std::endl;
					// Création des données
				std::string nom;
				std::cout << "Nom: ";
				std::cin >> nom;

				float poids;
				std::cout << "Poids: ";
				std::cin >> poids;

					// Instanciation
				animals[i] = new Tigre(nom, poids);

				i++;
				nb1++;
			}
			else {
				std::cout << "Vous avez atteint le nombre maximum d'animaux, qui est 250, voici l'information de vos animaux:\n" << std::endl;
				choix = 4;
			}
		}
		else if (choix == 2) {	// Singes
			if (i <= 250) {
				std::cout << "Animal #" << i + 1 << std::endl;

				std::cout << "Singe #" << nb2 << std::endl;
				// Création des données
				std::string nom;
				std::cout << "Nom: ";
				std::cin >> nom;

				float poids;
				std::cout << "Poids: ";
				std::cin >> poids;

				bool enclos;
				std::cout << "Enclos (0-1): ";
				std::cin >> enclos;

				// Instanciation
				animals[i] = new Singe(nom, poids, enclos);

				i++;
				nb2++;
			}
			else {
				std::cout << "Vous avez atteint le nombre maximum d'animaux, qui est 250, voici l'information de vos animaux:\n" << std::endl;
				choix = 4;
			}
		}
		else if (choix == 3) {	// Rhinocéros
			if (i <= 250) {
				std::cout << "Animal #" << i + 1 << std::endl;

				std::cout << "Rhinocéros #" << nb3 << std::endl;
				// Création des données
				std::string nom;
				std::cout << "Nom: ";
				std::cin >> nom;

				float poids;
				std::cout << "Poids: ";
				std::cin >> poids;

				int espace;
				std::cout << "Espace >2000: ";
				std::cin >> espace;

				// Instanciation
				animals[i] = new Rhinoceros(nom, poids, espace);

				i++;
				nb3++;
			}
			else {
				std::cout << "Vous avez atteint le nombre maximum d'animaux, qui est 250, voici l'information de vos animaux:\n" << std::endl;
				choix = 4;
			}
		}
		else if (choix == 4) {	// Affichages
			for (int x = 0; x <= i; x++) {
				std::cout << animals[x]->afficherAnimal();
			}
		}
		else{
			std::cout << "Merci et bonne journée!" << std::endl;
			for (int x = 0; x <= i; x++) {delete[] &animals;}
		}
	} while (choix != 0);
}