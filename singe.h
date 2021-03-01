#ifndef __SINGE_H__
#define __SINGE_H__

#include "Animal.h"

class Singe : public Animal {
	private:
		float poidsViande;
		float poidsFruits;
		float poidsHerbe;
		bool enclos;
	public:
		Singe(std::string nom, float poids, bool son_enclos);
		std::string afficherAnimal();

		std::string getEnclos();
		float getPoidsHerbe();
};

#endif // __SINGE_H__