#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string nom="";
		float poids=0;
	public:
		Animal(std::string son_nom, float son_poids);
		//Animal();
		~Animal();
		std::string getNom();
		float getPoids();
		virtual std::string afficherAnimal()=0;
		
		
};

#endif // __ANIMAL_H__