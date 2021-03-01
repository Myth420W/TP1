#ifndef __TIGRE_H__
#define __TIGRE_H__

#include "Animal.h"

class Tigre : public Animal {
	private:
		float poidsViande;
		float poidsFruits = 0;
		float poidsHerbe = 0;
	public:
		Tigre(std::string nom, float poids);
		std::string afficherAnimal();
};

#endif // __TIGRE_H__