#ifndef __RHINOCEROS_H__
#define __RHINOCEROS_H__

#include "Animal.h"		// Inclusion de la classe Animal

class Rhinoceros : public Animal {
	private:
		int espaceEnclos;		// Espace de l'enclos
		float poidsViande = 0;	// Poids de la viande consommé qui est 0 car il est herbivore
		float poidsFruits;		// Poids des fruits consommé
		float poidsHerbes;		// Poids de l'herbe consommé
	public:
		Rhinoceros(std::string nom, float poids, int espace);	// Instanciation de Rhinoceros
		std::string afficherAnimal();							// Affichage du rhinocéros utilisant la classe Animal

		~Rhinoceros();											// Delete de l'objet rhinocéros

		float getViande();										// Retourne le le poids de la viande consommé
		float getFruits();										// Retourne le le poids des fruits consommé
		float getHerbes();										// Retourne le le poids de l'herbe consommé

			// Friends
		friend class Diete;
};

#endif