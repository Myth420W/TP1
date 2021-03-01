#ifndef __SINGE_H__
#define __SINGE_H__

#include "Animal.h"		// Inclusion de la classe Animal

class Singe : public Animal {
	private:
		float poidsViande;		// Poids de la viande consommé
		float poidsFruits;		// Poids des fruits consommé
		float poidsHerbe;		// Poids de l'herbe consommé
		bool enclos;
	public:
		Singe(std::string nom, float poids, bool son_enclos);	// Instanciation de la classe Singe
		std::string afficherAnimal();							// Affichage de l'animal qui est pris de la Classe Animal
		~Singe();												// Delete de l'objet
		std::string getEnclos();								// Retourne la valeur de l'enclos
		float getPoidsHerbe();									// Retourne le le poids de l'herbe consommé
};

#endif // __SINGE_H__