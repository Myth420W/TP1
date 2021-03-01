#ifndef __RHINOCEROS_H__
#define __RHINOCEROS_H__

#include "Animal.h"

class Rhinoceros : public Animal {
	private:
		int espaceEnclos;
		float poidsViande=0;
		float poidsFruits;
		float poidsHerbes;
	public:
		Rhinoceros(std::string nom, float poids, int espace);
		std::string afficherAnimal();

		~Rhinoceros();

		float getViande();
		float getFruits();
		float getHerbes();

			// Friends
		friend class Diete;

#endif // __RHINOCEROS_H__