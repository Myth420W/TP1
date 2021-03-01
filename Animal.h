#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string nom="";		// Nom de l'animal
		float poids=0;			// Poids de l'animal
	public:
		Animal(std::string son_nom, float son_poids);	// Instanciation d'animal
		~Animal();										// Delete d'animal
		std::string getNom();							// Retourne le nom de l'animal
		float getPoids();								// Retourne le poids de l'animal
		virtual std::string afficherAnimal()=0;			// Affichage des informations de l'animal
};

#endif // __ANIMAL_H__