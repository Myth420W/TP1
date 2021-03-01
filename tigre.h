#ifndef __TIGRE_H__
#define __TIGRE_H__

#include "Animal.h"								// Inclusion de la classe Animal

class Tigre : public Animal {
	private:
		float poidsViande;						// Poids de la viande consommé
		float poidsFruits = 0;					// Poids des fruits consommé
		float poidsHerbe = 0;					// Poids de l'herbe consommé
	public:
		Tigre(std::string nom, float poids);	// Instanciation de l'objet Tigre
		std::string afficherAnimal();			// Affichage de l'objet Tigre en utilisant la classe d'Animal
		~Tigre();								// Delete de l'objet Tigre
};

#endif // __TIGRE_H__